// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi_msgs:srv/Interfaces.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI_MSGS__SRV__DETAIL__INTERFACES__BUILDER_HPP_
#define ROSAPI_MSGS__SRV__DETAIL__INTERFACES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosapi_msgs/srv/detail/interfaces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosapi_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Interfaces_Request>()
{
  return ::rosapi_msgs::srv::Interfaces_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi_msgs


namespace rosapi_msgs
{

namespace srv
{

namespace builder
{

class Init_Interfaces_Response_interfaces
{
public:
  Init_Interfaces_Response_interfaces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi_msgs::srv::Interfaces_Response interfaces(::rosapi_msgs::srv::Interfaces_Response::_interfaces_type arg)
  {
    msg_.interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi_msgs::srv::Interfaces_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi_msgs::srv::Interfaces_Response>()
{
  return rosapi_msgs::srv::builder::Init_Interfaces_Response_interfaces();
}

}  // namespace rosapi_msgs

#endif  // ROSAPI_MSGS__SRV__DETAIL__INTERFACES__BUILDER_HPP_
