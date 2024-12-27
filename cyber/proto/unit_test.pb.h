// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/unit_test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2funit_5ftest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2funit_5ftest_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cyber_2fproto_2funit_5ftest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cyber_2fproto_2funit_5ftest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2funit_5ftest_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class Chatter;
struct ChatterDefaultTypeInternal;
extern ChatterDefaultTypeInternal _Chatter_default_instance_;
class ChatterBenchmark;
struct ChatterBenchmarkDefaultTypeInternal;
extern ChatterBenchmarkDefaultTypeInternal _ChatterBenchmark_default_instance_;
class UnitTest;
struct UnitTestDefaultTypeInternal;
extern UnitTestDefaultTypeInternal _UnitTest_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::Chatter* Arena::CreateMaybeMessage<::apollo::cyber::proto::Chatter>(Arena*);
template<> ::apollo::cyber::proto::ChatterBenchmark* Arena::CreateMaybeMessage<::apollo::cyber::proto::ChatterBenchmark>(Arena*);
template<> ::apollo::cyber::proto::UnitTest* Arena::CreateMaybeMessage<::apollo::cyber::proto::UnitTest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

// ===================================================================

class UnitTest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.UnitTest) */ {
 public:
  inline UnitTest() : UnitTest(nullptr) {}
  ~UnitTest() override;
  explicit PROTOBUF_CONSTEXPR UnitTest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UnitTest(const UnitTest& from);
  UnitTest(UnitTest&& from) noexcept
    : UnitTest() {
    *this = ::std::move(from);
  }

  inline UnitTest& operator=(const UnitTest& from) {
    CopyFrom(from);
    return *this;
  }
  inline UnitTest& operator=(UnitTest&& from) noexcept {
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
  static const UnitTest& default_instance() {
    return *internal_default_instance();
  }
  static inline const UnitTest* internal_default_instance() {
    return reinterpret_cast<const UnitTest*>(
               &_UnitTest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UnitTest& a, UnitTest& b) {
    a.Swap(&b);
  }
  inline void Swap(UnitTest* other) {
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
  void UnsafeArenaSwap(UnitTest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UnitTest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UnitTest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UnitTest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UnitTest& from) {
    UnitTest::MergeImpl(*this, from);
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
  void InternalSwap(UnitTest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.UnitTest";
  }
  protected:
  explicit UnitTest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClassNameFieldNumber = 1,
    kCaseNameFieldNumber = 2,
  };
  // optional string class_name = 1;
  bool has_class_name() const;
  private:
  bool _internal_has_class_name() const;
  public:
  void clear_class_name();
  const std::string& class_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_class_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_class_name();
  PROTOBUF_NODISCARD std::string* release_class_name();
  void set_allocated_class_name(std::string* class_name);
  private:
  const std::string& _internal_class_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_class_name(const std::string& value);
  std::string* _internal_mutable_class_name();
  public:

  // optional string case_name = 2;
  bool has_case_name() const;
  private:
  bool _internal_has_case_name() const;
  public:
  void clear_case_name();
  const std::string& case_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_case_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_case_name();
  PROTOBUF_NODISCARD std::string* release_case_name();
  void set_allocated_case_name(std::string* case_name);
  private:
  const std::string& _internal_case_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_case_name(const std::string& value);
  std::string* _internal_mutable_case_name();
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.UnitTest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr class_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr case_name_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cyber_2fproto_2funit_5ftest_2eproto;
};
// -------------------------------------------------------------------

class Chatter final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.Chatter) */ {
 public:
  inline Chatter() : Chatter(nullptr) {}
  ~Chatter() override;
  explicit PROTOBUF_CONSTEXPR Chatter(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Chatter(const Chatter& from);
  Chatter(Chatter&& from) noexcept
    : Chatter() {
    *this = ::std::move(from);
  }

  inline Chatter& operator=(const Chatter& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chatter& operator=(Chatter&& from) noexcept {
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
  static const Chatter& default_instance() {
    return *internal_default_instance();
  }
  static inline const Chatter* internal_default_instance() {
    return reinterpret_cast<const Chatter*>(
               &_Chatter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Chatter& a, Chatter& b) {
    a.Swap(&b);
  }
  inline void Swap(Chatter* other) {
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
  void UnsafeArenaSwap(Chatter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Chatter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Chatter>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Chatter& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Chatter& from) {
    Chatter::MergeImpl(*this, from);
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
  void InternalSwap(Chatter* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.Chatter";
  }
  protected:
  explicit Chatter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 4,
    kTimestampFieldNumber = 1,
    kLidarTimestampFieldNumber = 2,
    kSeqFieldNumber = 3,
  };
  // optional bytes content = 4;
  bool has_content() const;
  private:
  bool _internal_has_content() const;
  public:
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // optional uint64 timestamp = 1;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  uint64_t timestamp() const;
  void set_timestamp(uint64_t value);
  private:
  uint64_t _internal_timestamp() const;
  void _internal_set_timestamp(uint64_t value);
  public:

  // optional uint64 lidar_timestamp = 2;
  bool has_lidar_timestamp() const;
  private:
  bool _internal_has_lidar_timestamp() const;
  public:
  void clear_lidar_timestamp();
  uint64_t lidar_timestamp() const;
  void set_lidar_timestamp(uint64_t value);
  private:
  uint64_t _internal_lidar_timestamp() const;
  void _internal_set_lidar_timestamp(uint64_t value);
  public:

  // optional uint64 seq = 3;
  bool has_seq() const;
  private:
  bool _internal_has_seq() const;
  public:
  void clear_seq();
  uint64_t seq() const;
  void set_seq(uint64_t value);
  private:
  uint64_t _internal_seq() const;
  void _internal_set_seq(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.Chatter)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
    uint64_t timestamp_;
    uint64_t lidar_timestamp_;
    uint64_t seq_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cyber_2fproto_2funit_5ftest_2eproto;
};
// -------------------------------------------------------------------

class ChatterBenchmark final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.ChatterBenchmark) */ {
 public:
  inline ChatterBenchmark() : ChatterBenchmark(nullptr) {}
  ~ChatterBenchmark() override;
  explicit PROTOBUF_CONSTEXPR ChatterBenchmark(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChatterBenchmark(const ChatterBenchmark& from);
  ChatterBenchmark(ChatterBenchmark&& from) noexcept
    : ChatterBenchmark() {
    *this = ::std::move(from);
  }

  inline ChatterBenchmark& operator=(const ChatterBenchmark& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChatterBenchmark& operator=(ChatterBenchmark&& from) noexcept {
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
  static const ChatterBenchmark& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChatterBenchmark* internal_default_instance() {
    return reinterpret_cast<const ChatterBenchmark*>(
               &_ChatterBenchmark_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ChatterBenchmark& a, ChatterBenchmark& b) {
    a.Swap(&b);
  }
  inline void Swap(ChatterBenchmark* other) {
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
  void UnsafeArenaSwap(ChatterBenchmark* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChatterBenchmark* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChatterBenchmark>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChatterBenchmark& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChatterBenchmark& from) {
    ChatterBenchmark::MergeImpl(*this, from);
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
  void InternalSwap(ChatterBenchmark* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.ChatterBenchmark";
  }
  protected:
  explicit ChatterBenchmark(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 3,
    kStampFieldNumber = 1,
    kSeqFieldNumber = 2,
  };
  // optional string content = 3;
  bool has_content() const;
  private:
  bool _internal_has_content() const;
  public:
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // optional uint64 stamp = 1;
  bool has_stamp() const;
  private:
  bool _internal_has_stamp() const;
  public:
  void clear_stamp();
  uint64_t stamp() const;
  void set_stamp(uint64_t value);
  private:
  uint64_t _internal_stamp() const;
  void _internal_set_stamp(uint64_t value);
  public:

  // optional uint64 seq = 2;
  bool has_seq() const;
  private:
  bool _internal_has_seq() const;
  public:
  void clear_seq();
  uint64_t seq() const;
  void set_seq(uint64_t value);
  private:
  uint64_t _internal_seq() const;
  void _internal_set_seq(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.ChatterBenchmark)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
    uint64_t stamp_;
    uint64_t seq_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cyber_2fproto_2funit_5ftest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UnitTest

// optional string class_name = 1;
inline bool UnitTest::_internal_has_class_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool UnitTest::has_class_name() const {
  return _internal_has_class_name();
}
inline void UnitTest::clear_class_name() {
  _impl_.class_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& UnitTest::class_name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.UnitTest.class_name)
  return _internal_class_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UnitTest::set_class_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.class_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.UnitTest.class_name)
}
inline std::string* UnitTest::mutable_class_name() {
  std::string* _s = _internal_mutable_class_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.UnitTest.class_name)
  return _s;
}
inline const std::string& UnitTest::_internal_class_name() const {
  return _impl_.class_name_.Get();
}
inline void UnitTest::_internal_set_class_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.class_name_.Set(value, GetArenaForAllocation());
}
inline std::string* UnitTest::_internal_mutable_class_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.class_name_.Mutable(GetArenaForAllocation());
}
inline std::string* UnitTest::release_class_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.UnitTest.class_name)
  if (!_internal_has_class_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.class_name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.class_name_.IsDefault()) {
    _impl_.class_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void UnitTest::set_allocated_class_name(std::string* class_name) {
  if (class_name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.class_name_.SetAllocated(class_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.class_name_.IsDefault()) {
    _impl_.class_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.UnitTest.class_name)
}

// optional string case_name = 2;
inline bool UnitTest::_internal_has_case_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool UnitTest::has_case_name() const {
  return _internal_has_case_name();
}
inline void UnitTest::clear_case_name() {
  _impl_.case_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& UnitTest::case_name() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.UnitTest.case_name)
  return _internal_case_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void UnitTest::set_case_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.case_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.UnitTest.case_name)
}
inline std::string* UnitTest::mutable_case_name() {
  std::string* _s = _internal_mutable_case_name();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.UnitTest.case_name)
  return _s;
}
inline const std::string& UnitTest::_internal_case_name() const {
  return _impl_.case_name_.Get();
}
inline void UnitTest::_internal_set_case_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.case_name_.Set(value, GetArenaForAllocation());
}
inline std::string* UnitTest::_internal_mutable_case_name() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.case_name_.Mutable(GetArenaForAllocation());
}
inline std::string* UnitTest::release_case_name() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.UnitTest.case_name)
  if (!_internal_has_case_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.case_name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.case_name_.IsDefault()) {
    _impl_.case_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void UnitTest::set_allocated_case_name(std::string* case_name) {
  if (case_name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.case_name_.SetAllocated(case_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.case_name_.IsDefault()) {
    _impl_.case_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.UnitTest.case_name)
}

// -------------------------------------------------------------------

// Chatter

// optional uint64 timestamp = 1;
inline bool Chatter::_internal_has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Chatter::has_timestamp() const {
  return _internal_has_timestamp();
}
inline void Chatter::clear_timestamp() {
  _impl_.timestamp_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline uint64_t Chatter::_internal_timestamp() const {
  return _impl_.timestamp_;
}
inline uint64_t Chatter::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.timestamp)
  return _internal_timestamp();
}
inline void Chatter::_internal_set_timestamp(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.timestamp_ = value;
}
inline void Chatter::set_timestamp(uint64_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.timestamp)
}

// optional uint64 lidar_timestamp = 2;
inline bool Chatter::_internal_has_lidar_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Chatter::has_lidar_timestamp() const {
  return _internal_has_lidar_timestamp();
}
inline void Chatter::clear_lidar_timestamp() {
  _impl_.lidar_timestamp_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline uint64_t Chatter::_internal_lidar_timestamp() const {
  return _impl_.lidar_timestamp_;
}
inline uint64_t Chatter::lidar_timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.lidar_timestamp)
  return _internal_lidar_timestamp();
}
inline void Chatter::_internal_set_lidar_timestamp(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.lidar_timestamp_ = value;
}
inline void Chatter::set_lidar_timestamp(uint64_t value) {
  _internal_set_lidar_timestamp(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.lidar_timestamp)
}

// optional uint64 seq = 3;
inline bool Chatter::_internal_has_seq() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Chatter::has_seq() const {
  return _internal_has_seq();
}
inline void Chatter::clear_seq() {
  _impl_.seq_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline uint64_t Chatter::_internal_seq() const {
  return _impl_.seq_;
}
inline uint64_t Chatter::seq() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.seq)
  return _internal_seq();
}
inline void Chatter::_internal_set_seq(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.seq_ = value;
}
inline void Chatter::set_seq(uint64_t value) {
  _internal_set_seq(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.seq)
}

// optional bytes content = 4;
inline bool Chatter::_internal_has_content() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Chatter::has_content() const {
  return _internal_has_content();
}
inline void Chatter::clear_content() {
  _impl_.content_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Chatter::content() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.Chatter.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Chatter::set_content(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.content_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.Chatter.content)
}
inline std::string* Chatter::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.Chatter.content)
  return _s;
}
inline const std::string& Chatter::_internal_content() const {
  return _impl_.content_.Get();
}
inline void Chatter::_internal_set_content(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.content_.Set(value, GetArenaForAllocation());
}
inline std::string* Chatter::_internal_mutable_content() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.content_.Mutable(GetArenaForAllocation());
}
inline std::string* Chatter::release_content() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.Chatter.content)
  if (!_internal_has_content()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.content_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Chatter::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.content_.SetAllocated(content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.Chatter.content)
}

// -------------------------------------------------------------------

// ChatterBenchmark

// optional uint64 stamp = 1;
inline bool ChatterBenchmark::_internal_has_stamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ChatterBenchmark::has_stamp() const {
  return _internal_has_stamp();
}
inline void ChatterBenchmark::clear_stamp() {
  _impl_.stamp_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline uint64_t ChatterBenchmark::_internal_stamp() const {
  return _impl_.stamp_;
}
inline uint64_t ChatterBenchmark::stamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChatterBenchmark.stamp)
  return _internal_stamp();
}
inline void ChatterBenchmark::_internal_set_stamp(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.stamp_ = value;
}
inline void ChatterBenchmark::set_stamp(uint64_t value) {
  _internal_set_stamp(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChatterBenchmark.stamp)
}

// optional uint64 seq = 2;
inline bool ChatterBenchmark::_internal_has_seq() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ChatterBenchmark::has_seq() const {
  return _internal_has_seq();
}
inline void ChatterBenchmark::clear_seq() {
  _impl_.seq_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline uint64_t ChatterBenchmark::_internal_seq() const {
  return _impl_.seq_;
}
inline uint64_t ChatterBenchmark::seq() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChatterBenchmark.seq)
  return _internal_seq();
}
inline void ChatterBenchmark::_internal_set_seq(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.seq_ = value;
}
inline void ChatterBenchmark::set_seq(uint64_t value) {
  _internal_set_seq(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChatterBenchmark.seq)
}

// optional string content = 3;
inline bool ChatterBenchmark::_internal_has_content() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ChatterBenchmark::has_content() const {
  return _internal_has_content();
}
inline void ChatterBenchmark::clear_content() {
  _impl_.content_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChatterBenchmark::content() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChatterBenchmark.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ChatterBenchmark::set_content(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.content_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChatterBenchmark.content)
}
inline std::string* ChatterBenchmark::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ChatterBenchmark.content)
  return _s;
}
inline const std::string& ChatterBenchmark::_internal_content() const {
  return _impl_.content_.Get();
}
inline void ChatterBenchmark::_internal_set_content(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.content_.Set(value, GetArenaForAllocation());
}
inline std::string* ChatterBenchmark::_internal_mutable_content() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.content_.Mutable(GetArenaForAllocation());
}
inline std::string* ChatterBenchmark::release_content() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.ChatterBenchmark.content)
  if (!_internal_has_content()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.content_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ChatterBenchmark::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.content_.SetAllocated(content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.ChatterBenchmark.content)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2funit_5ftest_2eproto