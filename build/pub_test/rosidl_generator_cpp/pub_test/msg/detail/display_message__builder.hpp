// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pub_test:msg/DisplayMessage.idl
// generated code does not contain a copyright notice

#ifndef PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__BUILDER_HPP_
#define PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pub_test/msg/detail/display_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pub_test
{

namespace msg
{

namespace builder
{

class Init_DisplayMessage_value
{
public:
  explicit Init_DisplayMessage_value(::pub_test::msg::DisplayMessage & msg)
  : msg_(msg)
  {}
  ::pub_test::msg::DisplayMessage value(::pub_test::msg::DisplayMessage::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pub_test::msg::DisplayMessage msg_;
};

class Init_DisplayMessage_type
{
public:
  Init_DisplayMessage_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DisplayMessage_value type(::pub_test::msg::DisplayMessage::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DisplayMessage_value(msg_);
  }

private:
  ::pub_test::msg::DisplayMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pub_test::msg::DisplayMessage>()
{
  return pub_test::msg::builder::Init_DisplayMessage_type();
}

}  // namespace pub_test

#endif  // PUB_TEST__MSG__DETAIL__DISPLAY_MESSAGE__BUILDER_HPP_
