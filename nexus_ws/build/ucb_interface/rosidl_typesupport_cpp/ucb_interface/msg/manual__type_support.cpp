// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ucb_interface:msg/Manual.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ucb_interface/msg/detail/manual__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ucb_interface
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Manual_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Manual_type_support_ids_t;

static const _Manual_type_support_ids_t _Manual_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Manual_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Manual_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Manual_type_support_symbol_names_t _Manual_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ucb_interface, msg, Manual)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ucb_interface, msg, Manual)),
  }
};

typedef struct _Manual_type_support_data_t
{
  void * data[2];
} _Manual_type_support_data_t;

static _Manual_type_support_data_t _Manual_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Manual_message_typesupport_map = {
  2,
  "ucb_interface",
  &_Manual_message_typesupport_ids.typesupport_identifier[0],
  &_Manual_message_typesupport_symbol_names.symbol_name[0],
  &_Manual_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Manual_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Manual_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace ucb_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ucb_interface::msg::Manual>()
{
  return &::ucb_interface::msg::rosidl_typesupport_cpp::Manual_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ucb_interface, msg, Manual)() {
  return get_message_type_support_handle<ucb_interface::msg::Manual>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
