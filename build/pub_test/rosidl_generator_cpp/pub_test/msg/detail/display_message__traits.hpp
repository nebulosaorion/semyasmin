// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice

#ifndef PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__TRAITS_HPP_
#define PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pub_test/msg/detail/display_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pub_test
{

namespace msg
{

inline void to_flow_style_yaml(
  const DisplayMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DisplayMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DisplayMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pub_test

namespace rosidl_generator_traits
{

[[deprecated("use pub_test::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pub_test::msg::DisplayMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pub_test::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pub_test::msg::to_yaml() instead")]]
inline std::string to_yaml(const pub_test::msg::DisplayMessage & msg)
{
  return pub_test::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pub_test::msg::DisplayMessage>()
{
  return "pub_test::msg::DisplayMessage";
}

template<>
inline const char * name<pub_test::msg::DisplayMessage>()
{
  return "pub_test/msg/DisplayMessage";
}

template<>
struct has_fixed_size<pub_test::msg::DisplayMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pub_test::msg::DisplayMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pub_test::msg::DisplayMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__TRAITS_HPP_
