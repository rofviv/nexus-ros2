// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interface:msg/Manual.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__MANUAL__BUILDER_HPP_
#define UCB_INTERFACE__MSG__DETAIL__MANUAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interface/msg/detail/manual__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interface
{

namespace msg
{

namespace builder
{

class Init_Manual_freno
{
public:
  explicit Init_Manual_freno(::ucb_interface::msg::Manual & msg)
  : msg_(msg)
  {}
  ::ucb_interface::msg::Manual freno(::ucb_interface::msg::Manual::_freno_type arg)
  {
    msg_.freno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::msg::Manual msg_;
};

class Init_Manual_reversa
{
public:
  explicit Init_Manual_reversa(::ucb_interface::msg::Manual & msg)
  : msg_(msg)
  {}
  Init_Manual_freno reversa(::ucb_interface::msg::Manual::_reversa_type arg)
  {
    msg_.reversa = std::move(arg);
    return Init_Manual_freno(msg_);
  }

private:
  ::ucb_interface::msg::Manual msg_;
};

class Init_Manual_puerta
{
public:
  Init_Manual_puerta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Manual_reversa puerta(::ucb_interface::msg::Manual::_puerta_type arg)
  {
    msg_.puerta = std::move(arg);
    return Init_Manual_reversa(msg_);
  }

private:
  ::ucb_interface::msg::Manual msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::msg::Manual>()
{
  return ucb_interface::msg::builder::Init_Manual_puerta();
}

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__MANUAL__BUILDER_HPP_
