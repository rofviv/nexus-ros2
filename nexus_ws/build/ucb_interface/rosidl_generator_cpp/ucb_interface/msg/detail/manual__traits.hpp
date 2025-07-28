// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ucb_interface:msg/Manual.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__MANUAL__TRAITS_HPP_
#define UCB_INTERFACE__MSG__DETAIL__MANUAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ucb_interface/msg/detail/manual__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ucb_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Manual & msg,
  std::ostream & out)
{
  out << "{";
  // member: puerta
  {
    out << "puerta: ";
    rosidl_generator_traits::value_to_yaml(msg.puerta, out);
    out << ", ";
  }

  // member: reversa
  {
    out << "reversa: ";
    rosidl_generator_traits::value_to_yaml(msg.reversa, out);
    out << ", ";
  }

  // member: freno
  {
    out << "freno: ";
    rosidl_generator_traits::value_to_yaml(msg.freno, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Manual & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: puerta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "puerta: ";
    rosidl_generator_traits::value_to_yaml(msg.puerta, out);
    out << "\n";
  }

  // member: reversa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reversa: ";
    rosidl_generator_traits::value_to_yaml(msg.reversa, out);
    out << "\n";
  }

  // member: freno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freno: ";
    rosidl_generator_traits::value_to_yaml(msg.freno, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Manual & msg, bool use_flow_style = false)
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

}  // namespace ucb_interface

namespace rosidl_generator_traits
{

[[deprecated("use ucb_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ucb_interface::msg::Manual & msg,
  std::ostream & out, size_t indentation = 0)
{
  ucb_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ucb_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ucb_interface::msg::Manual & msg)
{
  return ucb_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ucb_interface::msg::Manual>()
{
  return "ucb_interface::msg::Manual";
}

template<>
inline const char * name<ucb_interface::msg::Manual>()
{
  return "ucb_interface/msg/Manual";
}

template<>
struct has_fixed_size<ucb_interface::msg::Manual>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ucb_interface::msg::Manual>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ucb_interface::msg::Manual>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UCB_INTERFACE__MSG__DETAIL__MANUAL__TRAITS_HPP_
