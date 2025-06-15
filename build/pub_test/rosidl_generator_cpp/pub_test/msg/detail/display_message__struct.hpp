// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice

#ifndef PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__STRUCT_HPP_
#define PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pub_test__msg__DisplayMessage __attribute__((deprecated))
#else
# define DEPRECATED__pub_test__msg__DisplayMessage __declspec(deprecated)
#endif

namespace pub_test
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisplayMessage_
{
  using Type = DisplayMessage_<ContainerAllocator>;

  explicit DisplayMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->value = "";
    }
  }

  explicit DisplayMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->value = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pub_test::msg::DisplayMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pub_test::msg::DisplayMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pub_test::msg::DisplayMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pub_test::msg::DisplayMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pub_test__msg__DisplayMessage
    std::shared_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pub_test__msg__DisplayMessage
    std::shared_ptr<pub_test::msg::DisplayMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisplayMessage_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisplayMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisplayMessage_

// alias to use template instance with default allocator
using DisplayMessage =
  pub_test::msg::DisplayMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pub_test

#endif  // PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__STRUCT_HPP_
