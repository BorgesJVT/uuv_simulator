// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__STRUCT_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrentDirection_Request_
{
  using Type = SetCurrentDirection_Request_<ContainerAllocator>;

  explicit SetCurrentDirection_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
    }
  }

  explicit SetCurrentDirection_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0;
    }
  }

  // field types and members
  using _angle_type =
    double;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrentDirection_Request_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrentDirection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrentDirection_Request_

// alias to use template instance with default allocator
using SetCurrentDirection_Request =
  uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrentDirection_Response_
{
  using Type = SetCurrentDirection_Response_<ContainerAllocator>;

  explicit SetCurrentDirection_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCurrentDirection_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrentDirection_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrentDirection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrentDirection_Response_

// alias to use template instance with default allocator
using SetCurrentDirection_Response =
  uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

struct SetCurrentDirection
{
  using Request = uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request;
  using Response = uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response;
};

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__STRUCT_HPP_
