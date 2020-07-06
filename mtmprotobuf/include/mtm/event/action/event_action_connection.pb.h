// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/event/action/event_action_connection.proto

#ifndef PROTOBUF_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto__INCLUDED
#define PROTOBUF_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto__INCLUDED

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
#include <google/protobuf/timestamp.pb.h>
#include <google/protobuf/wrappers.pb.h>
#include "mtm/event/argument.pb.h"
#include "mtm/common_types.pb.h"
// @@protoc_insertion_point(includes)

namespace mtm {
namespace event {
namespace action {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();
void protobuf_AssignDesc_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();
void protobuf_ShutdownFile_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();

class EventActionConnection;
class EventActionConnectionCollection;

// ===================================================================

class EventActionConnection : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mtm.event.action.EventActionConnection) */ {
 public:
  EventActionConnection();
  virtual ~EventActionConnection();

  EventActionConnection(const EventActionConnection& from);

  inline EventActionConnection& operator=(const EventActionConnection& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EventActionConnection& default_instance();

  void Swap(EventActionConnection* other);

  // implements Message ----------------------------------------------

  inline EventActionConnection* New() const { return New(NULL); }

  EventActionConnection* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EventActionConnection& from);
  void MergeFrom(const EventActionConnection& from);
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
  void InternalSwap(EventActionConnection* other);
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

  // optional .mtm.Uuid connectionId = 1;
  bool has_connectionid() const;
  void clear_connectionid();
  static const int kConnectionIdFieldNumber = 1;
  const ::mtm::Uuid& connectionid() const;
  ::mtm::Uuid* mutable_connectionid();
  ::mtm::Uuid* release_connectionid();
  void set_allocated_connectionid(::mtm::Uuid* connectionid);

  // optional .mtm.Uuid eventId = 2;
  bool has_eventid() const;
  void clear_eventid();
  static const int kEventIdFieldNumber = 2;
  const ::mtm::Uuid& eventid() const;
  ::mtm::Uuid* mutable_eventid();
  ::mtm::Uuid* release_eventid();
  void set_allocated_eventid(::mtm::Uuid* eventid);

  // optional .mtm.Uuid actionId = 3;
  bool has_actionid() const;
  void clear_actionid();
  static const int kActionIdFieldNumber = 3;
  const ::mtm::Uuid& actionid() const;
  ::mtm::Uuid* mutable_actionid();
  ::mtm::Uuid* release_actionid();
  void set_allocated_actionid(::mtm::Uuid* actionid);

  // optional .google.protobuf.Timestamp time = 4;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 4;
  const ::google::protobuf::Timestamp& time() const;
  ::google::protobuf::Timestamp* mutable_time();
  ::google::protobuf::Timestamp* release_time();
  void set_allocated_time(::google::protobuf::Timestamp* time);

  // optional .google.protobuf.BoolValue removed = 5;
  bool has_removed() const;
  void clear_removed();
  static const int kRemovedFieldNumber = 5;
  const ::google::protobuf::BoolValue& removed() const;
  ::google::protobuf::BoolValue* mutable_removed();
  ::google::protobuf::BoolValue* release_removed();
  void set_allocated_removed(::google::protobuf::BoolValue* removed);

  // repeated .mtm.event.Argument arguments = 8;
  int arguments_size() const;
  void clear_arguments();
  static const int kArgumentsFieldNumber = 8;
  const ::mtm::event::Argument& arguments(int index) const;
  ::mtm::event::Argument* mutable_arguments(int index);
  ::mtm::event::Argument* add_arguments();
  ::google::protobuf::RepeatedPtrField< ::mtm::event::Argument >*
      mutable_arguments();
  const ::google::protobuf::RepeatedPtrField< ::mtm::event::Argument >&
      arguments() const;

  // @@protoc_insertion_point(class_scope:mtm.event.action.EventActionConnection)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::mtm::Uuid* connectionid_;
  ::mtm::Uuid* eventid_;
  ::mtm::Uuid* actionid_;
  ::google::protobuf::Timestamp* time_;
  ::google::protobuf::BoolValue* removed_;
  ::google::protobuf::RepeatedPtrField< ::mtm::event::Argument > arguments_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();
  friend void protobuf_AssignDesc_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();
  friend void protobuf_ShutdownFile_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();

  void InitAsDefaultInstance();
  static EventActionConnection* default_instance_;
};
// -------------------------------------------------------------------

class EventActionConnectionCollection : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mtm.event.action.EventActionConnectionCollection) */ {
 public:
  EventActionConnectionCollection();
  virtual ~EventActionConnectionCollection();

  EventActionConnectionCollection(const EventActionConnectionCollection& from);

  inline EventActionConnectionCollection& operator=(const EventActionConnectionCollection& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EventActionConnectionCollection& default_instance();

  void Swap(EventActionConnectionCollection* other);

  // implements Message ----------------------------------------------

  inline EventActionConnectionCollection* New() const { return New(NULL); }

  EventActionConnectionCollection* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EventActionConnectionCollection& from);
  void MergeFrom(const EventActionConnectionCollection& from);
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
  void InternalSwap(EventActionConnectionCollection* other);
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

  // repeated .mtm.event.action.EventActionConnection data = 1;
  int data_size() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::mtm::event::action::EventActionConnection& data(int index) const;
  ::mtm::event::action::EventActionConnection* mutable_data(int index);
  ::mtm::event::action::EventActionConnection* add_data();
  ::google::protobuf::RepeatedPtrField< ::mtm::event::action::EventActionConnection >*
      mutable_data();
  const ::google::protobuf::RepeatedPtrField< ::mtm::event::action::EventActionConnection >&
      data() const;

  // @@protoc_insertion_point(class_scope:mtm.event.action.EventActionConnectionCollection)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::mtm::event::action::EventActionConnection > data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();
  friend void protobuf_AssignDesc_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();
  friend void protobuf_ShutdownFile_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto();

  void InitAsDefaultInstance();
  static EventActionConnectionCollection* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EventActionConnection

// optional .mtm.Uuid connectionId = 1;
inline bool EventActionConnection::has_connectionid() const {
  return !_is_default_instance_ && connectionid_ != NULL;
}
inline void EventActionConnection::clear_connectionid() {
  if (GetArenaNoVirtual() == NULL && connectionid_ != NULL) delete connectionid_;
  connectionid_ = NULL;
}
inline const ::mtm::Uuid& EventActionConnection::connectionid() const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnection.connectionId)
  return connectionid_ != NULL ? *connectionid_ : *default_instance_->connectionid_;
}
inline ::mtm::Uuid* EventActionConnection::mutable_connectionid() {
  
  if (connectionid_ == NULL) {
    connectionid_ = new ::mtm::Uuid;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnection.connectionId)
  return connectionid_;
}
inline ::mtm::Uuid* EventActionConnection::release_connectionid() {
  // @@protoc_insertion_point(field_release:mtm.event.action.EventActionConnection.connectionId)
  
  ::mtm::Uuid* temp = connectionid_;
  connectionid_ = NULL;
  return temp;
}
inline void EventActionConnection::set_allocated_connectionid(::mtm::Uuid* connectionid) {
  delete connectionid_;
  connectionid_ = connectionid;
  if (connectionid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.action.EventActionConnection.connectionId)
}

// optional .mtm.Uuid eventId = 2;
inline bool EventActionConnection::has_eventid() const {
  return !_is_default_instance_ && eventid_ != NULL;
}
inline void EventActionConnection::clear_eventid() {
  if (GetArenaNoVirtual() == NULL && eventid_ != NULL) delete eventid_;
  eventid_ = NULL;
}
inline const ::mtm::Uuid& EventActionConnection::eventid() const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnection.eventId)
  return eventid_ != NULL ? *eventid_ : *default_instance_->eventid_;
}
inline ::mtm::Uuid* EventActionConnection::mutable_eventid() {
  
  if (eventid_ == NULL) {
    eventid_ = new ::mtm::Uuid;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnection.eventId)
  return eventid_;
}
inline ::mtm::Uuid* EventActionConnection::release_eventid() {
  // @@protoc_insertion_point(field_release:mtm.event.action.EventActionConnection.eventId)
  
  ::mtm::Uuid* temp = eventid_;
  eventid_ = NULL;
  return temp;
}
inline void EventActionConnection::set_allocated_eventid(::mtm::Uuid* eventid) {
  delete eventid_;
  eventid_ = eventid;
  if (eventid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.action.EventActionConnection.eventId)
}

// optional .mtm.Uuid actionId = 3;
inline bool EventActionConnection::has_actionid() const {
  return !_is_default_instance_ && actionid_ != NULL;
}
inline void EventActionConnection::clear_actionid() {
  if (GetArenaNoVirtual() == NULL && actionid_ != NULL) delete actionid_;
  actionid_ = NULL;
}
inline const ::mtm::Uuid& EventActionConnection::actionid() const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnection.actionId)
  return actionid_ != NULL ? *actionid_ : *default_instance_->actionid_;
}
inline ::mtm::Uuid* EventActionConnection::mutable_actionid() {
  
  if (actionid_ == NULL) {
    actionid_ = new ::mtm::Uuid;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnection.actionId)
  return actionid_;
}
inline ::mtm::Uuid* EventActionConnection::release_actionid() {
  // @@protoc_insertion_point(field_release:mtm.event.action.EventActionConnection.actionId)
  
  ::mtm::Uuid* temp = actionid_;
  actionid_ = NULL;
  return temp;
}
inline void EventActionConnection::set_allocated_actionid(::mtm::Uuid* actionid) {
  delete actionid_;
  actionid_ = actionid;
  if (actionid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.action.EventActionConnection.actionId)
}

// optional .google.protobuf.Timestamp time = 4;
inline bool EventActionConnection::has_time() const {
  return !_is_default_instance_ && time_ != NULL;
}
inline void EventActionConnection::clear_time() {
  if (GetArenaNoVirtual() == NULL && time_ != NULL) delete time_;
  time_ = NULL;
}
inline const ::google::protobuf::Timestamp& EventActionConnection::time() const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnection.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::google::protobuf::Timestamp* EventActionConnection::mutable_time() {
  
  if (time_ == NULL) {
    time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnection.time)
  return time_;
}
inline ::google::protobuf::Timestamp* EventActionConnection::release_time() {
  // @@protoc_insertion_point(field_release:mtm.event.action.EventActionConnection.time)
  
  ::google::protobuf::Timestamp* temp = time_;
  time_ = NULL;
  return temp;
}
inline void EventActionConnection::set_allocated_time(::google::protobuf::Timestamp* time) {
  delete time_;
  if (time != NULL && time->GetArena() != NULL) {
    ::google::protobuf::Timestamp* new_time = new ::google::protobuf::Timestamp;
    new_time->CopyFrom(*time);
    time = new_time;
  }
  time_ = time;
  if (time) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.action.EventActionConnection.time)
}

// optional .google.protobuf.BoolValue removed = 5;
inline bool EventActionConnection::has_removed() const {
  return !_is_default_instance_ && removed_ != NULL;
}
inline void EventActionConnection::clear_removed() {
  if (GetArenaNoVirtual() == NULL && removed_ != NULL) delete removed_;
  removed_ = NULL;
}
inline const ::google::protobuf::BoolValue& EventActionConnection::removed() const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnection.removed)
  return removed_ != NULL ? *removed_ : *default_instance_->removed_;
}
inline ::google::protobuf::BoolValue* EventActionConnection::mutable_removed() {
  
  if (removed_ == NULL) {
    removed_ = new ::google::protobuf::BoolValue;
  }
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnection.removed)
  return removed_;
}
inline ::google::protobuf::BoolValue* EventActionConnection::release_removed() {
  // @@protoc_insertion_point(field_release:mtm.event.action.EventActionConnection.removed)
  
  ::google::protobuf::BoolValue* temp = removed_;
  removed_ = NULL;
  return temp;
}
inline void EventActionConnection::set_allocated_removed(::google::protobuf::BoolValue* removed) {
  delete removed_;
  if (removed != NULL && removed->GetArena() != NULL) {
    ::google::protobuf::BoolValue* new_removed = new ::google::protobuf::BoolValue;
    new_removed->CopyFrom(*removed);
    removed = new_removed;
  }
  removed_ = removed;
  if (removed) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.event.action.EventActionConnection.removed)
}

// repeated .mtm.event.Argument arguments = 8;
inline int EventActionConnection::arguments_size() const {
  return arguments_.size();
}
inline void EventActionConnection::clear_arguments() {
  arguments_.Clear();
}
inline const ::mtm::event::Argument& EventActionConnection::arguments(int index) const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnection.arguments)
  return arguments_.Get(index);
}
inline ::mtm::event::Argument* EventActionConnection::mutable_arguments(int index) {
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnection.arguments)
  return arguments_.Mutable(index);
}
inline ::mtm::event::Argument* EventActionConnection::add_arguments() {
  // @@protoc_insertion_point(field_add:mtm.event.action.EventActionConnection.arguments)
  return arguments_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mtm::event::Argument >*
EventActionConnection::mutable_arguments() {
  // @@protoc_insertion_point(field_mutable_list:mtm.event.action.EventActionConnection.arguments)
  return &arguments_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mtm::event::Argument >&
EventActionConnection::arguments() const {
  // @@protoc_insertion_point(field_list:mtm.event.action.EventActionConnection.arguments)
  return arguments_;
}

// -------------------------------------------------------------------

// EventActionConnectionCollection

// repeated .mtm.event.action.EventActionConnection data = 1;
inline int EventActionConnectionCollection::data_size() const {
  return data_.size();
}
inline void EventActionConnectionCollection::clear_data() {
  data_.Clear();
}
inline const ::mtm::event::action::EventActionConnection& EventActionConnectionCollection::data(int index) const {
  // @@protoc_insertion_point(field_get:mtm.event.action.EventActionConnectionCollection.data)
  return data_.Get(index);
}
inline ::mtm::event::action::EventActionConnection* EventActionConnectionCollection::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:mtm.event.action.EventActionConnectionCollection.data)
  return data_.Mutable(index);
}
inline ::mtm::event::action::EventActionConnection* EventActionConnectionCollection::add_data() {
  // @@protoc_insertion_point(field_add:mtm.event.action.EventActionConnectionCollection.data)
  return data_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::mtm::event::action::EventActionConnection >*
EventActionConnectionCollection::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:mtm.event.action.EventActionConnectionCollection.data)
  return &data_;
}
inline const ::google::protobuf::RepeatedPtrField< ::mtm::event::action::EventActionConnection >&
EventActionConnectionCollection::data() const {
  // @@protoc_insertion_point(field_list:mtm.event.action.EventActionConnectionCollection.data)
  return data_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace action
}  // namespace event
}  // namespace mtm

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto__INCLUDED
