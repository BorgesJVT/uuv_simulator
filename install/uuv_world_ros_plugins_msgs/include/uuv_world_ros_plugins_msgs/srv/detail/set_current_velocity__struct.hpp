// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentVelocity.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__STRUCT_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrentVelocity_Request_
{
  using Type = SetCurrentVelocity_Request_<ContainerAllocator>;

  explicit SetCurrentVelocity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->horizontal_angle = 0.0;
      this->vertical_angle = 0.0;
    }
  }

  explicit SetCurrentVelocity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0;
      this->horizontal_angle = 0.0;
      this->vertical_angle = 0.0;
    }
  }

  // field types and members
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _horizontal_angle_type =
    double;
  _horizontal_angle_type horizontal_angle;
  using _vertical_angle_type =
    double;
  _vertical_angle_type vertical_angle;

  // setters for named parameter idiom
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__horizontal_angle(
    const double & _arg)
  {
    this->horizontal_angle = _arg;
    return *this;
  }
  Type & set__vertical_angle(
    const double & _arg)
  {
    this->vertical_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrentVelocity_Request_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->horizontal_angle != other.horizontal_angle) {
      return false;
    }
    if (this->vertical_angle != other.vertical_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrentVelocity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrentVelocity_Request_

// alias to use template instance with default allocator
using SetCurrentVelocity_Request =
  uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrentVelocity_Response_
{
  using Type = SetCurrentVelocity_Response_<ContainerAllocator>;

  explicit SetCurrentVelocity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCurrentVelocity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentVelocity_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrentVelocity_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrentVelocity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrentVelocity_Response_

// alias to use template instance with default allocator
using SetCurrentVelocity_Response =
  uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

struct SetCurrentVelocity
{
  using Request = uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Request;
  using Response = uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity_Response;
};

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_VELOCITY__STRUCT_HPP_
