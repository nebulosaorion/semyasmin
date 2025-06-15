// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pub_test/msg/detail/display_message__rosidl_typesupport_introspection_c.h"
#include "pub_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pub_test/msg/detail/display_message__functions.h"
#include "pub_test/msg/detail/display_message__struct.h"


// Include directives for member types
// Member `type`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pub_test__msg__DisplayMessage__init(message_memory);
}

void pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_fini_function(void * message_memory)
{
  pub_test__msg__DisplayMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pub_test__msg__DisplayMessage, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pub_test__msg__DisplayMessage, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_members = {
  "pub_test__msg",  // message namespace
  "DisplayMessage",  // message name
  2,  // number of fields
  sizeof(pub_test__msg__DisplayMessage),
  pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_member_array,  // message members
  pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_type_support_handle = {
  0,
  &pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pub_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pub_test, msg, DisplayMessage)() {
  if (!pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_type_support_handle.typesupport_identifier) {
    pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pub_test__msg__DisplayMessage__rosidl_typesupport_introspection_c__DisplayMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
