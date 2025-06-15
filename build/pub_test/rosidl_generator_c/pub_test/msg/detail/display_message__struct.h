// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice

#ifndef PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__STRUCT_H_
#define PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DisplayMessage in the package pub_test.
typedef struct pub_test__msg__DisplayMessage
{
  /// Tipo da mensagem: "topic", "video", "img", "sentence"
  rosidl_runtime_c__String type;
  /// Valor correspondente ao tipo (caminho, texto ou nome do tópico)
  rosidl_runtime_c__String value;
} pub_test__msg__DisplayMessage;

// Struct for a sequence of pub_test__msg__DisplayMessage.
typedef struct pub_test__msg__DisplayMessage__Sequence
{
  pub_test__msg__DisplayMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pub_test__msg__DisplayMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__STRUCT_H_
