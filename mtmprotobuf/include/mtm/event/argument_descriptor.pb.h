// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/event/argument_descriptor.proto

#ifndef PROTOBUF_mtm_2fevent_2fargument_5fdescriptor_2eproto__INCLUDED
#define PROTOBUF_mtm_2fevent_2fargument_5fdescriptor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
#include "mtm/common_types.pb.h"
// @@protoc_insertion_point(includes)

namespace mtm {
namespace event {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_mtm_2fevent_2fargument_5fdescriptor_2eproto();
void protobuf_AssignDesc_mtm_2fevent_2fargument_5fdescriptor_2eproto();
void protobuf_ShutdownFile_mtm_2fevent_2fargument_5fdescriptor_2eproto();

class ArgumentDescriptor;

// ===================================================================

class ArgumentDescriptor : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mtm.event.ArgumentDescriptor) */ {
 public:
  ArgumentDescriptor();
  virtual ~ArgumentDescriptor();

  ArgumentDescriptor(const ArgumentDescriptor& from);

  inline ArgumentDescriptor& operator=(const ArgumentDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ArgumentDescriptor& default_instance();

  void Swap(ArgumentDescriptor* other);

  // implements Message ----------------------------------------------

  inline ArgumentDescriptor* New() const { return New(NULL); }

  ArgumentDescriptor* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ArgumentDescriptor& from);
  void MergeFrom(const ArgumentDescriptor& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ArgumentDescriptor* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional .google.protobuf.StringValue description = 2;
  bool has_description() const;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::google::protobuf::StringValue& description() const;
  ::google::protobuf::StringValue* mutable_description();
  ::google::protobuf::StringValue* release_description();
  void set_allocated_description(::google::protobuf::StringValue* description);

  // optional bool optional = 3;
  void clear_optional();
  static const int kOptionalFieldNumber = 3;
  bool optional() const;
  void set_optional(bool value);

  // optional .mtm.TypeUrl type_url = 10;
  bool has_type_url() const;
  void clear_type_url();
  static const int kTypeUrlFieldNumber = 10;
  const ::mtm::TypeUrl& type_url() const;
  ::mtm::TypeUrl* mutable_type_url();
  ::mtm::TypeUrl* release_type_url();
  void set_allocated_type_url(::mtm::TypeUrl* type_url);

  // @@protoc_insertion_point(class_scope:mtm.event.ArgumentDescriptor)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::StringValue* description_;
  ::mtm::TypeUrl* type_url_;
  bool optional_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_mtm_2fevent_2fargument_5fdescriptor_2eproto();
  friend void protobuf_AssignDesc_mtm_2fevent_2fargument_5fdescriptor_2eproto();
  friend void protobuf_ShutdownFile_mtm_2fevent_2fargument_5fdescriptor_2eproto();

  void InitAsDefaultInstance();
  static ArgumentDescriptor* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ArgumentDescriptor

// optional string name = 1;
inline void ArgumentDescriptor::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ArgumentDescriptor::name() const {
  // @@protoc_insertion_point(field_get:mtm.event.ArgumentDescriptor.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ArgumentDescriptor::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mtm.event.ArgumentDescriptor.name)
}
inline void ArgumentDescriptor::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mtm.event.ArgumentDescriptor.name)
}
inline void ArgumentDescriptor::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mtm.event.ArgumentDescriptor.name)
}
inline ::std::string* ArgumentDescriptor::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:mtm.event.ArgumentDescriptor.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ArgumentDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:mtm.event.ArgumentDescriptor.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ArgumentDescriptor::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:mtm.event.ArgumentDescriptor.name)
}

// optional .google.protobuf.StringValue description = 2;
inline bool ArgumentDescriptor::has_description() const {
  return !_is_default_instance_ && description_ != NULL;
}
inline void ArgumentDescriptor::clear_description() {
  if (GetArenaNoVirtual() == NULL && description_ != NULL) delete description_;
  description_ = NULL;
}
inline const ::google::protobuf::StringValue& ArgumentDescriptor::description() const {
  // @@protoc_insertion_point(field_get:mtm.event.ArgumentDescriptor.description)
  return description_ != NULL ? *description_ : *default_instance_->description_;
}
inline ::google::protobuf::StringValue* ArgumentDescriptor::mutable_description() {
  
  if (description_ == NULL) {
    description_ = new ::google::protobuf::StringValue;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.ArgumentDescriptor.description)
  return description_;
}
inline ::google::protobuf::StringValue* ArgumentDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:mtm.event.ArgumentDescriptor.description)
  
  ::google::protobuf::StringValue* temp = description_;
  description_ = NULL;
  return temp;
}
inline void ArgumentDescriptor::set_allocated_description(::google::protobuf::StringValue* description) {
  delete description_;
  if (description != NULL && description->GetArena() != NULL) {
    ::google::protobuf::StringValue* new_description = new ::google::protobuf::StringValue;
    new_description->CopyFrom(*description);
    description = new_description;
  }
  description_ = description;
  if (description) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.ArgumentDescriptor.description)
}

// optional bool optional = 3;
inline void ArgumentDescriptor::clear_optional() {
  optional_ = false;
}
inline bool ArgumentDescriptor::optional() const {
  // @@protoc_insertion_point(field_get:mtm.event.ArgumentDescriptor.optional)
  return optional_;
}
inline void ArgumentDescriptor::set_optional(bool value) {
  
  optional_ = value;
  // @@protoc_insertion_point(field_set:mtm.event.ArgumentDescriptor.optional)
}

// optional .mtm.TypeUrl type_url = 10;
inline bool ArgumentDescriptor::has_type_url() const {
  return !_is_default_instance_ && type_url_ != NULL;
}
inline void ArgumentDescriptor::clear_type_url() {
  if (GetArenaNoVirtual() == NULL && type_url_ != NULL) delete type_url_;
  type_url_ = NULL;
}
inline const ::mtm::TypeUrl& ArgumentDescriptor::type_url() const {
  // @@protoc_insertion_point(field_get:mtm.event.ArgumentDescriptor.type_url)
  return type_url_ != NULL ? *type_url_ : *default_instance_->type_url_;
}
inline ::mtm::TypeUrl* ArgumentDescriptor::mutable_type_url() {
  
  if (type_url_ == NULL) {
    type_url_ = new ::mtm::TypeUrl;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.ArgumentDescriptor.type_url)
  return type_url_;
}
inline ::mtm::TypeUrl* ArgumentDescriptor::release_type_url() {
  // @@protoc_insertion_point(field_release:mtm.event.ArgumentDescriptor.type_url)
  
  ::mtm::TypeUrl* temp = type_url_;
  type_url_ = NULL;
  return temp;
}
inline void ArgumentDescriptor::set_allocated_type_url(::mtm::TypeUrl* type_url) {
  delete type_url_;
  type_url_ = type_url;
  if (type_url) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.ArgumentDescriptor.type_url)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace event
}  // namespace mtm

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mtm_2fevent_2fargument_5fdescriptor_2eproto__INCLUDED
