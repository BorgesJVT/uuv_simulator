// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetUseGlobalCurrentVel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetUseGlobalCurrentVel_Request_
{
  using Type = SetUseGlobalCurrentVel_Request_<ContainerAllocator>;

  explicit SetUseGlobalCurrentVel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_global = false;
    }
  }

  explicit SetUseGlobalCurrentVel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_global = false;
    }
  }

  // field types and members
  using _use_global_type =
    bool;
  _use_global_type use_global;

  // setters for named parameter idiom
  Type & set__use_global(
    const bool & _arg)
  {
    this->use_global = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetUseGlobalCurrentVel_Request_ & other) const
  {
    if (this->use_global != other.use_global) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetUseGlobalCurrentVel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetUseGlobalCurrentVel_Request_

// alias to use template instance with default allocator
using SetUseGlobalCurrentVel_Request =
  uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetUseGlobalCurrentVel_Response_
{
  using Type = SetUseGlobalCurrentVel_Response_<ContainerAllocator>;

  explicit SetUseGlobalCurrentVel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetUseGlobalCurrentVel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetUseGlobalCurrentVel_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetUseGlobalCurrentVel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetUseGlobalCurrentVel_Response_

// alias to use template instance with default allocator
using SetUseGlobalCurrentVel_Response =
  uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

struct SetUseGlobalCurrentVel
{
  using Request = uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request;
  using Response = uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response;
};

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__STRUCT_HPP_
