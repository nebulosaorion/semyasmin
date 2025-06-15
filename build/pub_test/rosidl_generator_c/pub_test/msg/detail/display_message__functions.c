// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice
#include "pub_test/msg/detail/display_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
pub_test__msg__DisplayMessage__init(pub_test__msg__DisplayMessage * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    pub_test__msg__DisplayMessage__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    pub_test__msg__DisplayMessage__fini(msg);
    return false;
  }
  return true;
}

void
pub_test__msg__DisplayMessage__fini(pub_test__msg__DisplayMessage * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
pub_test__msg__DisplayMessage__are_equal(const pub_test__msg__DisplayMessage * lhs, const pub_test__msg__DisplayMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
pub_test__msg__DisplayMessage__copy(
  const pub_test__msg__DisplayMessage * input,
  pub_test__msg__DisplayMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

pub_test__msg__DisplayMessage *
pub_test__msg__DisplayMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pub_test__msg__DisplayMessage * msg = (pub_test__msg__DisplayMessage *)allocator.allocate(sizeof(pub_test__msg__DisplayMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pub_test__msg__DisplayMessage));
  bool success = pub_test__msg__DisplayMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pub_test__msg__DisplayMessage__destroy(pub_test__msg__DisplayMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pub_test__msg__DisplayMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pub_test__msg__DisplayMessage__Sequence__init(pub_test__msg__DisplayMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pub_test__msg__DisplayMessage * data = NULL;

  if (size) {
    data = (pub_test__msg__DisplayMessage *)allocator.zero_allocate(size, sizeof(pub_test__msg__DisplayMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pub_test__msg__DisplayMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pub_test__msg__DisplayMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pub_test__msg__DisplayMessage__Sequence__fini(pub_test__msg__DisplayMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pub_test__msg__DisplayMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pub_test__msg__DisplayMessage__Sequence *
pub_test__msg__DisplayMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pub_test__msg__DisplayMessage__Sequence * array = (pub_test__msg__DisplayMessage__Sequence *)allocator.allocate(sizeof(pub_test__msg__DisplayMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pub_test__msg__DisplayMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pub_test__msg__DisplayMessage__Sequence__destroy(pub_test__msg__DisplayMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pub_test__msg__DisplayMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pub_test__msg__DisplayMessage__Sequence__are_equal(const pub_test__msg__DisplayMessage__Sequence * lhs, const pub_test__msg__DisplayMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pub_test__msg__DisplayMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pub_test__msg__DisplayMessage__Sequence__copy(
  const pub_test__msg__DisplayMessage__Sequence * input,
  pub_test__msg__DisplayMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pub_test__msg__DisplayMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pub_test__msg__DisplayMessage * data =
      (pub_test__msg__DisplayMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pub_test__msg__DisplayMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pub_test__msg__DisplayMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pub_test__msg__DisplayMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
