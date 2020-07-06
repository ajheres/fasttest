// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/event/action/event_action_connection.proto

#include "mtm/event/action/event_action_connection.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2ftimestamp_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Timestamp;
}  // namespace protobuf_google_2fprotobuf_2ftimestamp_2eproto
namespace protobuf_google_2fprotobuf_2fwrappers_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_BoolValue;
}  // namespace protobuf_google_2fprotobuf_2fwrappers_2eproto
namespace protobuf_mtm_2fcommon_5ftypes_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_mtm_2fcommon_5ftypes_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Uuid;
}  // namespace protobuf_mtm_2fcommon_5ftypes_2eproto
namespace protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_EventActionConnection;
}  // namespace protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto
namespace protobuf_mtm_2fevent_2fargument_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_mtm_2fevent_2fargument_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Argument;
}  // namespace protobuf_mtm_2fevent_2fargument_2eproto
namespace mtm {
namespace event {
namespace action {
class EventActionConnectionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EventActionConnection>
      _instance;
} _EventActionConnection_default_instance_;
class EventActionConnectionCollectionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EventActionConnectionCollection>
      _instance;
} _EventActionConnectionCollection_default_instance_;
}  // namespace action
}  // namespace event
}  // namespace mtm
namespace protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto {
static void InitDefaultsEventActionConnection() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mtm::event::action::_EventActionConnection_default_instance_;
    new (ptr) ::mtm::event::action::EventActionConnection();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mtm::event::action::EventActionConnection::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<4> scc_info_EventActionConnection =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsEventActionConnection}, {
      &protobuf_mtm_2fcommon_5ftypes_2eproto::scc_info_Uuid.base,
      &protobuf_google_2fprotobuf_2ftimestamp_2eproto::scc_info_Timestamp.base,
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_BoolValue.base,
      &protobuf_mtm_2fevent_2fargument_2eproto::scc_info_Argument.base,}};

static void InitDefaultsEventActionConnectionCollection() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mtm::event::action::_EventActionConnectionCollection_default_instance_;
    new (ptr) ::mtm::event::action::EventActionConnectionCollection();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mtm::event::action::EventActionConnectionCollection::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_EventActionConnectionCollection =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsEventActionConnectionCollection}, {
      &protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::scc_info_EventActionConnection.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_EventActionConnection.base);
  ::google::protobuf::internal::InitSCC(&scc_info_EventActionConnectionCollection.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, connectionid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, eventid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, actionid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, removed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnection, arguments_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnectionCollection, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::event::action::EventActionConnectionCollection, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mtm::event::action::EventActionConnection)},
  { 11, -1, sizeof(::mtm::event::action::EventActionConnectionCollection)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mtm::event::action::_EventActionConnection_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::mtm::event::action::_EventActionConnectionCollection_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "mtm/event/action/event_action_connection.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n.mtm/event/action/event_action_connecti"
      "on.proto\022\020mtm.event.action\032\037google/proto"
      "buf/timestamp.proto\032\036google/protobuf/wra"
      "ppers.proto\032\030mtm/event/argument.proto\032\026m"
      "tm/common_types.proto\"\360\001\n\025EventActionCon"
      "nection\022\037\n\014connectionId\030\001 \001(\0132\t.mtm.Uuid"
      "\022\032\n\007eventId\030\002 \001(\0132\t.mtm.Uuid\022\033\n\010actionId"
      "\030\003 \001(\0132\t.mtm.Uuid\022(\n\004time\030\004 \001(\0132\032.google"
      ".protobuf.Timestamp\022+\n\007removed\030\005 \001(\0132\032.g"
      "oogle.protobuf.BoolValue\022&\n\targuments\030\010 "
      "\003(\0132\023.mtm.event.Argument\"X\n\037EventActionC"
      "onnectionCollection\0225\n\004data\030\001 \003(\0132\'.mtm."
      "event.action.EventActionConnectionb\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 522);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mtm/event/action/event_action_connection.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors();
  ::protobuf_mtm_2fevent_2fargument_2eproto::AddDescriptors();
  ::protobuf_mtm_2fcommon_5ftypes_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto
namespace mtm {
namespace event {
namespace action {

// ===================================================================

void EventActionConnection::InitAsDefaultInstance() {
  ::mtm::event::action::_EventActionConnection_default_instance_._instance.get_mutable()->connectionid_ = const_cast< ::mtm::Uuid*>(
      ::mtm::Uuid::internal_default_instance());
  ::mtm::event::action::_EventActionConnection_default_instance_._instance.get_mutable()->eventid_ = const_cast< ::mtm::Uuid*>(
      ::mtm::Uuid::internal_default_instance());
  ::mtm::event::action::_EventActionConnection_default_instance_._instance.get_mutable()->actionid_ = const_cast< ::mtm::Uuid*>(
      ::mtm::Uuid::internal_default_instance());
  ::mtm::event::action::_EventActionConnection_default_instance_._instance.get_mutable()->time_ = const_cast< ::google::protobuf::Timestamp*>(
      ::google::protobuf::Timestamp::internal_default_instance());
  ::mtm::event::action::_EventActionConnection_default_instance_._instance.get_mutable()->removed_ = const_cast< ::google::protobuf::BoolValue*>(
      ::google::protobuf::BoolValue::internal_default_instance());
}
void EventActionConnection::clear_connectionid() {
  if (GetArenaNoVirtual() == NULL && connectionid_ != NULL) {
    delete connectionid_;
  }
  connectionid_ = NULL;
}
void EventActionConnection::clear_eventid() {
  if (GetArenaNoVirtual() == NULL && eventid_ != NULL) {
    delete eventid_;
  }
  eventid_ = NULL;
}
void EventActionConnection::clear_actionid() {
  if (GetArenaNoVirtual() == NULL && actionid_ != NULL) {
    delete actionid_;
  }
  actionid_ = NULL;
}
void EventActionConnection::clear_time() {
  if (GetArenaNoVirtual() == NULL && time_ != NULL) {
    delete time_;
  }
  time_ = NULL;
}
void EventActionConnection::clear_removed() {
  if (GetArenaNoVirtual() == NULL && removed_ != NULL) {
    delete removed_;
  }
  removed_ = NULL;
}
void EventActionConnection::clear_arguments() {
  arguments_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EventActionConnection::kConnectionIdFieldNumber;
const int EventActionConnection::kEventIdFieldNumber;
const int EventActionConnection::kActionIdFieldNumber;
const int EventActionConnection::kTimeFieldNumber;
const int EventActionConnection::kRemovedFieldNumber;
const int EventActionConnection::kArgumentsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EventActionConnection::EventActionConnection()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::scc_info_EventActionConnection.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtm.event.action.EventActionConnection)
}
EventActionConnection::EventActionConnection(const EventActionConnection& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      arguments_(from.arguments_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_connectionid()) {
    connectionid_ = new ::mtm::Uuid(*from.connectionid_);
  } else {
    connectionid_ = NULL;
  }
  if (from.has_eventid()) {
    eventid_ = new ::mtm::Uuid(*from.eventid_);
  } else {
    eventid_ = NULL;
  }
  if (from.has_actionid()) {
    actionid_ = new ::mtm::Uuid(*from.actionid_);
  } else {
    actionid_ = NULL;
  }
  if (from.has_time()) {
    time_ = new ::google::protobuf::Timestamp(*from.time_);
  } else {
    time_ = NULL;
  }
  if (from.has_removed()) {
    removed_ = new ::google::protobuf::BoolValue(*from.removed_);
  } else {
    removed_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:mtm.event.action.EventActionConnection)
}

void EventActionConnection::SharedCtor() {
  ::memset(&connectionid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&removed_) -
      reinterpret_cast<char*>(&connectionid_)) + sizeof(removed_));
}

EventActionConnection::~EventActionConnection() {
  // @@protoc_insertion_point(destructor:mtm.event.action.EventActionConnection)
  SharedDtor();
}

void EventActionConnection::SharedDtor() {
  if (this != internal_default_instance()) delete connectionid_;
  if (this != internal_default_instance()) delete eventid_;
  if (this != internal_default_instance()) delete actionid_;
  if (this != internal_default_instance()) delete time_;
  if (this != internal_default_instance()) delete removed_;
}

void EventActionConnection::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EventActionConnection::descriptor() {
  ::protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EventActionConnection& EventActionConnection::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::scc_info_EventActionConnection.base);
  return *internal_default_instance();
}


void EventActionConnection::Clear() {
// @@protoc_insertion_point(message_clear_start:mtm.event.action.EventActionConnection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  arguments_.Clear();
  if (GetArenaNoVirtual() == NULL && connectionid_ != NULL) {
    delete connectionid_;
  }
  connectionid_ = NULL;
  if (GetArenaNoVirtual() == NULL && eventid_ != NULL) {
    delete eventid_;
  }
  eventid_ = NULL;
  if (GetArenaNoVirtual() == NULL && actionid_ != NULL) {
    delete actionid_;
  }
  actionid_ = NULL;
  if (GetArenaNoVirtual() == NULL && time_ != NULL) {
    delete time_;
  }
  time_ = NULL;
  if (GetArenaNoVirtual() == NULL && removed_ != NULL) {
    delete removed_;
  }
  removed_ = NULL;
  _internal_metadata_.Clear();
}

bool EventActionConnection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mtm.event.action.EventActionConnection)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .mtm.Uuid connectionId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_connectionid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .mtm.Uuid eventId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_eventid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .mtm.Uuid actionId = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_actionid()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Timestamp time = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.BoolValue removed = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_removed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .mtm.event.Argument arguments = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_arguments()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mtm.event.action.EventActionConnection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mtm.event.action.EventActionConnection)
  return false;
#undef DO_
}

void EventActionConnection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mtm.event.action.EventActionConnection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mtm.Uuid connectionId = 1;
  if (this->has_connectionid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_connectionid(), output);
  }

  // .mtm.Uuid eventId = 2;
  if (this->has_eventid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_eventid(), output);
  }

  // .mtm.Uuid actionId = 3;
  if (this->has_actionid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_actionid(), output);
  }

  // .google.protobuf.Timestamp time = 4;
  if (this->has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_time(), output);
  }

  // .google.protobuf.BoolValue removed = 5;
  if (this->has_removed()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_removed(), output);
  }

  // repeated .mtm.event.Argument arguments = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->arguments_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8,
      this->arguments(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mtm.event.action.EventActionConnection)
}

::google::protobuf::uint8* EventActionConnection::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mtm.event.action.EventActionConnection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mtm.Uuid connectionId = 1;
  if (this->has_connectionid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_connectionid(), deterministic, target);
  }

  // .mtm.Uuid eventId = 2;
  if (this->has_eventid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_eventid(), deterministic, target);
  }

  // .mtm.Uuid actionId = 3;
  if (this->has_actionid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_actionid(), deterministic, target);
  }

  // .google.protobuf.Timestamp time = 4;
  if (this->has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_time(), deterministic, target);
  }

  // .google.protobuf.BoolValue removed = 5;
  if (this->has_removed()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_removed(), deterministic, target);
  }

  // repeated .mtm.event.Argument arguments = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->arguments_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->arguments(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mtm.event.action.EventActionConnection)
  return target;
}

size_t EventActionConnection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mtm.event.action.EventActionConnection)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .mtm.event.Argument arguments = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->arguments_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->arguments(static_cast<int>(i)));
    }
  }

  // .mtm.Uuid connectionId = 1;
  if (this->has_connectionid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *connectionid_);
  }

  // .mtm.Uuid eventId = 2;
  if (this->has_eventid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *eventid_);
  }

  // .mtm.Uuid actionId = 3;
  if (this->has_actionid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *actionid_);
  }

  // .google.protobuf.Timestamp time = 4;
  if (this->has_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *time_);
  }

  // .google.protobuf.BoolValue removed = 5;
  if (this->has_removed()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *removed_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EventActionConnection::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mtm.event.action.EventActionConnection)
  GOOGLE_DCHECK_NE(&from, this);
  const EventActionConnection* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EventActionConnection>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mtm.event.action.EventActionConnection)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mtm.event.action.EventActionConnection)
    MergeFrom(*source);
  }
}

void EventActionConnection::MergeFrom(const EventActionConnection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mtm.event.action.EventActionConnection)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  arguments_.MergeFrom(from.arguments_);
  if (from.has_connectionid()) {
    mutable_connectionid()->::mtm::Uuid::MergeFrom(from.connectionid());
  }
  if (from.has_eventid()) {
    mutable_eventid()->::mtm::Uuid::MergeFrom(from.eventid());
  }
  if (from.has_actionid()) {
    mutable_actionid()->::mtm::Uuid::MergeFrom(from.actionid());
  }
  if (from.has_time()) {
    mutable_time()->::google::protobuf::Timestamp::MergeFrom(from.time());
  }
  if (from.has_removed()) {
    mutable_removed()->::google::protobuf::BoolValue::MergeFrom(from.removed());
  }
}

void EventActionConnection::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mtm.event.action.EventActionConnection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EventActionConnection::CopyFrom(const EventActionConnection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mtm.event.action.EventActionConnection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EventActionConnection::IsInitialized() const {
  return true;
}

void EventActionConnection::Swap(EventActionConnection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EventActionConnection::InternalSwap(EventActionConnection* other) {
  using std::swap;
  CastToBase(&arguments_)->InternalSwap(CastToBase(&other->arguments_));
  swap(connectionid_, other->connectionid_);
  swap(eventid_, other->eventid_);
  swap(actionid_, other->actionid_);
  swap(time_, other->time_);
  swap(removed_, other->removed_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EventActionConnection::GetMetadata() const {
  protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void EventActionConnectionCollection::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EventActionConnectionCollection::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EventActionConnectionCollection::EventActionConnectionCollection()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::scc_info_EventActionConnectionCollection.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtm.event.action.EventActionConnectionCollection)
}
EventActionConnectionCollection::EventActionConnectionCollection(const EventActionConnectionCollection& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mtm.event.action.EventActionConnectionCollection)
}

void EventActionConnectionCollection::SharedCtor() {
}

EventActionConnectionCollection::~EventActionConnectionCollection() {
  // @@protoc_insertion_point(destructor:mtm.event.action.EventActionConnectionCollection)
  SharedDtor();
}

void EventActionConnectionCollection::SharedDtor() {
}

void EventActionConnectionCollection::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* EventActionConnectionCollection::descriptor() {
  ::protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const EventActionConnectionCollection& EventActionConnectionCollection::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::scc_info_EventActionConnectionCollection.base);
  return *internal_default_instance();
}


void EventActionConnectionCollection::Clear() {
// @@protoc_insertion_point(message_clear_start:mtm.event.action.EventActionConnectionCollection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  _internal_metadata_.Clear();
}

bool EventActionConnectionCollection::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mtm.event.action.EventActionConnectionCollection)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .mtm.event.action.EventActionConnection data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mtm.event.action.EventActionConnectionCollection)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mtm.event.action.EventActionConnectionCollection)
  return false;
#undef DO_
}

void EventActionConnectionCollection::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mtm.event.action.EventActionConnectionCollection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mtm.event.action.EventActionConnection data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->data(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mtm.event.action.EventActionConnectionCollection)
}

::google::protobuf::uint8* EventActionConnectionCollection::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mtm.event.action.EventActionConnectionCollection)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mtm.event.action.EventActionConnection data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->data_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->data(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mtm.event.action.EventActionConnectionCollection)
  return target;
}

size_t EventActionConnectionCollection::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mtm.event.action.EventActionConnectionCollection)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .mtm.event.action.EventActionConnection data = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->data_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->data(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EventActionConnectionCollection::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mtm.event.action.EventActionConnectionCollection)
  GOOGLE_DCHECK_NE(&from, this);
  const EventActionConnectionCollection* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const EventActionConnectionCollection>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mtm.event.action.EventActionConnectionCollection)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mtm.event.action.EventActionConnectionCollection)
    MergeFrom(*source);
  }
}

void EventActionConnectionCollection::MergeFrom(const EventActionConnectionCollection& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mtm.event.action.EventActionConnectionCollection)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void EventActionConnectionCollection::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mtm.event.action.EventActionConnectionCollection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EventActionConnectionCollection::CopyFrom(const EventActionConnectionCollection& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mtm.event.action.EventActionConnectionCollection)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EventActionConnectionCollection::IsInitialized() const {
  return true;
}

void EventActionConnectionCollection::Swap(EventActionConnectionCollection* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EventActionConnectionCollection::InternalSwap(EventActionConnectionCollection* other) {
  using std::swap;
  CastToBase(&data_)->InternalSwap(CastToBase(&other->data_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata EventActionConnectionCollection::GetMetadata() const {
  protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2fevent_2faction_2fevent_5faction_5fconnection_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace action
}  // namespace event
}  // namespace mtm
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mtm::event::action::EventActionConnection* Arena::CreateMaybeMessage< ::mtm::event::action::EventActionConnection >(Arena* arena) {
  return Arena::CreateInternal< ::mtm::event::action::EventActionConnection >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mtm::event::action::EventActionConnectionCollection* Arena::CreateMaybeMessage< ::mtm::event::action::EventActionConnectionCollection >(Arena* arena) {
  return Arena::CreateInternal< ::mtm::event::action::EventActionConnectionCollection >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)