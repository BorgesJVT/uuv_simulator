// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__STRUCT_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance __declspec(deprecated)
#endif

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionWithCovariance_
{
  using Type = PositionWithCovariance_<ContainerAllocator>;

  explicit PositionWithCovariance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit PositionWithCovariance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pos_type pos;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionWithCovariance_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionWithCovariance_

// alias to use template instance with default allocator
using PositionWithCovariance =
  uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__STRUCT_HPP_
