// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/proto/map_yield_sign.proto

#include "modules/map/proto/map_yield_sign.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Curve_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_modules_2fmap_2fproto_2fmap_5fid_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Id_modules_2fmap_2fproto_2fmap_5fid_2eproto;
namespace apollo {
namespace hdmap {
class YieldSignDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<YieldSign> _instance;
} _YieldSign_default_instance_;
}  // namespace hdmap
}  // namespace apollo
static void InitDefaultsscc_info_YieldSign_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::hdmap::_YieldSign_default_instance_;
    new (ptr) ::apollo::hdmap::YieldSign();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::hdmap::YieldSign::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_YieldSign_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsscc_info_YieldSign_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto}, {
      &scc_info_Id_modules_2fmap_2fproto_2fmap_5fid_2eproto.base,
      &scc_info_Curve_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, id_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, stop_line_),
  PROTOBUF_FIELD_OFFSET(::apollo::hdmap::YieldSign, overlap_id_),
  0,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::apollo::hdmap::YieldSign)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::hdmap::_YieldSign_default_instance_),
};

const char descriptor_table_protodef_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto[] =
  "\n&modules/map/proto/map_yield_sign.proto"
  "\022\014apollo.hdmap\032\036modules/map/proto/map_id"
  ".proto\032$modules/map/proto/map_geometry.p"
  "roto\"w\n\tYieldSign\022\034\n\002id\030\001 \001(\0132\020.apollo.h"
  "dmap.Id\022&\n\tstop_line\030\002 \003(\0132\023.apollo.hdma"
  "p.Curve\022$\n\noverlap_id\030\003 \003(\0132\020.apollo.hdm"
  "ap.Id"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_deps[2] = {
  &::descriptor_table_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto,
  &::descriptor_table_modules_2fmap_2fproto_2fmap_5fid_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_sccs[1] = {
  &scc_info_YieldSign_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_once;
static bool descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = {
  &descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_initialized, descriptor_table_protodef_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto, "modules/map/proto/map_yield_sign.proto", 245,
  &descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_once, descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_sccs, descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto::offsets,
  file_level_metadata_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto, 1, file_level_enum_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto, file_level_service_descriptors_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto), true);
namespace apollo {
namespace hdmap {

// ===================================================================

void YieldSign::InitAsDefaultInstance() {
  ::apollo::hdmap::_YieldSign_default_instance_._instance.get_mutable()->id_ = const_cast< ::apollo::hdmap::Id*>(
      ::apollo::hdmap::Id::internal_default_instance());
}
class YieldSign::HasBitSetters {
 public:
  using HasBits = decltype(std::declval<YieldSign>()._has_bits_);
  static const ::apollo::hdmap::Id& id(const YieldSign* msg);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::hdmap::Id&
YieldSign::HasBitSetters::id(const YieldSign* msg) {
  return *msg->id_;
}
void YieldSign::clear_id() {
  if (id_ != nullptr) id_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void YieldSign::clear_stop_line() {
  stop_line_.Clear();
}
void YieldSign::clear_overlap_id() {
  overlap_id_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int YieldSign::kIdFieldNumber;
const int YieldSign::kStopLineFieldNumber;
const int YieldSign::kOverlapIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

YieldSign::YieldSign()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.YieldSign)
}
YieldSign::YieldSign(const YieldSign& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      stop_line_(from.stop_line_),
      overlap_id_(from.overlap_id_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_id()) {
    id_ = new ::apollo::hdmap::Id(*from.id_);
  } else {
    id_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.YieldSign)
}

void YieldSign::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_YieldSign_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto.base);
  id_ = nullptr;
}

YieldSign::~YieldSign() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.YieldSign)
  SharedDtor();
}

void YieldSign::SharedDtor() {
  if (this != internal_default_instance()) delete id_;
}

void YieldSign::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const YieldSign& YieldSign::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_YieldSign_modules_2fmap_2fproto_2fmap_5fyield_5fsign_2eproto.base);
  return *internal_default_instance();
}


void YieldSign::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.YieldSign)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  stop_line_.Clear();
  overlap_id_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(id_ != nullptr);
    id_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* YieldSign::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  HasBitSetters::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.hdmap.Id id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(mutable_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.hdmap.Curve stop_line = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_stop_line(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 18);
        } else goto handle_unusual;
        continue;
      // repeated .apollo.hdmap.Id overlap_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(add_overlap_id(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 26);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool YieldSign::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.YieldSign)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.hdmap.Id id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.hdmap.Curve stop_line = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_stop_line()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .apollo.hdmap.Id overlap_id = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
                input, add_overlap_id()));
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
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.hdmap.YieldSign)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.YieldSign)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void YieldSign::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.YieldSign)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::id(this), output);
  }

  // repeated .apollo.hdmap.Curve stop_line = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->stop_line_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->stop_line(static_cast<int>(i)),
      output);
  }

  // repeated .apollo.hdmap.Id overlap_id = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->overlap_id_size()); i < n; i++) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->overlap_id(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.YieldSign)
}

::PROTOBUF_NAMESPACE_ID::uint8* YieldSign::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.YieldSign)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::id(this), target);
  }

  // repeated .apollo.hdmap.Curve stop_line = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->stop_line_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->stop_line(static_cast<int>(i)), target);
  }

  // repeated .apollo.hdmap.Id overlap_id = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->overlap_id_size()); i < n; i++) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->overlap_id(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.YieldSign)
  return target;
}

size_t YieldSign::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.YieldSign)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.hdmap.Curve stop_line = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->stop_line_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->stop_line(static_cast<int>(i)));
    }
  }

  // repeated .apollo.hdmap.Id overlap_id = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->overlap_id_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          this->overlap_id(static_cast<int>(i)));
    }
  }

  // optional .apollo.hdmap.Id id = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *id_);
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void YieldSign::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.YieldSign)
  GOOGLE_DCHECK_NE(&from, this);
  const YieldSign* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<YieldSign>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.YieldSign)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.YieldSign)
    MergeFrom(*source);
  }
}

void YieldSign::MergeFrom(const YieldSign& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.YieldSign)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  stop_line_.MergeFrom(from.stop_line_);
  overlap_id_.MergeFrom(from.overlap_id_);
  if (from.has_id()) {
    mutable_id()->::apollo::hdmap::Id::MergeFrom(from.id());
  }
}

void YieldSign::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.YieldSign)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void YieldSign::CopyFrom(const YieldSign& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.YieldSign)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool YieldSign::IsInitialized() const {
  return true;
}

void YieldSign::Swap(YieldSign* other) {
  if (other == this) return;
  InternalSwap(other);
}
void YieldSign::InternalSwap(YieldSign* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  CastToBase(&stop_line_)->InternalSwap(CastToBase(&other->stop_line_));
  CastToBase(&overlap_id_)->InternalSwap(CastToBase(&other->overlap_id_));
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata YieldSign::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace hdmap
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::hdmap::YieldSign* Arena::CreateMaybeMessage< ::apollo::hdmap::YieldSign >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::hdmap::YieldSign >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>