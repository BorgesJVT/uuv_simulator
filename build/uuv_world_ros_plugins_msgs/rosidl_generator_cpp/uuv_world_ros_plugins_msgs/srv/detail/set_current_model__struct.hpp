// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__STRUCT_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrentModel_Request_
{
  using Type = SetCurrentModel_Request_<ContainerAllocator>;

  explicit SetCurrentModel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean = 0.0;
      this->min = 0.0;
      this->max = 0.0;
      this->noise = 0.0;
      this->mu = 0.0;
    }
  }

  explicit SetCurrentModel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mean = 0.0;
      this->min = 0.0;
      this->max = 0.0;
      this->noise = 0.0;
      this->mu = 0.0;
    }
  }

  // field types and members
  using _mean_type =
    double;
  _mean_type mean;
  using _min_type =
    double;
  _min_type min;
  using _max_type =
    double;
  _max_type max;
  using _noise_type =
    double;
  _noise_type noise;
  using _mu_type =
    double;
  _mu_type mu;

  // setters for named parameter idiom
  Type & set__mean(
    const double & _arg)
  {
    this->mean = _arg;
    return *this;
  }
  Type & set__min(
    const double & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const double & _arg)
  {
    this->max = _arg;
    return *this;
  }
  Type & set__noise(
    const double & _arg)
  {
    this->noise = _arg;
    return *this;
  }
  Type & set__mu(
    const double & _arg)
  {
    this->mu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrentModel_Request_ & other) const
  {
    if (this->mean != other.mean) {
      return false;
    }
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    if (this->noise != other.noise) {
      return false;
    }
    if (this->mu != other.mu) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrentModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrentModel_Request_

// alias to use template instance with default allocator
using SetCurrentModel_Request =
  uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCurrentModel_Response_
{
  using Type = SetCurrentModel_Response_<ContainerAllocator>;

  explicit SetCurrentModel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetCurrentModel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetCurrentModel_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCurrentModel_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCurrentModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCurrentModel_Response_

// alias to use template instance with default allocator
using SetCurrentModel_Response =
  uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

struct SetCurrentModel
{
  using Request = uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Request;
  using Response = uuv_world_ros_plugins_msgs::srv::SetCurrentModel_Response;
};

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_MODEL__STRUCT_HPP_
