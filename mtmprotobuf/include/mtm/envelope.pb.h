// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/envelope.proto

#ifndef PROTOBUF_INCLUDED_mtm_2fenvelope_2eproto
#define PROTOBUF_INCLUDED_mtm_2fenvelope_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_mtm_2fenvelope_2eproto 

namespace protobuf_mtm_2fenvelope_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_mtm_2fenvelope_2eproto
namespace mtm {
class Envelope;
class EnvelopeDefaultTypeInternal;
extern EnvelopeDefaultTypeInternal _Envelope_default_instance_;
}  // namespace mtm
namespace google {
namespace protobuf {
template<> ::mtm::Envelope* Arena::CreateMaybeMessage<::mtm::Envelope>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace mtm {

// ===================================================================

class Envelope : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mtm.Envelope) */ {
 public:
  Envelope();
  virtual ~Envelope();

  Envelope(const Envelope& from);

  inline Envelope& operator=(const Envelope& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Envelope(Envelope&& from) noexcept
    : Envelope() {
    *this = ::std::move(from);
  }

  inline Envelope& operator=(Envelope&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Envelope& default_instance();

  enum ContentCase {
    kMessage = 7,
    kBlob = 8,
    CONTENT_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Envelope* internal_default_instance() {
    return reinterpret_cast<const Envelope*>(
               &_Envelope_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Envelope* other);
  friend void swap(Envelope& a, Envelope& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Envelope* New() const final {
    return CreateMaybeMessage<Envelope>(NULL);
  }

  Envelope* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Envelope>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Envelope& from);
  void MergeFrom(const Envelope& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Envelope* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.Timestamp time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  private:
  const ::google::protobuf::Timestamp& _internal_time() const;
  public:
  const ::google::protobuf::Timestamp& time() const;
  ::google::protobuf::Timestamp* release_time();
  ::google::protobuf::Timestamp* mutable_time();
  void set_allocated_time(::google::protobuf::Timestamp* time);

  // uint32 key_id = 2;
  void clear_key_id();
  static const int kKeyIdFieldNumber = 2;
  ::google::protobuf::uint32 key_id() const;
  void set_key_id(::google::protobuf::uint32 value);

  // uint32 key_server_id = 3;
  void clear_key_server_id();
  static const int kKeyServerIdFieldNumber = 3;
  ::google::protobuf::uint32 key_server_id() const;
  void set_key_server_id(::google::protobuf::uint32 value);

  // uint32 key_seq_no = 4;
  void clear_key_seq_no();
  static const int kKeySeqNoFieldNumber = 4;
  ::google::protobuf::uint32 key_seq_no() const;
  void set_key_seq_no(::google::protobuf::uint32 value);

  // uint32 source_id = 5;
  void clear_source_id();
  static const int kSourceIdFieldNumber = 5;
  ::google::protobuf::uint32 source_id() const;
  void set_source_id(::google::protobuf::uint32 value);

  // uint32 checksum = 6;
  void clear_checksum();
  static const int kChecksumFieldNumber = 6;
  ::google::protobuf::uint32 checksum() const;
  void set_checksum(::google::protobuf::uint32 value);

  // .google.protobuf.Any message = 7;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 7;
  private:
  const ::google::protobuf::Any& _internal_message() const;
  public:
  const ::google::protobuf::Any& message() const;
  ::google::protobuf::Any* release_message();
  ::google::protobuf::Any* mutable_message();
  void set_allocated_message(::google::protobuf::Any* message);

  // bytes blob = 8;
  private:
  bool has_blob() const;
  public:
  void clear_blob();
  static const int kBlobFieldNumber = 8;
  const ::std::string& blob() const;
  void set_blob(const ::std::string& value);
  #if LANG_CXX11
  void set_blob(::std::string&& value);
  #endif
  void set_blob(const char* value);
  void set_blob(const void* value, size_t size);
  ::std::string* mutable_blob();
  ::std::string* release_blob();
  void set_allocated_blob(::std::string* blob);

  void clear_content();
  ContentCase content_case() const;
  // @@protoc_insertion_point(class_scope:mtm.Envelope)
 private:
  void set_has_message();
  void set_has_blob();

  inline bool has_content() const;
  inline void clear_has_content();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::Timestamp* time_;
  ::google::protobuf::uint32 key_id_;
  ::google::protobuf::uint32 key_server_id_;
  ::google::protobuf::uint32 key_seq_no_;
  ::google::protobuf::uint32 source_id_;
  ::google::protobuf::uint32 checksum_;
  union ContentUnion {
    ContentUnion() {}
    ::google::protobuf::Any* message_;
    ::google::protobuf::internal::ArenaStringPtr blob_;
  } content_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_mtm_2fenvelope_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Envelope

// .google.protobuf.Timestamp time = 1;
inline bool Envelope::has_time() const {
  return this != internal_default_instance() && time_ != NULL;
}
inline const ::google::protobuf::Timestamp& Envelope::_internal_time() const {
  return *time_;
}
inline const ::google::protobuf::Timestamp& Envelope::time() const {
  const ::google::protobuf::Timestamp* p = time_;
  // @@protoc_insertion_point(field_get:mtm.Envelope.time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* Envelope::release_time() {
  // @@protoc_insertion_point(field_release:mtm.Envelope.time)
  
  ::google::protobuf::Timestamp* temp = time_;
  time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* Envelope::mutable_time() {
  
  if (time_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Timestamp>(GetArenaNoVirtual());
    time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:mtm.Envelope.time)
  return time_;
}
inline void Envelope::set_allocated_time(::google::protobuf::Timestamp* time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(time_);
  }
  if (time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(time)->GetArena();
    if (message_arena != submessage_arena) {
      time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    
  } else {
    
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:mtm.Envelope.time)
}

// uint32 key_id = 2;
inline void Envelope::clear_key_id() {
  key_id_ = 0u;
}
inline ::google::protobuf::uint32 Envelope::key_id() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.key_id)
  return key_id_;
}
inline void Envelope::set_key_id(::google::protobuf::uint32 value) {
  
  key_id_ = value;
  // @@protoc_insertion_point(field_set:mtm.Envelope.key_id)
}

// uint32 key_server_id = 3;
inline void Envelope::clear_key_server_id() {
  key_server_id_ = 0u;
}
inline ::google::protobuf::uint32 Envelope::key_server_id() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.key_server_id)
  return key_server_id_;
}
inline void Envelope::set_key_server_id(::google::protobuf::uint32 value) {
  
  key_server_id_ = value;
  // @@protoc_insertion_point(field_set:mtm.Envelope.key_server_id)
}

// uint32 key_seq_no = 4;
inline void Envelope::clear_key_seq_no() {
  key_seq_no_ = 0u;
}
inline ::google::protobuf::uint32 Envelope::key_seq_no() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.key_seq_no)
  return key_seq_no_;
}
inline void Envelope::set_key_seq_no(::google::protobuf::uint32 value) {
  
  key_seq_no_ = value;
  // @@protoc_insertion_point(field_set:mtm.Envelope.key_seq_no)
}

// uint32 source_id = 5;
inline void Envelope::clear_source_id() {
  source_id_ = 0u;
}
inline ::google::protobuf::uint32 Envelope::source_id() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.source_id)
  return source_id_;
}
inline void Envelope::set_source_id(::google::protobuf::uint32 value) {
  
  source_id_ = value;
  // @@protoc_insertion_point(field_set:mtm.Envelope.source_id)
}

// uint32 checksum = 6;
inline void Envelope::clear_checksum() {
  checksum_ = 0u;
}
inline ::google::protobuf::uint32 Envelope::checksum() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.checksum)
  return checksum_;
}
inline void Envelope::set_checksum(::google::protobuf::uint32 value) {
  
  checksum_ = value;
  // @@protoc_insertion_point(field_set:mtm.Envelope.checksum)
}

// .google.protobuf.Any message = 7;
inline bool Envelope::has_message() const {
  return content_case() == kMessage;
}
inline void Envelope::set_has_message() {
  _oneof_case_[0] = kMessage;
}
inline const ::google::protobuf::Any& Envelope::_internal_message() const {
  return *content_.message_;
}
inline ::google::protobuf::Any* Envelope::release_message() {
  // @@protoc_insertion_point(field_release:mtm.Envelope.message)
  if (has_message()) {
    clear_has_content();
      ::google::protobuf::Any* temp = content_.message_;
    content_.message_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::google::protobuf::Any& Envelope::message() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.message)
  return has_message()
      ? *content_.message_
      : *reinterpret_cast< ::google::protobuf::Any*>(&::google::protobuf::_Any_default_instance_);
}
inline ::google::protobuf::Any* Envelope::mutable_message() {
  if (!has_message()) {
    clear_content();
    set_has_message();
    content_.message_ = CreateMaybeMessage< ::google::protobuf::Any >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:mtm.Envelope.message)
  return content_.message_;
}

// bytes blob = 8;
inline bool Envelope::has_blob() const {
  return content_case() == kBlob;
}
inline void Envelope::set_has_blob() {
  _oneof_case_[0] = kBlob;
}
inline void Envelope::clear_blob() {
  if (has_blob()) {
    content_.blob_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_content();
  }
}
inline const ::std::string& Envelope::blob() const {
  // @@protoc_insertion_point(field_get:mtm.Envelope.blob)
  if (has_blob()) {
    return content_.blob_.GetNoArena();
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Envelope::set_blob(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:mtm.Envelope.blob)
  if (!has_blob()) {
    clear_content();
    set_has_blob();
    content_.blob_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  content_.blob_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mtm.Envelope.blob)
}
#if LANG_CXX11
inline void Envelope::set_blob(::std::string&& value) {
  // @@protoc_insertion_point(field_set:mtm.Envelope.blob)
  if (!has_blob()) {
    clear_content();
    set_has_blob();
    content_.blob_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  content_.blob_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mtm.Envelope.blob)
}
#endif
inline void Envelope::set_blob(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  if (!has_blob()) {
    clear_content();
    set_has_blob();
    content_.blob_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  content_.blob_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mtm.Envelope.blob)
}
inline void Envelope::set_blob(const void* value, size_t size) {
  if (!has_blob()) {
    clear_content();
    set_has_blob();
    content_.blob_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  content_.blob_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mtm.Envelope.blob)
}
inline ::std::string* Envelope::mutable_blob() {
  if (!has_blob()) {
    clear_content();
    set_has_blob();
    content_.blob_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:mtm.Envelope.blob)
  return content_.blob_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Envelope::release_blob() {
  // @@protoc_insertion_point(field_release:mtm.Envelope.blob)
  if (has_blob()) {
    clear_has_content();
    return content_.blob_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Envelope::set_allocated_blob(::std::string* blob) {
  if (!has_blob()) {
    content_.blob_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_content();
  if (blob != NULL) {
    set_has_blob();
    content_.blob_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), blob);
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.Envelope.blob)
}

inline bool Envelope::has_content() const {
  return content_case() != CONTENT_NOT_SET;
}
inline void Envelope::clear_has_content() {
  _oneof_case_[0] = CONTENT_NOT_SET;
}
inline Envelope::ContentCase Envelope::content_case() const {
  return Envelope::ContentCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mtm

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_mtm_2fenvelope_2eproto
