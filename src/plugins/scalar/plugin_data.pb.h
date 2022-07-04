// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: plugins/scalar/plugin_data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_plugins_2fscalar_2fplugin_5fdata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_plugins_2fscalar_2fplugin_5fdata_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_plugins_2fscalar_2fplugin_5fdata_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_plugins_2fscalar_2fplugin_5fdata_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_plugins_2fscalar_2fplugin_5fdata_2eproto;
namespace tensorboard {
class ScalarPluginData;
struct ScalarPluginDataDefaultTypeInternal;
extern ScalarPluginDataDefaultTypeInternal _ScalarPluginData_default_instance_;
}  // namespace tensorboard
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorboard::ScalarPluginData* Arena::CreateMaybeMessage<::tensorboard::ScalarPluginData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorboard {

// ===================================================================

class ScalarPluginData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorboard.ScalarPluginData) */ {
 public:
  inline ScalarPluginData() : ScalarPluginData(nullptr) {}
  ~ScalarPluginData() override;
  explicit constexpr ScalarPluginData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ScalarPluginData(const ScalarPluginData& from);
  ScalarPluginData(ScalarPluginData&& from) noexcept
    : ScalarPluginData() {
    *this = ::std::move(from);
  }

  inline ScalarPluginData& operator=(const ScalarPluginData& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScalarPluginData& operator=(ScalarPluginData&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ScalarPluginData& default_instance() {
    return *internal_default_instance();
  }
  static inline const ScalarPluginData* internal_default_instance() {
    return reinterpret_cast<const ScalarPluginData*>(
               &_ScalarPluginData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ScalarPluginData& a, ScalarPluginData& b) {
    a.Swap(&b);
  }
  inline void Swap(ScalarPluginData* other) {
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
  void UnsafeArenaSwap(ScalarPluginData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ScalarPluginData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ScalarPluginData>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ScalarPluginData& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ScalarPluginData& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ScalarPluginData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorboard.ScalarPluginData";
  }
  protected:
  explicit ScalarPluginData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 1,
  };
  // int32 version = 1;
  void clear_version();
  int32_t version() const;
  void set_version(int32_t value);
  private:
  int32_t _internal_version() const;
  void _internal_set_version(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:tensorboard.ScalarPluginData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int32_t version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_plugins_2fscalar_2fplugin_5fdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScalarPluginData

// int32 version = 1;
inline void ScalarPluginData::clear_version() {
  version_ = 0;
}
inline int32_t ScalarPluginData::_internal_version() const {
  return version_;
}
inline int32_t ScalarPluginData::version() const {
  // @@protoc_insertion_point(field_get:tensorboard.ScalarPluginData.version)
  return _internal_version();
}
inline void ScalarPluginData::_internal_set_version(int32_t value) {
  
  version_ = value;
}
inline void ScalarPluginData::set_version(int32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:tensorboard.ScalarPluginData.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorboard

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_plugins_2fscalar_2fplugin_5fdata_2eproto