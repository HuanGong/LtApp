#include "etcd_client.h"
#include "proto/kv.pb.h"
#include "proto/rpc.pb.h"
#include "grpcpp/impl/codegen/client_context.h"
#include "grpcpp/impl/codegen/completion_queue.h"

#include "context/call_context.h"
#include "base/coroutine/coroutine_runner.h"

using etcdserverpb::PutRequest;
using etcdserverpb::LeaseGrantResponse;
using etcdserverpb::LeaseKeepAliveResponse;
namespace lt {

EtcdClientV3::EtcdClientV3(MessageLoop* io)
  : loop_(io) {
}

EtcdClientV3::~EtcdClientV3() {
  c_queue_.Shutdown();
  if (thread_->joinable()) {
    thread_->join();
  }
}

int64_t EtcdClientV3::Put(const KeyValue& kvs) {
  PutRequest request;

  request.set_key(kvs.key());
  request.set_value(kvs.value());
  request.set_lease(kvs.lease());

  return Put(request);
}

int64_t EtcdClientV3::Put(const PutRequest& request) {
  CHECK(co_can_yield);

  typedef ResponseCallContext<PutResponse> PutContext;

  PutContext call_context;

  etcd_ctx_await_pre(call_context);
  auto reader = kv_stub_->AsyncPut(&call_context.context, request, &c_queue_);
  reader->Finish(&call_context.response,&call_context.status, &call_context);
  etcd_ctx_await_end(call_context);

  if (!call_context.IsOK()) {
    return -1;
  }
  return call_context.response.header().revision();
}

KeyValues EtcdClientV3::Range(const std::string& key, bool with_prefix) {
  CHECK(co_can_yield);

  typedef ResponseCallContext<RangeResponse> RangeCallContext;

  RangeRequest get_request;
  get_request.set_key(key);
  if (with_prefix) {
    std::string range_end(key);
    int ascii = (int)range_end[range_end.length()-1];
    range_end.back() = ascii+1;
    get_request.set_range_end(range_end);
    get_request.set_sort_target(RangeRequest::SortTarget::RangeRequest_SortTarget_KEY);
    get_request.set_sort_order(RangeRequest::SortOrder::RangeRequest_SortOrder_ASCEND);
  }

  RangeCallContext call_ctx;

  etcd_ctx_await_pre(call_ctx);
  auto reader = kv_stub_->AsyncRange(&call_ctx.context, get_request, &c_queue_);
  reader->Finish(&call_ctx.response, &call_ctx.status, &call_ctx);
  etcd_ctx_await_end(call_ctx);

  if (!call_ctx.IsOK()) {
    return KeyValues();
  }

  KeyValues kvs;
  for (auto& kv : call_ctx.response.kvs()) {
    kvs.emplace_back(kv);
  }
  return kvs;
}

int64_t EtcdClientV3::LeaseGrant(int ttl) {
  CHECK(co_can_yield);
  typedef ResponseCallContext<LeaseGrantResponse> LeaseGrantContext;

  etcdserverpb::LeaseGrantRequest request;
  request.set_ttl(ttl);

  LeaseGrantContext call_context;

  etcd_ctx_await_pre(call_context);
  auto reader = lease_stub_->AsyncLeaseGrant(&call_context.context, request, &c_queue_);
  reader->Finish(&(call_context.response), &(call_context.status), &call_context);
  etcd_ctx_await_end(call_context);

  return call_context.response.id();
}

bool EtcdClientV3::LeaseKeepalive(int64_t lease, int64_t interval) {
  CHECK(co_can_yield);
  const int64_t keepalive_max_delay = 6 * interval;

  typedef ResponseCallContext<LeaseKeepAliveResponse> KeepAliveContext;
  typedef std::shared_ptr<KeepAliveContext> RefKeepAliveContext;

  RefKeepAliveContext call_ctx(new KeepAliveContext);

  etcd_ctx_await_pre(*call_ctx);
  auto client_ctx = call_ctx->ClientContext();
  auto stream = lease_stub_->AsyncLeaseKeepAlive(client_ctx, &c_queue_, call_ctx.get());
  etcd_ctx_await_end(*call_ctx);

  VLOG(GLOG_VINFO) << "lease keep alive stream connted";
  LOG(INFO) << "lease keepalive stream connted";

  int64_t keepalive_request_ok_ts = 0;

  co_go [&, call_ctx]() {
    CallContext write_context;
    LeaseKeepAliveRequest request;
    request.set_id(lease);

    while(true) {

      LOG(INFO) << "lease keepalive send keepalive request";
      etcd_ctx_await_pre(write_context);
      stream->Write(request, &write_context);
      etcd_ctx_await_end(write_context);
      LOG(INFO) << "lease keepalive send keepalive request";

      int64_t last_success = keepalive_request_ok_ts;
      if (write_context.Success()) {

        keepalive_request_ok_ts = std::time(NULL);
        LOG(INFO) << __func__ << "lease keepalive send done";

      } else if (std::time(NULL) - keepalive_request_ok_ts > keepalive_max_delay) {

        LOG(INFO) << __func__ << "lease keepalive send failed";
        LOG(INFO) << __func__ << "lease keepalive close writer";
        etcd_ctx_await_pre(write_context);
        stream->WritesDone(&write_context);
        etcd_ctx_await_pre(write_context);
        break;
      }

      co_sleep(interval);
    }
  };

  do {
    etcd_ctx_await_pre(*call_ctx);
    stream->Read(&(call_ctx->response), call_ctx.get());
    etcd_ctx_await_end(*call_ctx);

    if (!call_ctx->Success()) {
      LOG(INFO) << __func__ << " keepalive wait response failed";
      continue;
    }
    LOG(INFO) << __func__ << " keepalive response:" << call_ctx->GetResponse().ttl();
  }while(std::time(NULL) - keepalive_request_ok_ts > keepalive_max_delay);

  //got final status from server
  etcd_ctx_await_pre(*call_ctx);
  stream->Finish(&(call_ctx->status), call_ctx.get());
  etcd_ctx_await_end(*call_ctx);
  LOG(INFO) << __func__ << " keepalive end with status:" << call_ctx->DumpStatusMessage();
  return call_ctx->IsOK();
}

void EtcdClientV3::Initilize(const Options& opt) {
  auto channel = grpc::CreateChannel(opt.addr, grpc::InsecureChannelCredentials());
  CHECK(channel);

  kv_stub_= KV::NewStub(channel);
  watch_stub_ = Watch::NewStub(channel);
  lease_stub_ = Lease::NewStub(channel);
  thread_.reset(new std::thread(std::bind(&EtcdClientV3::PollCompleteQueueMain, this)));
}

void EtcdClientV3::PollCompleteQueueMain() {
  void* got_tag;
  bool ok = false;

  // Block until the next result is available in the completion queue "cq".
  while (c_queue_.Next(&got_tag, &ok)) {
    // Verify that the request was completed successfully. Note that "ok"
    // corresponds solely to the request for updates introduced by Finish().
    LOG_IF(ERROR, !ok) << " grpc operation failed for context:" << got_tag;

    // The tag in this example is the memory location of the call object
    CallContext* call_context = static_cast<CallContext*>(got_tag);
    GPR_ASSERT(call_context);

    call_context->ResumeContext(ok);
  }
  LOG(INFO) << __func__ << " etcd grpc CompletionQueue poll end";
}


}//end lt
