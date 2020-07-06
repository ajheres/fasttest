// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mtm/alert/model/alert_category.proto

#include "mtm/alert/model/alert_category.pb.h"

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

namespace protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_AlertCategory;
}  // namespace protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto
namespace protobuf_mtm_2fcommon_5ftypes_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_mtm_2fcommon_5ftypes_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Uuid;
}  // namespace protobuf_mtm_2fcommon_5ftypes_2eproto
namespace mtm {
namespace alert {
namespace model {
class AlertCategoryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AlertCategory>
      _instance;
} _AlertCategory_default_instance_;
class AlertCategoryListDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AlertCategoryList>
      _instance;
} _AlertCategoryList_default_instance_;
}  // namespace model
}  // namespace alert
}  // namespace mtm
namespace protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto {
static void InitDefaultsAlertCategory() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mtm::alert::model::_AlertCategory_default_instance_;
    new (ptr) ::mtm::alert::model::AlertCategory();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mtm::alert::model::AlertCategory::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AlertCategory =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAlertCategory}, {
      &protobuf_mtm_2fcommon_5ftypes_2eproto::scc_info_Uuid.base,}};

static void InitDefaultsAlertCategoryList() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mtm::alert::model::_AlertCategoryList_default_instance_;
    new (ptr) ::mtm::alert::model::AlertCategoryList();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mtm::alert::model::AlertCategoryList::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_AlertCategoryList =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsAlertCategoryList}, {
      &protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::scc_info_AlertCategory.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AlertCategory.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AlertCategoryList.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategory, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategory, category_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategory, display_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategory, acronym_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategory, removed_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategoryList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::mtm::alert::model::AlertCategoryList, alert_categories_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mtm::alert::model::AlertCategory)},
  { 9, -1, sizeof(::mtm::alert::model::AlertCategoryList)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::mtm::alert::model::_AlertCategory_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::mtm::alert::model::_AlertCategoryList_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "mtm/alert/model/alert_category.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n$mtm/alert/model/alert_category.proto\022\017"
      "mtm.alert.model\032\037google/protobuf/timesta"
      "mp.proto\032\036google/protobuf/duration.proto"
      "\032\026mtm/common_types.proto\032#mtm/event/argu"
      "ment_descriptor.proto\"g\n\rAlertCategory\022\036"
      "\n\013category_id\030\001 \001(\0132\t.mtm.Uuid\022\024\n\014displa"
      "y_name\030\002 \001(\t\022\017\n\007acronym\030\003 \001(\t\022\017\n\007removed"
      "\030\004 \001(\010\"M\n\021AlertCategoryList\0228\n\020alert_cat"
      "egories\030\001 \003(\0132\036.mtm.alert.model.AlertCat"
      "egoryb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 373);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mtm/alert/model/alert_category.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2ftimestamp_2eproto::AddDescriptors();
  ::protobuf_google_2fprotobuf_2fduration_2eproto::AddDescriptors();
  ::protobuf_mtm_2fcommon_5ftypes_2eproto::AddDescriptors();
  ::protobuf_mtm_2fevent_2fargument_5fdescriptor_2eproto::AddDescriptors();
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
}  // namespace protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto
namespace mtm {
namespace alert {
namespace model {

// ===================================================================

void AlertCategory::InitAsDefaultInstance() {
  ::mtm::alert::model::_AlertCategory_default_instance_._instance.get_mutable()->category_id_ = const_cast< ::mtm::Uuid*>(
      ::mtm::Uuid::internal_default_instance());
}
void AlertCategory::clear_category_id() {
  if (GetArenaNoVirtual() == NULL && category_id_ != NULL) {
    delete category_id_;
  }
  category_id_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AlertCategory::kCategoryIdFieldNumber;
const int AlertCategory::kDisplayNameFieldNumber;
const int AlertCategory::kAcronymFieldNumber;
const int AlertCategory::kRemovedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AlertCategory::AlertCategory()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::scc_info_AlertCategory.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtm.alert.model.AlertCategory)
}
AlertCategory::AlertCategory(const AlertCategory& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.display_name().size() > 0) {
    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  acronym_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.acronym().size() > 0) {
    acronym_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.acronym_);
  }
  if (from.has_category_id()) {
    category_id_ = new ::mtm::Uuid(*from.category_id_);
  } else {
    category_id_ = NULL;
  }
  removed_ = from.removed_;
  // @@protoc_insertion_point(copy_constructor:mtm.alert.model.AlertCategory)
}

void AlertCategory::SharedCtor() {
  display_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  acronym_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&category_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&removed_) -
      reinterpret_cast<char*>(&category_id_)) + sizeof(removed_));
}

AlertCategory::~AlertCategory() {
  // @@protoc_insertion_point(destructor:mtm.alert.model.AlertCategory)
  SharedDtor();
}

void AlertCategory::SharedDtor() {
  display_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  acronym_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete category_id_;
}

void AlertCategory::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AlertCategory::descriptor() {
  ::protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AlertCategory& AlertCategory::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::scc_info_AlertCategory.base);
  return *internal_default_instance();
}


void AlertCategory::Clear() {
// @@protoc_insertion_point(message_clear_start:mtm.alert.model.AlertCategory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  acronym_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && category_id_ != NULL) {
    delete category_id_;
  }
  category_id_ = NULL;
  removed_ = false;
  _internal_metadata_.Clear();
}

bool AlertCategory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mtm.alert.model.AlertCategory)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .mtm.Uuid category_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_category_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string display_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_display_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->display_name().data(), static_cast<int>(this->display_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mtm.alert.model.AlertCategory.display_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string acronym = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_acronym()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->acronym().data(), static_cast<int>(this->acronym().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "mtm.alert.model.AlertCategory.acronym"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool removed = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &removed_)));
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
  // @@protoc_insertion_point(parse_success:mtm.alert.model.AlertCategory)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mtm.alert.model.AlertCategory)
  return false;
#undef DO_
}

void AlertCategory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mtm.alert.model.AlertCategory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mtm.Uuid category_id = 1;
  if (this->has_category_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_category_id(), output);
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mtm.alert.model.AlertCategory.display_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->display_name(), output);
  }

  // string acronym = 3;
  if (this->acronym().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->acronym().data(), static_cast<int>(this->acronym().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mtm.alert.model.AlertCategory.acronym");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->acronym(), output);
  }

  // bool removed = 4;
  if (this->removed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->removed(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mtm.alert.model.AlertCategory)
}

::google::protobuf::uint8* AlertCategory::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mtm.alert.model.AlertCategory)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .mtm.Uuid category_id = 1;
  if (this->has_category_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_category_id(), deterministic, target);
  }

  // string display_name = 2;
  if (this->display_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->display_name().data(), static_cast<int>(this->display_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mtm.alert.model.AlertCategory.display_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->display_name(), target);
  }

  // string acronym = 3;
  if (this->acronym().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->acronym().data(), static_cast<int>(this->acronym().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "mtm.alert.model.AlertCategory.acronym");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->acronym(), target);
  }

  // bool removed = 4;
  if (this->removed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->removed(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mtm.alert.model.AlertCategory)
  return target;
}

size_t AlertCategory::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mtm.alert.model.AlertCategory)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string display_name = 2;
  if (this->display_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->display_name());
  }

  // string acronym = 3;
  if (this->acronym().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->acronym());
  }

  // .mtm.Uuid category_id = 1;
  if (this->has_category_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *category_id_);
  }

  // bool removed = 4;
  if (this->removed() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AlertCategory::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mtm.alert.model.AlertCategory)
  GOOGLE_DCHECK_NE(&from, this);
  const AlertCategory* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AlertCategory>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mtm.alert.model.AlertCategory)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mtm.alert.model.AlertCategory)
    MergeFrom(*source);
  }
}

void AlertCategory::MergeFrom(const AlertCategory& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mtm.alert.model.AlertCategory)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.display_name().size() > 0) {

    display_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.display_name_);
  }
  if (from.acronym().size() > 0) {

    acronym_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.acronym_);
  }
  if (from.has_category_id()) {
    mutable_category_id()->::mtm::Uuid::MergeFrom(from.category_id());
  }
  if (from.removed() != 0) {
    set_removed(from.removed());
  }
}

void AlertCategory::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mtm.alert.model.AlertCategory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AlertCategory::CopyFrom(const AlertCategory& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mtm.alert.model.AlertCategory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AlertCategory::IsInitialized() const {
  return true;
}

void AlertCategory::Swap(AlertCategory* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AlertCategory::InternalSwap(AlertCategory* other) {
  using std::swap;
  display_name_.Swap(&other->display_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  acronym_.Swap(&other->acronym_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(category_id_, other->category_id_);
  swap(removed_, other->removed_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AlertCategory::GetMetadata() const {
  protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void AlertCategoryList::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AlertCategoryList::kAlertCategoriesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AlertCategoryList::AlertCategoryList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::scc_info_AlertCategoryList.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:mtm.alert.model.AlertCategoryList)
}
AlertCategoryList::AlertCategoryList(const AlertCategoryList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      alert_categories_(from.alert_categories_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mtm.alert.model.AlertCategoryList)
}

void AlertCategoryList::SharedCtor() {
}

AlertCategoryList::~AlertCategoryList() {
  // @@protoc_insertion_point(destructor:mtm.alert.model.AlertCategoryList)
  SharedDtor();
}

void AlertCategoryList::SharedDtor() {
}

void AlertCategoryList::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AlertCategoryList::descriptor() {
  ::protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AlertCategoryList& AlertCategoryList::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::scc_info_AlertCategoryList.base);
  return *internal_default_instance();
}


void AlertCategoryList::Clear() {
// @@protoc_insertion_point(message_clear_start:mtm.alert.model.AlertCategoryList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  alert_categories_.Clear();
  _internal_metadata_.Clear();
}

bool AlertCategoryList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:mtm.alert.model.AlertCategoryList)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .mtm.alert.model.AlertCategory alert_categories = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_alert_categories()));
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
  // @@protoc_insertion_point(parse_success:mtm.alert.model.AlertCategoryList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mtm.alert.model.AlertCategoryList)
  return false;
#undef DO_
}

void AlertCategoryList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mtm.alert.model.AlertCategoryList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mtm.alert.model.AlertCategory alert_categories = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->alert_categories_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->alert_categories(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:mtm.alert.model.AlertCategoryList)
}

::google::protobuf::uint8* AlertCategoryList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:mtm.alert.model.AlertCategoryList)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .mtm.alert.model.AlertCategory alert_categories = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->alert_categories_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->alert_categories(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mtm.alert.model.AlertCategoryList)
  return target;
}

size_t AlertCategoryList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mtm.alert.model.AlertCategoryList)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .mtm.alert.model.AlertCategory alert_categories = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->alert_categories_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->alert_categories(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AlertCategoryList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mtm.alert.model.AlertCategoryList)
  GOOGLE_DCHECK_NE(&from, this);
  const AlertCategoryList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AlertCategoryList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mtm.alert.model.AlertCategoryList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mtm.alert.model.AlertCategoryList)
    MergeFrom(*source);
  }
}

void AlertCategoryList::MergeFrom(const AlertCategoryList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mtm.alert.model.AlertCategoryList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  alert_categories_.MergeFrom(from.alert_categories_);
}

void AlertCategoryList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mtm.alert.model.AlertCategoryList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AlertCategoryList::CopyFrom(const AlertCategoryList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mtm.alert.model.AlertCategoryList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AlertCategoryList::IsInitialized() const {
  return true;
}

void AlertCategoryList::Swap(AlertCategoryList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AlertCategoryList::InternalSwap(AlertCategoryList* other) {
  using std::swap;
  CastToBase(&alert_categories_)->InternalSwap(CastToBase(&other->alert_categories_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AlertCategoryList::GetMetadata() const {
  protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_mtm_2falert_2fmodel_2falert_5fcategory_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace alert
}  // namespace mtm
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mtm::alert::model::AlertCategory* Arena::CreateMaybeMessage< ::mtm::alert::model::AlertCategory >(Arena* arena) {
  return Arena::CreateInternal< ::mtm::alert::model::AlertCategory >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::mtm::alert::model::AlertCategoryList* Arena::CreateMaybeMessage< ::mtm::alert::model::AlertCategoryList >(Arena* arena) {
  return Arena::CreateInternal< ::mtm::alert::model::AlertCategoryList >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
