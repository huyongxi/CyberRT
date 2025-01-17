// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/qos_profile.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2fqos_5fprofile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2fqos_5fprofile_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_cyber_2fproto_2fqos_5fprofile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cyber_2fproto_2fqos_5fprofile_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class QosProfile;
struct QosProfileDefaultTypeInternal;
extern QosProfileDefaultTypeInternal _QosProfile_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::QosProfile* Arena::CreateMaybeMessage<::apollo::cyber::proto::QosProfile>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

enum QosHistoryPolicy : int {
  HISTORY_SYSTEM_DEFAULT = 0,
  HISTORY_KEEP_LAST = 1,
  HISTORY_KEEP_ALL = 2
};
bool QosHistoryPolicy_IsValid(int value);
constexpr QosHistoryPolicy QosHistoryPolicy_MIN = HISTORY_SYSTEM_DEFAULT;
constexpr QosHistoryPolicy QosHistoryPolicy_MAX = HISTORY_KEEP_ALL;
constexpr int QosHistoryPolicy_ARRAYSIZE = QosHistoryPolicy_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosHistoryPolicy_descriptor();
template<typename T>
inline const std::string& QosHistoryPolicy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, QosHistoryPolicy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function QosHistoryPolicy_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    QosHistoryPolicy_descriptor(), enum_t_value);
}
inline bool QosHistoryPolicy_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, QosHistoryPolicy* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<QosHistoryPolicy>(
    QosHistoryPolicy_descriptor(), name, value);
}
enum QosReliabilityPolicy : int {
  RELIABILITY_SYSTEM_DEFAULT = 0,
  RELIABILITY_RELIABLE = 1,
  RELIABILITY_BEST_EFFORT = 2
};
bool QosReliabilityPolicy_IsValid(int value);
constexpr QosReliabilityPolicy QosReliabilityPolicy_MIN = RELIABILITY_SYSTEM_DEFAULT;
constexpr QosReliabilityPolicy QosReliabilityPolicy_MAX = RELIABILITY_BEST_EFFORT;
constexpr int QosReliabilityPolicy_ARRAYSIZE = QosReliabilityPolicy_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosReliabilityPolicy_descriptor();
template<typename T>
inline const std::string& QosReliabilityPolicy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, QosReliabilityPolicy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function QosReliabilityPolicy_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    QosReliabilityPolicy_descriptor(), enum_t_value);
}
inline bool QosReliabilityPolicy_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, QosReliabilityPolicy* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<QosReliabilityPolicy>(
    QosReliabilityPolicy_descriptor(), name, value);
}
enum QosDurabilityPolicy : int {
  DURABILITY_SYSTEM_DEFAULT = 0,
  DURABILITY_TRANSIENT_LOCAL = 1,
  DURABILITY_VOLATILE = 2
};
bool QosDurabilityPolicy_IsValid(int value);
constexpr QosDurabilityPolicy QosDurabilityPolicy_MIN = DURABILITY_SYSTEM_DEFAULT;
constexpr QosDurabilityPolicy QosDurabilityPolicy_MAX = DURABILITY_VOLATILE;
constexpr int QosDurabilityPolicy_ARRAYSIZE = QosDurabilityPolicy_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosDurabilityPolicy_descriptor();
template<typename T>
inline const std::string& QosDurabilityPolicy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, QosDurabilityPolicy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function QosDurabilityPolicy_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    QosDurabilityPolicy_descriptor(), enum_t_value);
}
inline bool QosDurabilityPolicy_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, QosDurabilityPolicy* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<QosDurabilityPolicy>(
    QosDurabilityPolicy_descriptor(), name, value);
}
// ===================================================================

class QosProfile final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.QosProfile) */ {
 public:
  inline QosProfile() : QosProfile(nullptr) {}
  ~QosProfile() override;
  explicit PROTOBUF_CONSTEXPR QosProfile(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QosProfile(const QosProfile& from);
  QosProfile(QosProfile&& from) noexcept
    : QosProfile() {
    *this = ::std::move(from);
  }

  inline QosProfile& operator=(const QosProfile& from) {
    CopyFrom(from);
    return *this;
  }
  inline QosProfile& operator=(QosProfile&& from) noexcept {
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
  static const QosProfile& default_instance() {
    return *internal_default_instance();
  }
  static inline const QosProfile* internal_default_instance() {
    return reinterpret_cast<const QosProfile*>(
               &_QosProfile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(QosProfile& a, QosProfile& b) {
    a.Swap(&b);
  }
  inline void Swap(QosProfile* other) {
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
  void UnsafeArenaSwap(QosProfile* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QosProfile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QosProfile>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const QosProfile& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const QosProfile& from) {
    QosProfile::MergeImpl(*this, from);
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
  void InternalSwap(QosProfile* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.QosProfile";
  }
  protected:
  explicit QosProfile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMpsFieldNumber = 3,
    kHistoryFieldNumber = 1,
    kDepthFieldNumber = 2,
    kReliabilityFieldNumber = 4,
    kDurabilityFieldNumber = 5,
  };
  // optional uint32 mps = 3 [default = 0];
  bool has_mps() const;
  private:
  bool _internal_has_mps() const;
  public:
  void clear_mps();
  uint32_t mps() const;
  void set_mps(uint32_t value);
  private:
  uint32_t _internal_mps() const;
  void _internal_set_mps(uint32_t value);
  public:

  // optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
  bool has_history() const;
  private:
  bool _internal_has_history() const;
  public:
  void clear_history();
  ::apollo::cyber::proto::QosHistoryPolicy history() const;
  void set_history(::apollo::cyber::proto::QosHistoryPolicy value);
  private:
  ::apollo::cyber::proto::QosHistoryPolicy _internal_history() const;
  void _internal_set_history(::apollo::cyber::proto::QosHistoryPolicy value);
  public:

  // optional uint32 depth = 2 [default = 1];
  bool has_depth() const;
  private:
  bool _internal_has_depth() const;
  public:
  void clear_depth();
  uint32_t depth() const;
  void set_depth(uint32_t value);
  private:
  uint32_t _internal_depth() const;
  void _internal_set_depth(uint32_t value);
  public:

  // optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
  bool has_reliability() const;
  private:
  bool _internal_has_reliability() const;
  public:
  void clear_reliability();
  ::apollo::cyber::proto::QosReliabilityPolicy reliability() const;
  void set_reliability(::apollo::cyber::proto::QosReliabilityPolicy value);
  private:
  ::apollo::cyber::proto::QosReliabilityPolicy _internal_reliability() const;
  void _internal_set_reliability(::apollo::cyber::proto::QosReliabilityPolicy value);
  public:

  // optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
  bool has_durability() const;
  private:
  bool _internal_has_durability() const;
  public:
  void clear_durability();
  ::apollo::cyber::proto::QosDurabilityPolicy durability() const;
  void set_durability(::apollo::cyber::proto::QosDurabilityPolicy value);
  private:
  ::apollo::cyber::proto::QosDurabilityPolicy _internal_durability() const;
  void _internal_set_durability(::apollo::cyber::proto::QosDurabilityPolicy value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.QosProfile)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t mps_;
    int history_;
    uint32_t depth_;
    int reliability_;
    int durability_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cyber_2fproto_2fqos_5fprofile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QosProfile

// optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
inline bool QosProfile::_internal_has_history() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool QosProfile::has_history() const {
  return _internal_has_history();
}
inline void QosProfile::clear_history() {
  _impl_.history_ = 1;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::cyber::proto::QosHistoryPolicy QosProfile::_internal_history() const {
  return static_cast< ::apollo::cyber::proto::QosHistoryPolicy >(_impl_.history_);
}
inline ::apollo::cyber::proto::QosHistoryPolicy QosProfile::history() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.history)
  return _internal_history();
}
inline void QosProfile::_internal_set_history(::apollo::cyber::proto::QosHistoryPolicy value) {
  assert(::apollo::cyber::proto::QosHistoryPolicy_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.history_ = value;
}
inline void QosProfile::set_history(::apollo::cyber::proto::QosHistoryPolicy value) {
  _internal_set_history(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.history)
}

// optional uint32 depth = 2 [default = 1];
inline bool QosProfile::_internal_has_depth() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool QosProfile::has_depth() const {
  return _internal_has_depth();
}
inline void QosProfile::clear_depth() {
  _impl_.depth_ = 1u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline uint32_t QosProfile::_internal_depth() const {
  return _impl_.depth_;
}
inline uint32_t QosProfile::depth() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.depth)
  return _internal_depth();
}
inline void QosProfile::_internal_set_depth(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.depth_ = value;
}
inline void QosProfile::set_depth(uint32_t value) {
  _internal_set_depth(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.depth)
}

// optional uint32 mps = 3 [default = 0];
inline bool QosProfile::_internal_has_mps() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool QosProfile::has_mps() const {
  return _internal_has_mps();
}
inline void QosProfile::clear_mps() {
  _impl_.mps_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline uint32_t QosProfile::_internal_mps() const {
  return _impl_.mps_;
}
inline uint32_t QosProfile::mps() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.mps)
  return _internal_mps();
}
inline void QosProfile::_internal_set_mps(uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.mps_ = value;
}
inline void QosProfile::set_mps(uint32_t value) {
  _internal_set_mps(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.mps)
}

// optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
inline bool QosProfile::_internal_has_reliability() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool QosProfile::has_reliability() const {
  return _internal_has_reliability();
}
inline void QosProfile::clear_reliability() {
  _impl_.reliability_ = 1;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::apollo::cyber::proto::QosReliabilityPolicy QosProfile::_internal_reliability() const {
  return static_cast< ::apollo::cyber::proto::QosReliabilityPolicy >(_impl_.reliability_);
}
inline ::apollo::cyber::proto::QosReliabilityPolicy QosProfile::reliability() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.reliability)
  return _internal_reliability();
}
inline void QosProfile::_internal_set_reliability(::apollo::cyber::proto::QosReliabilityPolicy value) {
  assert(::apollo::cyber::proto::QosReliabilityPolicy_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.reliability_ = value;
}
inline void QosProfile::set_reliability(::apollo::cyber::proto::QosReliabilityPolicy value) {
  _internal_set_reliability(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.reliability)
}

// optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
inline bool QosProfile::_internal_has_durability() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool QosProfile::has_durability() const {
  return _internal_has_durability();
}
inline void QosProfile::clear_durability() {
  _impl_.durability_ = 2;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::apollo::cyber::proto::QosDurabilityPolicy QosProfile::_internal_durability() const {
  return static_cast< ::apollo::cyber::proto::QosDurabilityPolicy >(_impl_.durability_);
}
inline ::apollo::cyber::proto::QosDurabilityPolicy QosProfile::durability() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.QosProfile.durability)
  return _internal_durability();
}
inline void QosProfile::_internal_set_durability(::apollo::cyber::proto::QosDurabilityPolicy value) {
  assert(::apollo::cyber::proto::QosDurabilityPolicy_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.durability_ = value;
}
inline void QosProfile::set_durability(::apollo::cyber::proto::QosDurabilityPolicy value) {
  _internal_set_durability(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.QosProfile.durability)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::cyber::proto::QosHistoryPolicy> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::QosHistoryPolicy>() {
  return ::apollo::cyber::proto::QosHistoryPolicy_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::QosReliabilityPolicy> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::QosReliabilityPolicy>() {
  return ::apollo::cyber::proto::QosReliabilityPolicy_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::QosDurabilityPolicy> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::QosDurabilityPolicy>() {
  return ::apollo::cyber::proto::QosDurabilityPolicy_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2fqos_5fprofile_2eproto
