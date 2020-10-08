// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Request __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetFloat_Request_
{
  using Type = SetFloat_Request_<ContainerAllocator>;

  explicit SetFloat_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0;
    }
  }

  explicit SetFloat_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0;
    }
  }

  // field types and members
  using _data_type =
    double;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const double & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFloat_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFloat_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFloat_Request_

// alias to use template instance with default allocator
using SetFloat_Request =
  uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Response __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetFloat_Response_
{
  using Type = SetFloat_Response_<ContainerAllocator>;

  explicit SetFloat_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetFloat_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__SetFloat_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFloat_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFloat_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFloat_Response_

// alias to use template instance with default allocator
using SetFloat_Response =
  uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

struct SetFloat
{
  using Request = uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request;
  using Response = uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response;
};

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__STRUCT_HPP_
