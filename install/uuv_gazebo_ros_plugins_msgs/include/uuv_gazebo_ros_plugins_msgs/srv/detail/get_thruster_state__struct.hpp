// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterState.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_STATE__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Request __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterState_Request_
{
  using Type = GetThrusterState_Request_<ContainerAllocator>;

  explicit GetThrusterState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetThrusterState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterState_Request_

// alias to use template instance with default allocator
using GetThrusterState_Request =
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Response __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetThrusterState_Response_
{
  using Type = GetThrusterState_Response_<ContainerAllocator>;

  explicit GetThrusterState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_on = false;
    }
  }

  explicit GetThrusterState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_on = false;
    }
  }

  // field types and members
  using _is_on_type =
    bool;
  _is_on_type is_on;

  // setters for named parameter idiom
  Type & set__is_on(
    const bool & _arg)
  {
    this->is_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetThrusterState_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetThrusterState_Response_ & other) const
  {
    if (this->is_on != other.is_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetThrusterState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetThrusterState_Response_

// alias to use template instance with default allocator
using GetThrusterState_Response =
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

struct GetThrusterState
{
  using Request = uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request;
  using Response = uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response;
};

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_STATE__STRUCT_HPP_
