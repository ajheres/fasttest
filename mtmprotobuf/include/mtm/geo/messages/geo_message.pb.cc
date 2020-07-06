// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/geo/messages/geo_message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mtm/geo/messages/geo_message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace mtm {
namespace geo {
namespace messages {

namespace {

const ::google::protobuf::Descriptor* GeoMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GeoMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto() {
  protobuf_AddDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "mtm/geo/messages/geo_message.proto");
  GOOGLE_CHECK(file != NULL);
  GeoMessage_descriptor_ = file->message_type(0);
  static const int GeoMessage_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, operation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, geography_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, visual_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, geography_resource_),
  };
  GeoMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GeoMessage_descriptor_,
      GeoMessage::default_instance_,
      GeoMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(GeoMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GeoMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GeoMessage_descriptor_, &GeoMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto() {
  delete GeoMessage::default_instance_;
  delete GeoMessage_reflection_;
}

void protobuf_AddDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::mtm::geo::model::protobuf_AddDesc_mtm_2fgeo_2fmodel_2fgeography_2eproto();
  ::mtm::geo::model::protobuf_AddDesc_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto();
  ::mtm::geo::model::protobuf_AddDesc_mtm_2fgeo_2fmodel_2fvisual_2eproto();
  ::mtm::geo::model::protobuf_AddDesc_mtm_2fgeo_2fmodel_2fgeography_5fresource_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"mtm/geo/messages/geo_message.proto\022\020mt"
    "m.geo.messages\032\035mtm/geo/model/geography."
    "proto\032%mtm/geo/model/geo_service_enums.p"
    "roto\032\032mtm/geo/model/visual.proto\032&mtm/ge"
    "o/model/geography_resource.proto\"\334\001\n\nGeo"
    "Message\022\017\n\007user_id\030\001 \001(\r\022+\n\toperation\030\002 "
    "\001(\0162\030.mtm.geo.model.Operation\022+\n\tgeograp"
    "hy\030\003 \001(\0132\030.mtm.geo.model.Geography\022%\n\006vi"
    "sual\030\004 \001(\0132\025.mtm.geo.model.Visual\022<\n\022geo"
    "graphy_resource\030\005 \001(\0132 .mtm.geo.model.Ge"
    "ographyResourceb\006proto3", 423);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mtm/geo/messages/geo_message.proto", &protobuf_RegisterTypes);
  GeoMessage::default_instance_ = new GeoMessage();
  GeoMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto {
  StaticDescriptorInitializer_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto() {
    protobuf_AddDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto();
  }
} static_descriptor_initializer_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GeoMessage::kUserIdFieldNumber;
const int GeoMessage::kOperationFieldNumber;
const int GeoMessage::kGeographyFieldNumber;
const int GeoMessage::kVisualFieldNumber;
const int GeoMessage::kGeographyResourceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GeoMessage::GeoMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtm.geo.messages.GeoMessage)
}

void GeoMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  geography_ = const_cast< ::mtm::geo::model::Geography*>(&::mtm::geo::model::Geography::default_instance());
  visual_ = const_cast< ::mtm::geo::model::Visual*>(&::mtm::geo::model::Visual::default_instance());
  geography_resource_ = const_cast< ::mtm::geo::model::GeographyResource*>(&::mtm::geo::model::GeographyResource::default_instance());
}

GeoMessage::GeoMessage(const GeoMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:mtm.geo.messages.GeoMessage)
}

void GeoMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  user_id_ = 0u;
  operation_ = 0;
  geography_ = NULL;
  visual_ = NULL;
  geography_resource_ = NULL;
}

GeoMessage::~GeoMessage() {
  // @@protoc_insertion_point(destructor:mtm.geo.messages.GeoMessage)
  SharedDtor();
}

void GeoMessage::SharedDtor() {
  if (this != default_instance_) {
    delete geography_;
    delete visual_;
    delete geography_resource_;
  }
}

void GeoMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GeoMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GeoMessage_descriptor_;
}

const GeoMessage& GeoMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mtm_2fgeo_2fmessages_2fgeo_5fmessage_2eproto();
  return *default_instance_;
}

GeoMessage* GeoMessage::default_instance_ = NULL;

GeoMessage* GeoMessage::New(::google::protobuf::Arena* arena) const {
  GeoMessage* n = new GeoMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GeoMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:mtm.geo.messages.GeoMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(GeoMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<GeoMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(user_id_, operation_);
  if (GetArenaNoVirtual() == NULL && geography_ != NULL) delete geography_;
  geography_ = NULL;
  if (GetArenaNoVirtual() == NULL && visual_ != NULL) delete visual_;
  visual_ = NULL;
  if (GetArenaNoVirtual() == NULL && geography_resource_ != NULL) delete geography_resource_;
  geography_resource_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool GeoMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mtm.geo.messages.GeoMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 user_id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &user_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_operation;
        break;
      }

      // optional .mtm.geo.model.Operation operation = 2;
      case 2: {
        if (tag == 16) {
         parse_operation:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation(static_cast< ::mtm::geo::model::Operation >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_geography;
        break;
      }

      // optional .mtm.geo.model.Geography geography = 3;
      case 3: {
        if (tag == 26) {
         parse_geography:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_geography()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_visual;
        break;
      }

      // optional .mtm.geo.model.Visual visual = 4;
      case 4: {
        if (tag == 34) {
         parse_visual:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_visual()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_geography_resource;
        break;
      }

      // optional .mtm.geo.model.GeographyResource geography_resource = 5;
      case 5: {
        if (tag == 42) {
         parse_geography_resource:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_geography_resource()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mtm.geo.messages.GeoMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mtm.geo.messages.GeoMessage)
  return false;
#undef DO_
}

void GeoMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mtm.geo.messages.GeoMessage)
  // optional uint32 user_id = 1;
  if (this->user_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->user_id(), output);
  }

  // optional .mtm.geo.model.Operation operation = 2;
  if (this->operation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->operation(), output);
  }

  // optional .mtm.geo.model.Geography geography = 3;
  if (this->has_geography()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->geography_, output);
  }

  // optional .mtm.geo.model.Visual visual = 4;
  if (this->has_visual()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->visual_, output);
  }

  // optional .mtm.geo.model.GeographyResource geography_resource = 5;
  if (this->has_geography_resource()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->geography_resource_, output);
  }

  // @@protoc_insertion_point(serialize_end:mtm.geo.messages.GeoMessage)
}

::google::protobuf::uint8* GeoMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mtm.geo.messages.GeoMessage)
  // optional uint32 user_id = 1;
  if (this->user_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->user_id(), target);
  }

  // optional .mtm.geo.model.Operation operation = 2;
  if (this->operation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->operation(), target);
  }

  // optional .mtm.geo.model.Geography geography = 3;
  if (this->has_geography()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->geography_, false, target);
  }

  // optional .mtm.geo.model.Visual visual = 4;
  if (this->has_visual()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->visual_, false, target);
  }

  // optional .mtm.geo.model.GeographyResource geography_resource = 5;
  if (this->has_geography_resource()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->geography_resource_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:mtm.geo.messages.GeoMessage)
  return target;
}

int GeoMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:mtm.geo.messages.GeoMessage)
  int total_size = 0;

  // optional uint32 user_id = 1;
  if (this->user_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->user_id());
  }

  // optional .mtm.geo.model.Operation operation = 2;
  if (this->operation() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation());
  }

  // optional .mtm.geo.model.Geography geography = 3;
  if (this->has_geography()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->geography_);
  }

  // optional .mtm.geo.model.Visual visual = 4;
  if (this->has_visual()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->visual_);
  }

  // optional .mtm.geo.model.GeographyResource geography_resource = 5;
  if (this->has_geography_resource()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->geography_resource_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GeoMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mtm.geo.messages.GeoMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GeoMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GeoMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mtm.geo.messages.GeoMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mtm.geo.messages.GeoMessage)
    MergeFrom(*source);
  }
}

void GeoMessage::MergeFrom(const GeoMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mtm.geo.messages.GeoMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.user_id() != 0) {
    set_user_id(from.user_id());
  }
  if (from.operation() != 0) {
    set_operation(from.operation());
  }
  if (from.has_geography()) {
    mutable_geography()->::mtm::geo::model::Geography::MergeFrom(from.geography());
  }
  if (from.has_visual()) {
    mutable_visual()->::mtm::geo::model::Visual::MergeFrom(from.visual());
  }
  if (from.has_geography_resource()) {
    mutable_geography_resource()->::mtm::geo::model::GeographyResource::MergeFrom(from.geography_resource());
  }
}

void GeoMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mtm.geo.messages.GeoMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GeoMessage::CopyFrom(const GeoMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mtm.geo.messages.GeoMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GeoMessage::IsInitialized() const {

  return true;
}

void GeoMessage::Swap(GeoMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GeoMessage::InternalSwap(GeoMessage* other) {
  std::swap(user_id_, other->user_id_);
  std::swap(operation_, other->operation_);
  std::swap(geography_, other->geography_);
  std::swap(visual_, other->visual_);
  std::swap(geography_resource_, other->geography_resource_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GeoMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GeoMessage_descriptor_;
  metadata.reflection = GeoMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GeoMessage

// optional uint32 user_id = 1;
void GeoMessage::clear_user_id() {
  user_id_ = 0u;
}
 ::google::protobuf::uint32 GeoMessage::user_id() const {
  // @@protoc_insertion_point(field_get:mtm.geo.messages.GeoMessage.user_id)
  return user_id_;
}
 void GeoMessage::set_user_id(::google::protobuf::uint32 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:mtm.geo.messages.GeoMessage.user_id)
}

// optional .mtm.geo.model.Operation operation = 2;
void GeoMessage::clear_operation() {
  operation_ = 0;
}
 ::mtm::geo::model::Operation GeoMessage::operation() const {
  // @@protoc_insertion_point(field_get:mtm.geo.messages.GeoMessage.operation)
  return static_cast< ::mtm::geo::model::Operation >(operation_);
}
 void GeoMessage::set_operation(::mtm::geo::model::Operation value) {
  
  operation_ = value;
  // @@protoc_insertion_point(field_set:mtm.geo.messages.GeoMessage.operation)
}

// optional .mtm.geo.model.Geography geography = 3;
bool GeoMessage::has_geography() const {
  return !_is_default_instance_ && geography_ != NULL;
}
void GeoMessage::clear_geography() {
  if (GetArenaNoVirtual() == NULL && geography_ != NULL) delete geography_;
  geography_ = NULL;
}
const ::mtm::geo::model::Geography& GeoMessage::geography() const {
  // @@protoc_insertion_point(field_get:mtm.geo.messages.GeoMessage.geography)
  return geography_ != NULL ? *geography_ : *default_instance_->geography_;
}
::mtm::geo::model::Geography* GeoMessage::mutable_geography() {
  
  if (geography_ == NULL) {
    geography_ = new ::mtm::geo::model::Geography;
  }
  // @@protoc_insertion_point(field_mutable:mtm.geo.messages.GeoMessage.geography)
  return geography_;
}
::mtm::geo::model::Geography* GeoMessage::release_geography() {
  // @@protoc_insertion_point(field_release:mtm.geo.messages.GeoMessage.geography)
  
  ::mtm::geo::model::Geography* temp = geography_;
  geography_ = NULL;
  return temp;
}
void GeoMessage::set_allocated_geography(::mtm::geo::model::Geography* geography) {
  delete geography_;
  geography_ = geography;
  if (geography) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.geo.messages.GeoMessage.geography)
}

// optional .mtm.geo.model.Visual visual = 4;
bool GeoMessage::has_visual() const {
  return !_is_default_instance_ && visual_ != NULL;
}
void GeoMessage::clear_visual() {
  if (GetArenaNoVirtual() == NULL && visual_ != NULL) delete visual_;
  visual_ = NULL;
}
const ::mtm::geo::model::Visual& GeoMessage::visual() const {
  // @@protoc_insertion_point(field_get:mtm.geo.messages.GeoMessage.visual)
  return visual_ != NULL ? *visual_ : *default_instance_->visual_;
}
::mtm::geo::model::Visual* GeoMessage::mutable_visual() {
  
  if (visual_ == NULL) {
    visual_ = new ::mtm::geo::model::Visual;
  }
  // @@protoc_insertion_point(field_mutable:mtm.geo.messages.GeoMessage.visual)
  return visual_;
}
::mtm::geo::model::Visual* GeoMessage::release_visual() {
  // @@protoc_insertion_point(field_release:mtm.geo.messages.GeoMessage.visual)
  
  ::mtm::geo::model::Visual* temp = visual_;
  visual_ = NULL;
  return temp;
}
void GeoMessage::set_allocated_visual(::mtm::geo::model::Visual* visual) {
  delete visual_;
  visual_ = visual;
  if (visual) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.geo.messages.GeoMessage.visual)
}

// optional .mtm.geo.model.GeographyResource geography_resource = 5;
bool GeoMessage::has_geography_resource() const {
  return !_is_default_instance_ && geography_resource_ != NULL;
}
void GeoMessage::clear_geography_resource() {
  if (GetArenaNoVirtual() == NULL && geography_resource_ != NULL) delete geography_resource_;
  geography_resource_ = NULL;
}
const ::mtm::geo::model::GeographyResource& GeoMessage::geography_resource() const {
  // @@protoc_insertion_point(field_get:mtm.geo.messages.GeoMessage.geography_resource)
  return geography_resource_ != NULL ? *geography_resource_ : *default_instance_->geography_resource_;
}
::mtm::geo::model::GeographyResource* GeoMessage::mutable_geography_resource() {
  
  if (geography_resource_ == NULL) {
    geography_resource_ = new ::mtm::geo::model::GeographyResource;
  }
  // @@protoc_insertion_point(field_mutable:mtm.geo.messages.GeoMessage.geography_resource)
  return geography_resource_;
}
::mtm::geo::model::GeographyResource* GeoMessage::release_geography_resource() {
  // @@protoc_insertion_point(field_release:mtm.geo.messages.GeoMessage.geography_resource)
  
  ::mtm::geo::model::GeographyResource* temp = geography_resource_;
  geography_resource_ = NULL;
  return temp;
}
void GeoMessage::set_allocated_geography_resource(::mtm::geo::model::GeographyResource* geography_resource) {
  delete geography_resource_;
  geography_resource_ = geography_resource;
  if (geography_resource) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:mtm.geo.messages.GeoMessage.geography_resource)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace geo
}  // namespace mtm

// @@protoc_insertion_point(global_scope)
