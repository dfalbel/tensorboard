// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: types.proto

#include "types.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace tensorboard {
}  // namespace tensorboard
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_types_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_types_2eproto = nullptr;
const uint32_t TableStruct_types_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_types_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013types.proto\022\013tensorboard*\252\006\n\010DataType\022"
  "\016\n\nDT_INVALID\020\000\022\014\n\010DT_FLOAT\020\001\022\r\n\tDT_DOUB"
  "LE\020\002\022\014\n\010DT_INT32\020\003\022\014\n\010DT_UINT8\020\004\022\014\n\010DT_I"
  "NT16\020\005\022\013\n\007DT_INT8\020\006\022\r\n\tDT_STRING\020\007\022\020\n\014DT"
  "_COMPLEX64\020\010\022\014\n\010DT_INT64\020\t\022\013\n\007DT_BOOL\020\n\022"
  "\014\n\010DT_QINT8\020\013\022\r\n\tDT_QUINT8\020\014\022\r\n\tDT_QINT3"
  "2\020\r\022\017\n\013DT_BFLOAT16\020\016\022\r\n\tDT_QINT16\020\017\022\016\n\nD"
  "T_QUINT16\020\020\022\r\n\tDT_UINT16\020\021\022\021\n\rDT_COMPLEX"
  "128\020\022\022\013\n\007DT_HALF\020\023\022\017\n\013DT_RESOURCE\020\024\022\016\n\nD"
  "T_VARIANT\020\025\022\r\n\tDT_UINT32\020\026\022\r\n\tDT_UINT64\020"
  "\027\022\020\n\014DT_FLOAT_REF\020e\022\021\n\rDT_DOUBLE_REF\020f\022\020"
  "\n\014DT_INT32_REF\020g\022\020\n\014DT_UINT8_REF\020h\022\020\n\014DT"
  "_INT16_REF\020i\022\017\n\013DT_INT8_REF\020j\022\021\n\rDT_STRI"
  "NG_REF\020k\022\024\n\020DT_COMPLEX64_REF\020l\022\020\n\014DT_INT"
  "64_REF\020m\022\017\n\013DT_BOOL_REF\020n\022\020\n\014DT_QINT8_RE"
  "F\020o\022\021\n\rDT_QUINT8_REF\020p\022\021\n\rDT_QINT32_REF\020"
  "q\022\023\n\017DT_BFLOAT16_REF\020r\022\021\n\rDT_QINT16_REF\020"
  "s\022\022\n\016DT_QUINT16_REF\020t\022\021\n\rDT_UINT16_REF\020u"
  "\022\025\n\021DT_COMPLEX128_REF\020v\022\017\n\013DT_HALF_REF\020w"
  "\022\023\n\017DT_RESOURCE_REF\020x\022\022\n\016DT_VARIANT_REF\020"
  "y\022\021\n\rDT_UINT32_REF\020z\022\021\n\rDT_UINT64_REF\020{B"
  "z\n\030org.tensorflow.frameworkB\013TypesProtos"
  "P\001ZLgithub.com/tensorflow/tensorflow/ten"
  "sorflow/go/core/framework/types_go_proto"
  "\370\001\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_types_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_types_2eproto = {
  false, false, 971, descriptor_table_protodef_types_2eproto, "types.proto", 
  &descriptor_table_types_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_types_2eproto::offsets,
  nullptr, file_level_enum_descriptors_types_2eproto, file_level_service_descriptors_types_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_types_2eproto_getter() {
  return &descriptor_table_types_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_types_2eproto(&descriptor_table_types_2eproto);
namespace tensorboard {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_types_2eproto);
  return file_level_enum_descriptors_types_2eproto[0];
}
bool DataType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorboard
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>