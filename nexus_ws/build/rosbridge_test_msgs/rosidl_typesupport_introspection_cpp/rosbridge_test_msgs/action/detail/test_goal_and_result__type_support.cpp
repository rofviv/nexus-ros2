// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosbridge_test_msgs:action/TestGoalAndResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_Goal(_init);
}

void TestGoalAndResult_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_Goal *>(message_memory);
  typed_message->~TestGoalAndResult_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_Goal_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_Goal, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_Goal_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_Goal",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_Goal),
  TestGoalAndResult_Goal_message_member_array,  // message members
  TestGoalAndResult_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_Goal>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_Goal)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_Result(_init);
}

void TestGoalAndResult_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_Result *>(message_memory);
  typed_message->~TestGoalAndResult_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_Result_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_Result",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_Result),
  TestGoalAndResult_Result_message_member_array,  // message members
  TestGoalAndResult_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_Result>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_Result)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_Feedback(_init);
}

void TestGoalAndResult_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_Feedback *>(message_memory);
  typed_message->~TestGoalAndResult_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_Feedback_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_Feedback, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_Feedback_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_Feedback",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_Feedback),
  TestGoalAndResult_Feedback_message_member_array,  // message members
  TestGoalAndResult_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_Feedback>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_Feedback)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request(_init);
}

void TestGoalAndResult_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request *>(message_memory);
  typed_message->~TestGoalAndResult_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_SendGoal_Request_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request),
  TestGoalAndResult_SendGoal_Request_message_member_array,  // message members
  TestGoalAndResult_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_SendGoal_Request)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response(_init);
}

void TestGoalAndResult_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response *>(message_memory);
  typed_message->~TestGoalAndResult_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_SendGoal_Response_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response),
  TestGoalAndResult_SendGoal_Response_message_member_array,  // message members
  TestGoalAndResult_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_SendGoal_Response)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TestGoalAndResult_SendGoal_service_members = {
  "rosbridge_test_msgs::action",  // service namespace
  "TestGoalAndResult_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TestGoalAndResult_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosbridge_test_msgs::action::TestGoalAndResult_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Request(_init);
}

void TestGoalAndResult_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Request *>(message_memory);
  typed_message->~TestGoalAndResult_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_GetResult_Request_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Request),
  TestGoalAndResult_GetResult_Request_message_member_array,  // message members
  TestGoalAndResult_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Request>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_GetResult_Request)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response(_init);
}

void TestGoalAndResult_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response *>(message_memory);
  typed_message->~TestGoalAndResult_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_GetResult_Response_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response),
  TestGoalAndResult_GetResult_Response_message_member_array,  // message members
  TestGoalAndResult_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_GetResult_Response)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TestGoalAndResult_GetResult_service_members = {
  "rosbridge_test_msgs::action",  // service namespace
  "TestGoalAndResult_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TestGoalAndResult_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::rosbridge_test_msgs::action::TestGoalAndResult_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosbridge_test_msgs/action/detail/test_goal_and_result__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosbridge_test_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TestGoalAndResult_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosbridge_test_msgs::action::TestGoalAndResult_FeedbackMessage(_init);
}

void TestGoalAndResult_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosbridge_test_msgs::action::TestGoalAndResult_FeedbackMessage *>(message_memory);
  typed_message->~TestGoalAndResult_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestGoalAndResult_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbridge_test_msgs::action::TestGoalAndResult_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestGoalAndResult_FeedbackMessage_message_members = {
  "rosbridge_test_msgs::action",  // message namespace
  "TestGoalAndResult_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(rosbridge_test_msgs::action::TestGoalAndResult_FeedbackMessage),
  TestGoalAndResult_FeedbackMessage_message_member_array,  // message members
  TestGoalAndResult_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TestGoalAndResult_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestGoalAndResult_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestGoalAndResult_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace rosbridge_test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosbridge_test_msgs::action::TestGoalAndResult_FeedbackMessage>()
{
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosbridge_test_msgs, action, TestGoalAndResult_FeedbackMessage)() {
  return &::rosbridge_test_msgs::action::rosidl_typesupport_introspection_cpp::TestGoalAndResult_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
