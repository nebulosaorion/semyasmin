// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice

#ifndef PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__FUNCTIONS_H_
#define PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pub_test/msg/rosidl_generator_c__visibility_control.h"

#include "pub_test/msg/detail/display_message__struct.h"

/// Initialize msg/DisplayMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pub_test__msg__DisplayMessage
 * )) before or use
 * pub_test__msg__DisplayMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
bool
pub_test__msg__DisplayMessage__init(pub_test__msg__DisplayMessage * msg);

/// Finalize msg/DisplayMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
void
pub_test__msg__DisplayMessage__fini(pub_test__msg__DisplayMessage * msg);

/// Create msg/DisplayMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pub_test__msg__DisplayMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
pub_test__msg__DisplayMessage *
pub_test__msg__DisplayMessage__create();

/// Destroy msg/DisplayMessage message.
/**
 * It calls
 * pub_test__msg__DisplayMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
void
pub_test__msg__DisplayMessage__destroy(pub_test__msg__DisplayMessage * msg);

/// Check for msg/DisplayMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
bool
pub_test__msg__DisplayMessage__are_equal(const pub_test__msg__DisplayMessage * lhs, const pub_test__msg__DisplayMessage * rhs);

/// Copy a msg/DisplayMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
bool
pub_test__msg__DisplayMessage__copy(
  const pub_test__msg__DisplayMessage * input,
  pub_test__msg__DisplayMessage * output);

/// Initialize array of msg/DisplayMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * pub_test__msg__DisplayMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
bool
pub_test__msg__DisplayMessage__Sequence__init(pub_test__msg__DisplayMessage__Sequence * array, size_t size);

/// Finalize array of msg/DisplayMessage messages.
/**
 * It calls
 * pub_test__msg__DisplayMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
void
pub_test__msg__DisplayMessage__Sequence__fini(pub_test__msg__DisplayMessage__Sequence * array);

/// Create array of msg/DisplayMessage messages.
/**
 * It allocates the memory for the array and calls
 * pub_test__msg__DisplayMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
pub_test__msg__DisplayMessage__Sequence *
pub_test__msg__DisplayMessage__Sequence__create(size_t size);

/// Destroy array of msg/DisplayMessage messages.
/**
 * It calls
 * pub_test__msg__DisplayMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
void
pub_test__msg__DisplayMessage__Sequence__destroy(pub_test__msg__DisplayMessage__Sequence * array);

/// Check for msg/DisplayMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
bool
pub_test__msg__DisplayMessage__Sequence__are_equal(const pub_test__msg__DisplayMessage__Sequence * lhs, const pub_test__msg__DisplayMessage__Sequence * rhs);

/// Copy an array of msg/DisplayMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pub_test
bool
pub_test__msg__DisplayMessage__Sequence__copy(
  const pub_test__msg__DisplayMessage__Sequence * input,
  pub_test__msg__DisplayMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__FUNCTIONS_H_
