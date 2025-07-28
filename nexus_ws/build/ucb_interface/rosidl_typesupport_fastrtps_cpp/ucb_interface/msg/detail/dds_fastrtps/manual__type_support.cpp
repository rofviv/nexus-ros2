// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ucb_interface:msg/Manual.idl
// generated code does not contain a copyright notice
#include "ucb_interface/msg/detail/manual__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ucb_interface/msg/detail/manual__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ucb_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
cdr_serialize(
  const ucb_interface::msg::Manual & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: puerta
  cdr << (ros_message.puerta ? true : false);
  // Member: reversa
  cdr << (ros_message.reversa ? true : false);
  // Member: freno
  cdr << (ros_message.freno ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ucb_interface::msg::Manual & ros_message)
{
  // Member: puerta
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.puerta = tmp ? true : false;
  }

  // Member: reversa
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reversa = tmp ? true : false;
  }

  // Member: freno
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.freno = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
get_serialized_size(
  const ucb_interface::msg::Manual & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: puerta
  {
    size_t item_size = sizeof(ros_message.puerta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reversa
  {
    size_t item_size = sizeof(ros_message.reversa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: freno
  {
    size_t item_size = sizeof(ros_message.freno);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ucb_interface
max_serialized_size_Manual(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: puerta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reversa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: freno
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ucb_interface::msg::Manual;
    is_plain =
      (
      offsetof(DataType, freno) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Manual__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ucb_interface::msg::Manual *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Manual__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ucb_interface::msg::Manual *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Manual__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ucb_interface::msg::Manual *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Manual__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Manual(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Manual__callbacks = {
  "ucb_interface::msg",
  "Manual",
  _Manual__cdr_serialize,
  _Manual__cdr_deserialize,
  _Manual__get_serialized_size,
  _Manual__max_serialized_size
};

static rosidl_message_type_support_t _Manual__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Manual__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ucb_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ucb_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<ucb_interface::msg::Manual>()
{
  return &ucb_interface::msg::typesupport_fastrtps_cpp::_Manual__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ucb_interface, msg, Manual)() {
  return &ucb_interface::msg::typesupport_fastrtps_cpp::_Manual__handle;
}

#ifdef __cplusplus
}
#endif
