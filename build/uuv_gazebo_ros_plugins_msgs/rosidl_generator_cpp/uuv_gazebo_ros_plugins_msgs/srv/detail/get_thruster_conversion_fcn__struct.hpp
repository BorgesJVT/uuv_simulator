// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Request __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterConversionFcn_Request_
{
  using Type = GetThrusterConversionFcn_Request_<ContainerAllocator>;

  explicit GetThrusterConversionFcn_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetThrusterConversionFcn_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterConversionFcn_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterConversionFcn_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterConversionFcn_Request_

// alias to use template instance with default allocator
using GetThrusterConversionFcn_Request =
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs


// Include directives for member types
// Member 'fcn'
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Response __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterConversionFcn_Response_
{
  using Type = GetThrusterConversionFcn_Response_<ContainerAllocator>;

  explicit GetThrusterConversionFcn_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fcn(_init)
  {
    (void)_init;
  }

  explicit GetThrusterConversionFcn_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fcn(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _fcn_type =
    uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>;
  _fcn_type fcn;

  // setters for named parameter idiom
  Type & set__fcn(
    const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> & _arg)
  {
    this->fcn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterConversionFcn_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterConversionFcn_Response_ & other) const
  {
    if (this->fcn != other.fcn) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterConversionFcn_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterConversionFcn_Response_

// alias to use template instance with default allocator
using GetThrusterConversionFcn_Response =
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

struct GetThrusterConversionFcn
{
  using Request = uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Request;
  using Response = uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn_Response;
};

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_CONVERSION_FCN__STRUCT_HPP_
