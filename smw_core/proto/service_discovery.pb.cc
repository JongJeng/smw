// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service_discovery.proto

#include "service_discovery.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace smw {
namespace core {
namespace proto {
class ServiceInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ServiceInfo>
      _instance;
} _ServiceInfo_default_instance_;
class ServiceDiscoveryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ServiceDiscovery>
      _instance;
} _ServiceDiscovery_default_instance_;
}  // namespace proto
}  // namespace core
}  // namespace smw
namespace protobuf_service_5fdiscovery_2eproto {
void InitDefaultsServiceInfoImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::smw::core::proto::_ServiceInfo_default_instance_;
    new (ptr) ::smw::core::proto::ServiceInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::smw::core::proto::ServiceInfo::InitAsDefaultInstance();
}

void InitDefaultsServiceInfo() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsServiceInfoImpl);
}

void InitDefaultsServiceDiscoveryImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_service_5fdiscovery_2eproto::InitDefaultsServiceInfo();
  {
    void* ptr = &::smw::core::proto::_ServiceDiscovery_default_instance_;
    new (ptr) ::smw::core::proto::ServiceDiscovery();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::smw::core::proto::ServiceDiscovery::InitAsDefaultInstance();
}

void InitDefaultsServiceDiscovery() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsServiceDiscoveryImpl);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceInfo, service_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceInfo, instance_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceInfo, host_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceInfo, process_id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceDiscovery, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceDiscovery, operation_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::smw::core::proto::ServiceDiscovery, service_info_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::smw::core::proto::ServiceInfo)},
  { 9, -1, sizeof(::smw::core::proto::ServiceDiscovery)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::smw::core::proto::_ServiceInfo_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::smw::core::proto::_ServiceDiscovery_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "service_discovery.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\027service_discovery.proto\022\016smw.core.prot"
      "o\"[\n\013ServiceInfo\022\022\n\nservice_id\030\001 \001(\r\022\023\n\013"
      "instance_id\030\002 \001(\r\022\017\n\007host_id\030\004 \001(\t\022\022\n\npr"
      "ocess_id\030\005 \001(\t\"\345\001\n\020ServiceDiscovery\022M\n\to"
      "peration\030\001 \001(\0162:.smw.core.proto.ServiceD"
      "iscovery.ServiceDiscoveryOperation\0221\n\014se"
      "rvice_info\030\002 \001(\0132\033.smw.core.proto.Servic"
      "eInfo\"O\n\031ServiceDiscoveryOperation\022\t\n\005OF"
      "FER\020\000\022\016\n\nSTOP_OFFER\020\001\022\010\n\004FIND\020\002\022\r\n\tSTOP_"
      "FIND\020\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 374);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "service_discovery.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_service_5fdiscovery_2eproto
namespace smw {
namespace core {
namespace proto {
const ::google::protobuf::EnumDescriptor* ServiceDiscovery_ServiceDiscoveryOperation_descriptor() {
  protobuf_service_5fdiscovery_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_service_5fdiscovery_2eproto::file_level_enum_descriptors[0];
}
bool ServiceDiscovery_ServiceDiscoveryOperation_IsValid(int value) {
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

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ServiceDiscovery_ServiceDiscoveryOperation ServiceDiscovery::OFFER;
const ServiceDiscovery_ServiceDiscoveryOperation ServiceDiscovery::STOP_OFFER;
const ServiceDiscovery_ServiceDiscoveryOperation ServiceDiscovery::FIND;
const ServiceDiscovery_ServiceDiscoveryOperation ServiceDiscovery::STOP_FIND;
const ServiceDiscovery_ServiceDiscoveryOperation ServiceDiscovery::ServiceDiscoveryOperation_MIN;
const ServiceDiscovery_ServiceDiscoveryOperation ServiceDiscovery::ServiceDiscoveryOperation_MAX;
const int ServiceDiscovery::ServiceDiscoveryOperation_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void ServiceInfo::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServiceInfo::kServiceIdFieldNumber;
const int ServiceInfo::kInstanceIdFieldNumber;
const int ServiceInfo::kHostIdFieldNumber;
const int ServiceInfo::kProcessIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServiceInfo::ServiceInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_service_5fdiscovery_2eproto::InitDefaultsServiceInfo();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:smw.core.proto.ServiceInfo)
}
ServiceInfo::ServiceInfo(const ServiceInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  host_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.host_id().size() > 0) {
    host_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_id_);
  }
  process_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.process_id().size() > 0) {
    process_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.process_id_);
  }
  ::memcpy(&service_id_, &from.service_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&instance_id_) -
    reinterpret_cast<char*>(&service_id_)) + sizeof(instance_id_));
  // @@protoc_insertion_point(copy_constructor:smw.core.proto.ServiceInfo)
}

void ServiceInfo::SharedCtor() {
  host_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  process_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&service_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&instance_id_) -
      reinterpret_cast<char*>(&service_id_)) + sizeof(instance_id_));
  _cached_size_ = 0;
}

ServiceInfo::~ServiceInfo() {
  // @@protoc_insertion_point(destructor:smw.core.proto.ServiceInfo)
  SharedDtor();
}

void ServiceInfo::SharedDtor() {
  host_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  process_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ServiceInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServiceInfo::descriptor() {
  ::protobuf_service_5fdiscovery_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_5fdiscovery_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ServiceInfo& ServiceInfo::default_instance() {
  ::protobuf_service_5fdiscovery_2eproto::InitDefaultsServiceInfo();
  return *internal_default_instance();
}

ServiceInfo* ServiceInfo::New(::google::protobuf::Arena* arena) const {
  ServiceInfo* n = new ServiceInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServiceInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:smw.core.proto.ServiceInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  host_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  process_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&service_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&instance_id_) -
      reinterpret_cast<char*>(&service_id_)) + sizeof(instance_id_));
  _internal_metadata_.Clear();
}

bool ServiceInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:smw.core.proto.ServiceInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 service_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &service_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 instance_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &instance_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string host_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->host_id().data(), static_cast<int>(this->host_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "smw.core.proto.ServiceInfo.host_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string process_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_process_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->process_id().data(), static_cast<int>(this->process_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "smw.core.proto.ServiceInfo.process_id"));
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
  // @@protoc_insertion_point(parse_success:smw.core.proto.ServiceInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:smw.core.proto.ServiceInfo)
  return false;
#undef DO_
}

void ServiceInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:smw.core.proto.ServiceInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 service_id = 1;
  if (this->service_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->service_id(), output);
  }

  // uint32 instance_id = 2;
  if (this->instance_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->instance_id(), output);
  }

  // string host_id = 4;
  if (this->host_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->host_id().data(), static_cast<int>(this->host_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "smw.core.proto.ServiceInfo.host_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->host_id(), output);
  }

  // string process_id = 5;
  if (this->process_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->process_id().data(), static_cast<int>(this->process_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "smw.core.proto.ServiceInfo.process_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->process_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:smw.core.proto.ServiceInfo)
}

::google::protobuf::uint8* ServiceInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:smw.core.proto.ServiceInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 service_id = 1;
  if (this->service_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->service_id(), target);
  }

  // uint32 instance_id = 2;
  if (this->instance_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->instance_id(), target);
  }

  // string host_id = 4;
  if (this->host_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->host_id().data(), static_cast<int>(this->host_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "smw.core.proto.ServiceInfo.host_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->host_id(), target);
  }

  // string process_id = 5;
  if (this->process_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->process_id().data(), static_cast<int>(this->process_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "smw.core.proto.ServiceInfo.process_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->process_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:smw.core.proto.ServiceInfo)
  return target;
}

size_t ServiceInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:smw.core.proto.ServiceInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string host_id = 4;
  if (this->host_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->host_id());
  }

  // string process_id = 5;
  if (this->process_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->process_id());
  }

  // uint32 service_id = 1;
  if (this->service_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->service_id());
  }

  // uint32 instance_id = 2;
  if (this->instance_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->instance_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServiceInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:smw.core.proto.ServiceInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ServiceInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ServiceInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:smw.core.proto.ServiceInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:smw.core.proto.ServiceInfo)
    MergeFrom(*source);
  }
}

void ServiceInfo::MergeFrom(const ServiceInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:smw.core.proto.ServiceInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.host_id().size() > 0) {

    host_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.host_id_);
  }
  if (from.process_id().size() > 0) {

    process_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.process_id_);
  }
  if (from.service_id() != 0) {
    set_service_id(from.service_id());
  }
  if (from.instance_id() != 0) {
    set_instance_id(from.instance_id());
  }
}

void ServiceInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:smw.core.proto.ServiceInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServiceInfo::CopyFrom(const ServiceInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:smw.core.proto.ServiceInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceInfo::IsInitialized() const {
  return true;
}

void ServiceInfo::Swap(ServiceInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServiceInfo::InternalSwap(ServiceInfo* other) {
  using std::swap;
  host_id_.Swap(&other->host_id_);
  process_id_.Swap(&other->process_id_);
  swap(service_id_, other->service_id_);
  swap(instance_id_, other->instance_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ServiceInfo::GetMetadata() const {
  protobuf_service_5fdiscovery_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_5fdiscovery_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ServiceDiscovery::InitAsDefaultInstance() {
  ::smw::core::proto::_ServiceDiscovery_default_instance_._instance.get_mutable()->service_info_ = const_cast< ::smw::core::proto::ServiceInfo*>(
      ::smw::core::proto::ServiceInfo::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServiceDiscovery::kOperationFieldNumber;
const int ServiceDiscovery::kServiceInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServiceDiscovery::ServiceDiscovery()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_service_5fdiscovery_2eproto::InitDefaultsServiceDiscovery();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:smw.core.proto.ServiceDiscovery)
}
ServiceDiscovery::ServiceDiscovery(const ServiceDiscovery& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_service_info()) {
    service_info_ = new ::smw::core::proto::ServiceInfo(*from.service_info_);
  } else {
    service_info_ = NULL;
  }
  operation_ = from.operation_;
  // @@protoc_insertion_point(copy_constructor:smw.core.proto.ServiceDiscovery)
}

void ServiceDiscovery::SharedCtor() {
  ::memset(&service_info_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&operation_) -
      reinterpret_cast<char*>(&service_info_)) + sizeof(operation_));
  _cached_size_ = 0;
}

ServiceDiscovery::~ServiceDiscovery() {
  // @@protoc_insertion_point(destructor:smw.core.proto.ServiceDiscovery)
  SharedDtor();
}

void ServiceDiscovery::SharedDtor() {
  if (this != internal_default_instance()) delete service_info_;
}

void ServiceDiscovery::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServiceDiscovery::descriptor() {
  ::protobuf_service_5fdiscovery_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_5fdiscovery_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ServiceDiscovery& ServiceDiscovery::default_instance() {
  ::protobuf_service_5fdiscovery_2eproto::InitDefaultsServiceDiscovery();
  return *internal_default_instance();
}

ServiceDiscovery* ServiceDiscovery::New(::google::protobuf::Arena* arena) const {
  ServiceDiscovery* n = new ServiceDiscovery;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServiceDiscovery::Clear() {
// @@protoc_insertion_point(message_clear_start:smw.core.proto.ServiceDiscovery)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && service_info_ != NULL) {
    delete service_info_;
  }
  service_info_ = NULL;
  operation_ = 0;
  _internal_metadata_.Clear();
}

bool ServiceDiscovery::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:smw.core.proto.ServiceDiscovery)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .smw.core.proto.ServiceDiscovery.ServiceDiscoveryOperation operation = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operation(static_cast< ::smw::core::proto::ServiceDiscovery_ServiceDiscoveryOperation >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .smw.core.proto.ServiceInfo service_info = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_service_info()));
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
  // @@protoc_insertion_point(parse_success:smw.core.proto.ServiceDiscovery)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:smw.core.proto.ServiceDiscovery)
  return false;
#undef DO_
}

void ServiceDiscovery::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:smw.core.proto.ServiceDiscovery)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .smw.core.proto.ServiceDiscovery.ServiceDiscoveryOperation operation = 1;
  if (this->operation() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->operation(), output);
  }

  // .smw.core.proto.ServiceInfo service_info = 2;
  if (this->has_service_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->service_info_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:smw.core.proto.ServiceDiscovery)
}

::google::protobuf::uint8* ServiceDiscovery::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:smw.core.proto.ServiceDiscovery)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .smw.core.proto.ServiceDiscovery.ServiceDiscoveryOperation operation = 1;
  if (this->operation() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->operation(), target);
  }

  // .smw.core.proto.ServiceInfo service_info = 2;
  if (this->has_service_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, *this->service_info_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:smw.core.proto.ServiceDiscovery)
  return target;
}

size_t ServiceDiscovery::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:smw.core.proto.ServiceDiscovery)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .smw.core.proto.ServiceInfo service_info = 2;
  if (this->has_service_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *this->service_info_);
  }

  // .smw.core.proto.ServiceDiscovery.ServiceDiscoveryOperation operation = 1;
  if (this->operation() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operation());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServiceDiscovery::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:smw.core.proto.ServiceDiscovery)
  GOOGLE_DCHECK_NE(&from, this);
  const ServiceDiscovery* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ServiceDiscovery>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:smw.core.proto.ServiceDiscovery)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:smw.core.proto.ServiceDiscovery)
    MergeFrom(*source);
  }
}

void ServiceDiscovery::MergeFrom(const ServiceDiscovery& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:smw.core.proto.ServiceDiscovery)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_service_info()) {
    mutable_service_info()->::smw::core::proto::ServiceInfo::MergeFrom(from.service_info());
  }
  if (from.operation() != 0) {
    set_operation(from.operation());
  }
}

void ServiceDiscovery::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:smw.core.proto.ServiceDiscovery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServiceDiscovery::CopyFrom(const ServiceDiscovery& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:smw.core.proto.ServiceDiscovery)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceDiscovery::IsInitialized() const {
  return true;
}

void ServiceDiscovery::Swap(ServiceDiscovery* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServiceDiscovery::InternalSwap(ServiceDiscovery* other) {
  using std::swap;
  swap(service_info_, other->service_info_);
  swap(operation_, other->operation_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ServiceDiscovery::GetMetadata() const {
  protobuf_service_5fdiscovery_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_service_5fdiscovery_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace core
}  // namespace smw

// @@protoc_insertion_point(global_scope)
