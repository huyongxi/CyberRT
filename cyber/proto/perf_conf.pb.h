// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/perf_conf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2fperf_5fconf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2fperf_5fconf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cyber_2fproto_2fperf_5fconf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cyber_2fproto_2fperf_5fconf_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2fperf_5fconf_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class PerfConf;
struct PerfConfDefaultTypeInternal;
extern PerfConfDefaultTypeInternal _PerfConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::PerfConf* Arena::CreateMaybeMessage<::apollo::cyber::proto::PerfConf>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

enum PerfType : int {
  SCHED = 1,
  TRANSPORT = 2,
  DATA_CACHE = 3,
  ALL = 4
};
bool PerfType_IsValid(int value);
constexpr PerfType PerfType_MIN = SCHED;
constexpr PerfType PerfType_MAX = ALL;
constexpr int PerfType_ARRAYSIZE = PerfType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PerfType_descriptor();
template<typename T>
inline const std::string& PerfType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PerfType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PerfType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PerfType_descriptor(), enum_t_value);
}
inline bool PerfType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PerfType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PerfType>(
    PerfType_descriptor(), name, value);
}
// ===================================================================

class PerfConf final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.PerfConf) */ {
 public:
  inline PerfConf() : PerfConf(nullptr) {}
  ~PerfConf() override;
  explicit PROTOBUF_CONSTEXPR PerfConf(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PerfConf(const PerfConf& from);
  PerfConf(PerfConf&& from) noexcept
    : PerfConf() {
    *this = ::std::move(from);
  }

  inline PerfConf& operator=(const PerfConf& from) {
    CopyFrom(from);
    return *this;
  }
  inline PerfConf& operator=(PerfConf&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PerfConf& default_instance() {
    return *internal_default_instance();
  }
  static inline const PerfConf* internal_default_instance() {
    return reinterpret_cast<const PerfConf*>(
               &_PerfConf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PerfConf& a, PerfConf& b) {
    a.Swap(&b);
  }
  inline void Swap(PerfConf* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PerfConf* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PerfConf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PerfConf>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PerfConf& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PerfConf& from) {
    PerfConf::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PerfConf* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.PerfConf";
  }
  protected:
  explicit PerfConf(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnableFieldNumber = 1,
    kTypeFieldNumber = 2,
  };
  // optional bool enable = 1 [default = false];
  bool has_enable() const;
  private:
  bool _internal_has_enable() const;
  public:
  void clear_enable();
  bool enable() const;
  void set_enable(bool value);
  private:
  bool _internal_enable() const;
  void _internal_set_enable(bool value);
  public:

  // optional .apollo.cyber.proto.PerfType type = 2 [default = ALL];
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::apollo::cyber::proto::PerfType type() const;
  void set_type(::apollo::cyber::proto::PerfType value);
  private:
  ::apollo::cyber::proto::PerfType _internal_type() const;
  void _internal_set_type(::apollo::cyber::proto::PerfType value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.PerfConf)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    bool enable_;
    int type_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cyber_2fproto_2fperf_5fconf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PerfConf

// optional bool enable = 1 [default = false];
inline bool PerfConf::_internal_has_enable() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PerfConf::has_enable() const {
  return _internal_has_enable();
}
inline void PerfConf::clear_enable() {
  _impl_.enable_ = false;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool PerfConf::_internal_enable() const {
  return _impl_.enable_;
}
inline bool PerfConf::enable() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.PerfConf.enable)
  return _internal_enable();
}
inline void PerfConf::_internal_set_enable(bool value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.enable_ = value;
}
inline void PerfConf::set_enable(bool value) {
  _internal_set_enable(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.PerfConf.enable)
}

// optional .apollo.cyber.proto.PerfType type = 2 [default = ALL];
inline bool PerfConf::_internal_has_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool PerfConf::has_type() const {
  return _internal_has_type();
}
inline void PerfConf::clear_type() {
  _impl_.type_ = 4;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::cyber::proto::PerfType PerfConf::_internal_type() const {
  return static_cast< ::apollo::cyber::proto::PerfType >(_impl_.type_);
}
inline ::apollo::cyber::proto::PerfType PerfConf::type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.PerfConf.type)
  return _internal_type();
}
inline void PerfConf::_internal_set_type(::apollo::cyber::proto::PerfType value) {
  assert(::apollo::cyber::proto::PerfType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.type_ = value;
}
inline void PerfConf::set_type(::apollo::cyber::proto::PerfType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.PerfConf.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::cyber::proto::PerfType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::PerfType>() {
  return ::apollo::cyber::proto::PerfType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2fperf_5fconf_2eproto
