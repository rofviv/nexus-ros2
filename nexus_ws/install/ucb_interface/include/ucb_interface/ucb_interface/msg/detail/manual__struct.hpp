// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ucb_interface:msg/Manual.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__MANUAL__STRUCT_HPP_
#define UCB_INTERFACE__MSG__DETAIL__MANUAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ucb_interface__msg__Manual __attribute__((deprecated))
#else
# define DEPRECATED__ucb_interface__msg__Manual __declspec(deprecated)
#endif

namespace ucb_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Manual_
{
  using Type = Manual_<ContainerAllocator>;

  explicit Manual_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->puerta = false;
      this->reversa = false;
      this->freno = false;
    }
  }

  explicit Manual_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->puerta = false;
      this->reversa = false;
      this->freno = false;
    }
  }

  // field types and members
  using _puerta_type =
    bool;
  _puerta_type puerta;
  using _reversa_type =
    bool;
  _reversa_type reversa;
  using _freno_type =
    bool;
  _freno_type freno;

  // setters for named parameter idiom
  Type & set__puerta(
    const bool & _arg)
  {
    this->puerta = _arg;
    return *this;
  }
  Type & set__reversa(
    const bool & _arg)
  {
    this->reversa = _arg;
    return *this;
  }
  Type & set__freno(
    const bool & _arg)
  {
    this->freno = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ucb_interface::msg::Manual_<ContainerAllocator> *;
  using ConstRawPtr =
    const ucb_interface::msg::Manual_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ucb_interface::msg::Manual_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ucb_interface::msg::Manual_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Manual_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Manual_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Manual_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Manual_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ucb_interface::msg::Manual_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ucb_interface::msg::Manual_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ucb_interface__msg__Manual
    std::shared_ptr<ucb_interface::msg::Manual_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ucb_interface__msg__Manual
    std::shared_ptr<ucb_interface::msg::Manual_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Manual_ & other) const
  {
    if (this->puerta != other.puerta) {
      return false;
    }
    if (this->reversa != other.reversa) {
      return false;
    }
    if (this->freno != other.freno) {
      return false;
    }
    return true;
  }
  bool operator!=(const Manual_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Manual_

// alias to use template instance with default allocator
using Manual =
  ucb_interface::msg::Manual_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__MANUAL__STRUCT_HPP_
