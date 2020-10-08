// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__STRUCT_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__Salinity __attribute__((deprecated))
#else
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__Salinity __declspec(deprecated)
#endif

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Salinity_
{
  using Type = Salinity_<ContainerAllocator>;

  explicit Salinity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->salinity = 0.0;
      this->variance = 0.0;
      this->unit = "";
    }
  }

  explicit Salinity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    unit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->salinity = 0.0;
      this->variance = 0.0;
      this->unit = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _salinity_type =
    double;
  _salinity_type salinity;
  using _variance_type =
    double;
  _variance_type variance;
  using _unit_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _unit_type unit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__salinity(
    const double & _arg)
  {
    this->salinity = _arg;
    return *this;
  }
  Type & set__variance(
    const double & _arg)
  {
    this->variance = _arg;
    return *this;
  }
  Type & set__unit(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->unit = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> PSU;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> PPM;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> PPT;

  // pointer types
  using RawPtr =
    uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__Salinity
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__Salinity
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::Salinity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Salinity_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->salinity != other.salinity) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    return true;
  }
  bool operator!=(const Salinity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Salinity_

// alias to use template instance with default allocator
using Salinity =
  uuv_sensor_ros_plugins_msgs::msg::Salinity_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
Salinity_<ContainerAllocator>::PSU = "psu";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
Salinity_<ContainerAllocator>::PPM = "ppm";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
Salinity_<ContainerAllocator>::PPT = "ppt";

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__STRUCT_HPP_
