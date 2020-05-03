// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v3lock.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_v3lock_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_v3lock_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "rpc.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_v3lock_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_v3lock_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_v3lock_2eproto;
namespace v3lockpb {
class LockRequest;
class LockRequestDefaultTypeInternal;
extern LockRequestDefaultTypeInternal _LockRequest_default_instance_;
class LockResponse;
class LockResponseDefaultTypeInternal;
extern LockResponseDefaultTypeInternal _LockResponse_default_instance_;
class UnlockRequest;
class UnlockRequestDefaultTypeInternal;
extern UnlockRequestDefaultTypeInternal _UnlockRequest_default_instance_;
class UnlockResponse;
class UnlockResponseDefaultTypeInternal;
extern UnlockResponseDefaultTypeInternal _UnlockResponse_default_instance_;
}  // namespace v3lockpb
PROTOBUF_NAMESPACE_OPEN
template<> ::v3lockpb::LockRequest* Arena::CreateMaybeMessage<::v3lockpb::LockRequest>(Arena*);
template<> ::v3lockpb::LockResponse* Arena::CreateMaybeMessage<::v3lockpb::LockResponse>(Arena*);
template<> ::v3lockpb::UnlockRequest* Arena::CreateMaybeMessage<::v3lockpb::UnlockRequest>(Arena*);
template<> ::v3lockpb::UnlockResponse* Arena::CreateMaybeMessage<::v3lockpb::UnlockResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace v3lockpb {

// ===================================================================

class LockRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:v3lockpb.LockRequest) */ {
 public:
  LockRequest();
  virtual ~LockRequest();

  LockRequest(const LockRequest& from);
  LockRequest(LockRequest&& from) noexcept
    : LockRequest() {
    *this = ::std::move(from);
  }

  inline LockRequest& operator=(const LockRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline LockRequest& operator=(LockRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LockRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LockRequest* internal_default_instance() {
    return reinterpret_cast<const LockRequest*>(
               &_LockRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LockRequest& a, LockRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(LockRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LockRequest* New() const final {
    return CreateMaybeMessage<LockRequest>(nullptr);
  }

  LockRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LockRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LockRequest& from);
  void MergeFrom(const LockRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LockRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "v3lockpb.LockRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_v3lock_2eproto);
    return ::descriptor_table_v3lock_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kLeaseFieldNumber = 2,
  };
  // bytes name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int64 lease = 2;
  void clear_lease();
  ::PROTOBUF_NAMESPACE_ID::int64 lease() const;
  void set_lease(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_lease() const;
  void _internal_set_lease(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:v3lockpb.LockRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int64 lease_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_v3lock_2eproto;
};
// -------------------------------------------------------------------

class LockResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:v3lockpb.LockResponse) */ {
 public:
  LockResponse();
  virtual ~LockResponse();

  LockResponse(const LockResponse& from);
  LockResponse(LockResponse&& from) noexcept
    : LockResponse() {
    *this = ::std::move(from);
  }

  inline LockResponse& operator=(const LockResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline LockResponse& operator=(LockResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LockResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LockResponse* internal_default_instance() {
    return reinterpret_cast<const LockResponse*>(
               &_LockResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LockResponse& a, LockResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(LockResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LockResponse* New() const final {
    return CreateMaybeMessage<LockResponse>(nullptr);
  }

  LockResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LockResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LockResponse& from);
  void MergeFrom(const LockResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LockResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "v3lockpb.LockResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_v3lock_2eproto);
    return ::descriptor_table_v3lock_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 2,
    kHeaderFieldNumber = 1,
  };
  // bytes key = 2;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // .etcdserverpb.ResponseHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::etcdserverpb::ResponseHeader& header() const;
  ::etcdserverpb::ResponseHeader* release_header();
  ::etcdserverpb::ResponseHeader* mutable_header();
  void set_allocated_header(::etcdserverpb::ResponseHeader* header);
  private:
  const ::etcdserverpb::ResponseHeader& _internal_header() const;
  ::etcdserverpb::ResponseHeader* _internal_mutable_header();
  public:

  // @@protoc_insertion_point(class_scope:v3lockpb.LockResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  ::etcdserverpb::ResponseHeader* header_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_v3lock_2eproto;
};
// -------------------------------------------------------------------

class UnlockRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:v3lockpb.UnlockRequest) */ {
 public:
  UnlockRequest();
  virtual ~UnlockRequest();

  UnlockRequest(const UnlockRequest& from);
  UnlockRequest(UnlockRequest&& from) noexcept
    : UnlockRequest() {
    *this = ::std::move(from);
  }

  inline UnlockRequest& operator=(const UnlockRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline UnlockRequest& operator=(UnlockRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const UnlockRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnlockRequest* internal_default_instance() {
    return reinterpret_cast<const UnlockRequest*>(
               &_UnlockRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(UnlockRequest& a, UnlockRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(UnlockRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UnlockRequest* New() const final {
    return CreateMaybeMessage<UnlockRequest>(nullptr);
  }

  UnlockRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UnlockRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UnlockRequest& from);
  void MergeFrom(const UnlockRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UnlockRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "v3lockpb.UnlockRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_v3lock_2eproto);
    return ::descriptor_table_v3lock_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kKeyFieldNumber = 1,
  };
  // bytes key = 1;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);
  private:
  const std::string& _internal_key() const;
  void _internal_set_key(const std::string& value);
  std::string* _internal_mutable_key();
  public:

  // @@protoc_insertion_point(class_scope:v3lockpb.UnlockRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_v3lock_2eproto;
};
// -------------------------------------------------------------------

class UnlockResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:v3lockpb.UnlockResponse) */ {
 public:
  UnlockResponse();
  virtual ~UnlockResponse();

  UnlockResponse(const UnlockResponse& from);
  UnlockResponse(UnlockResponse&& from) noexcept
    : UnlockResponse() {
    *this = ::std::move(from);
  }

  inline UnlockResponse& operator=(const UnlockResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline UnlockResponse& operator=(UnlockResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const UnlockResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnlockResponse* internal_default_instance() {
    return reinterpret_cast<const UnlockResponse*>(
               &_UnlockResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(UnlockResponse& a, UnlockResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(UnlockResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UnlockResponse* New() const final {
    return CreateMaybeMessage<UnlockResponse>(nullptr);
  }

  UnlockResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UnlockResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UnlockResponse& from);
  void MergeFrom(const UnlockResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UnlockResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "v3lockpb.UnlockResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_v3lock_2eproto);
    return ::descriptor_table_v3lock_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
  };
  // .etcdserverpb.ResponseHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::etcdserverpb::ResponseHeader& header() const;
  ::etcdserverpb::ResponseHeader* release_header();
  ::etcdserverpb::ResponseHeader* mutable_header();
  void set_allocated_header(::etcdserverpb::ResponseHeader* header);
  private:
  const ::etcdserverpb::ResponseHeader& _internal_header() const;
  ::etcdserverpb::ResponseHeader* _internal_mutable_header();
  public:

  // @@protoc_insertion_point(class_scope:v3lockpb.UnlockResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::etcdserverpb::ResponseHeader* header_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_v3lock_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LockRequest

// bytes name = 1;
inline void LockRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LockRequest::name() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockRequest.name)
  return _internal_name();
}
inline void LockRequest::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:v3lockpb.LockRequest.name)
}
inline std::string* LockRequest::mutable_name() {
  // @@protoc_insertion_point(field_mutable:v3lockpb.LockRequest.name)
  return _internal_mutable_name();
}
inline const std::string& LockRequest::_internal_name() const {
  return name_.GetNoArena();
}
inline void LockRequest::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LockRequest::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3lockpb.LockRequest.name)
}
inline void LockRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3lockpb.LockRequest.name)
}
inline void LockRequest::set_name(const void* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3lockpb.LockRequest.name)
}
inline std::string* LockRequest::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LockRequest::release_name() {
  // @@protoc_insertion_point(field_release:v3lockpb.LockRequest.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LockRequest::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.LockRequest.name)
}

// int64 lease = 2;
inline void LockRequest::clear_lease() {
  lease_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LockRequest::_internal_lease() const {
  return lease_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LockRequest::lease() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockRequest.lease)
  return _internal_lease();
}
inline void LockRequest::_internal_set_lease(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  lease_ = value;
}
inline void LockRequest::set_lease(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_lease(value);
  // @@protoc_insertion_point(field_set:v3lockpb.LockRequest.lease)
}

// -------------------------------------------------------------------

// LockResponse

// .etcdserverpb.ResponseHeader header = 1;
inline bool LockResponse::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool LockResponse::has_header() const {
  return _internal_has_header();
}
inline const ::etcdserverpb::ResponseHeader& LockResponse::_internal_header() const {
  const ::etcdserverpb::ResponseHeader* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::etcdserverpb::ResponseHeader*>(
      &::etcdserverpb::_ResponseHeader_default_instance_);
}
inline const ::etcdserverpb::ResponseHeader& LockResponse::header() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockResponse.header)
  return _internal_header();
}
inline ::etcdserverpb::ResponseHeader* LockResponse::release_header() {
  // @@protoc_insertion_point(field_release:v3lockpb.LockResponse.header)
  
  ::etcdserverpb::ResponseHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::etcdserverpb::ResponseHeader* LockResponse::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::etcdserverpb::ResponseHeader>(GetArenaNoVirtual());
    header_ = p;
  }
  return header_;
}
inline ::etcdserverpb::ResponseHeader* LockResponse::mutable_header() {
  // @@protoc_insertion_point(field_mutable:v3lockpb.LockResponse.header)
  return _internal_mutable_header();
}
inline void LockResponse::set_allocated_header(::etcdserverpb::ResponseHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.LockResponse.header)
}

// bytes key = 2;
inline void LockResponse::clear_key() {
  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LockResponse::key() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockResponse.key)
  return _internal_key();
}
inline void LockResponse::set_key(const std::string& value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:v3lockpb.LockResponse.key)
}
inline std::string* LockResponse::mutable_key() {
  // @@protoc_insertion_point(field_mutable:v3lockpb.LockResponse.key)
  return _internal_mutable_key();
}
inline const std::string& LockResponse::_internal_key() const {
  return key_.GetNoArena();
}
inline void LockResponse::_internal_set_key(const std::string& value) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void LockResponse::set_key(std::string&& value) {
  
  key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3lockpb.LockResponse.key)
}
inline void LockResponse::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3lockpb.LockResponse.key)
}
inline void LockResponse::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3lockpb.LockResponse.key)
}
inline std::string* LockResponse::_internal_mutable_key() {
  
  return key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LockResponse::release_key() {
  // @@protoc_insertion_point(field_release:v3lockpb.LockResponse.key)
  
  return key_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LockResponse::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.LockResponse.key)
}

// -------------------------------------------------------------------

// UnlockRequest

// bytes key = 1;
inline void UnlockRequest::clear_key() {
  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& UnlockRequest::key() const {
  // @@protoc_insertion_point(field_get:v3lockpb.UnlockRequest.key)
  return _internal_key();
}
inline void UnlockRequest::set_key(const std::string& value) {
  _internal_set_key(value);
  // @@protoc_insertion_point(field_set:v3lockpb.UnlockRequest.key)
}
inline std::string* UnlockRequest::mutable_key() {
  // @@protoc_insertion_point(field_mutable:v3lockpb.UnlockRequest.key)
  return _internal_mutable_key();
}
inline const std::string& UnlockRequest::_internal_key() const {
  return key_.GetNoArena();
}
inline void UnlockRequest::_internal_set_key(const std::string& value) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void UnlockRequest::set_key(std::string&& value) {
  
  key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3lockpb.UnlockRequest.key)
}
inline void UnlockRequest::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3lockpb.UnlockRequest.key)
}
inline void UnlockRequest::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3lockpb.UnlockRequest.key)
}
inline std::string* UnlockRequest::_internal_mutable_key() {
  
  return key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* UnlockRequest::release_key() {
  // @@protoc_insertion_point(field_release:v3lockpb.UnlockRequest.key)
  
  return key_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void UnlockRequest::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.UnlockRequest.key)
}

// -------------------------------------------------------------------

// UnlockResponse

// .etcdserverpb.ResponseHeader header = 1;
inline bool UnlockResponse::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool UnlockResponse::has_header() const {
  return _internal_has_header();
}
inline const ::etcdserverpb::ResponseHeader& UnlockResponse::_internal_header() const {
  const ::etcdserverpb::ResponseHeader* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::etcdserverpb::ResponseHeader*>(
      &::etcdserverpb::_ResponseHeader_default_instance_);
}
inline const ::etcdserverpb::ResponseHeader& UnlockResponse::header() const {
  // @@protoc_insertion_point(field_get:v3lockpb.UnlockResponse.header)
  return _internal_header();
}
inline ::etcdserverpb::ResponseHeader* UnlockResponse::release_header() {
  // @@protoc_insertion_point(field_release:v3lockpb.UnlockResponse.header)
  
  ::etcdserverpb::ResponseHeader* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::etcdserverpb::ResponseHeader* UnlockResponse::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::etcdserverpb::ResponseHeader>(GetArenaNoVirtual());
    header_ = p;
  }
  return header_;
}
inline ::etcdserverpb::ResponseHeader* UnlockResponse::mutable_header() {
  // @@protoc_insertion_point(field_mutable:v3lockpb.UnlockResponse.header)
  return _internal_mutable_header();
}
inline void UnlockResponse::set_allocated_header(::etcdserverpb::ResponseHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.UnlockResponse.header)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v3lockpb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_v3lock_2eproto
