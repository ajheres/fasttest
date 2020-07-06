// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/geo/model/geo_service_enums.proto

#include "mtm/geo/model/geo_service_enums.pb.h"

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

namespace mtm {
namespace geo {
namespace model {
}  // namespace model
}  // namespace geo
}  // namespace mtm
namespace protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[5];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "mtm/geo/model/geo_service_enums.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n%mtm/geo/model/geo_service_enums.proto\022"
      "\rmtm.geo.model*\315\001\n\022GeographyDashStyle\022\034\n"
      "\030GEOGRAPHYDASHSTYLE_SOLID\020\000\022\033\n\027GEOGRAPHY"
      "DASHSTYLE_DASH\020\001\022\032\n\026GEOGRAPHYDASHSTYLE_D"
      "OT\020\002\022\036\n\032GEOGRAPHYDASHSTYLE_DASHDOT\020\003\022!\n\035"
      "GEOGRAPHYDASHSTYLE_DASHDOTDOT\020\004\022\035\n\031GEOGR"
      "APHYDASHSTYLE_CUSTOM\020\005*\345\001\n\rGeographyType"
      "\022\031\n\025GEOGRAPHYTYPE_UNKNOWN\020\000\022\027\n\023GEOGRAPHY"
      "TYPE_POINT\020\001\022\035\n\031GEOGRAPHYTYPE_LINE_STRIN"
      "G\020\002\022\031\n\025GEOGRAPHYTYPE_POLYGON\020\003\022\030\n\024GEOGRA"
      "PHYTYPE_CIRCLE\020\004\022\030\n\024GEOGRAPHYTYPE_SECTOR"
      "\020\005\022\027\n\023GEOGRAPHYTYPE_ROUTE\020\006\022\031\n\025GEOGRAPHY"
      "TYPE_OVERLAY\020\007*L\n\nPermission\022\023\n\017PERMISSI"
      "ON_NONE\020\000\022\023\n\017PERMISSION_READ\020\001\022\024\n\020PERMIS"
      "SION_WRITE\020\002*\\\n\025GeographyResourceType\022!\n"
      "\035GEOGRAPHYRESOURCETYPE_UNKNOWN\020\000\022 \n\034GEOG"
      "RAPHYRESOURCETYPE_BITMAP\020\001*`\n\tOperation\022"
      "\024\n\020OPERATION_UNKOWN\020\000\022\021\n\rOPERATION_ADD\020\001"
      "\022\024\n\020OPERATION_UPDATE\020\002\022\024\n\020OPERATION_REMO"
      "VE\020\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 772);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mtm/geo/model/geo_service_enums.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto
namespace mtm {
namespace geo {
namespace model {
const ::google::protobuf::EnumDescriptor* GeographyDashStyle_descriptor() {
  protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::file_level_enum_descriptors[0];
}
bool GeographyDashStyle_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GeographyType_descriptor() {
  protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::file_level_enum_descriptors[1];
}
bool GeographyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* Permission_descriptor() {
  protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::file_level_enum_descriptors[2];
}
bool Permission_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GeographyResourceType_descriptor() {
  protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::file_level_enum_descriptors[3];
}
bool GeographyResourceType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* Operation_descriptor() {
  protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_mtm_2fgeo_2fmodel_2fgeo_5fservice_5fenums_2eproto::file_level_enum_descriptors[4];
}
bool Operation_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace geo
}  // namespace mtm
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)