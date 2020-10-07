// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__STRUCT_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration __attribute__((deprecated))
#else
# define DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration __declspec(deprecated)
#endif

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChemicalParticleConcentration_
{
  using Type = ChemicalParticleConcentration_<ContainerAllocator>;

  explicit ChemicalParticleConcentration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->depth = 0.0;
      this->concentration = 0.0;
      this->is_measuring = false;
    }
  }

  explicit ChemicalParticleConcentration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->depth = 0.0;
      this->concentration = 0.0;
      this->is_measuring = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _depth_type =
    double;
  _depth_type depth;
  using _concentration_type =
    double;
  _concentration_type concentration;
  using _is_measuring_type =
    bool;
  _is_measuring_type is_measuring;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__depth(
    const double & _arg)
  {
    this->depth = _arg;
    return *this;
  }
  Type & set__concentration(
    const double & _arg)
  {
    this->concentration = _arg;
    return *this;
  }
  Type & set__is_measuring(
    const bool & _arg)
  {
    this->is_measuring = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration
    std::shared_ptr<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChemicalParticleConcentration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    if (this->concentration != other.concentration) {
      return false;
    }
    if (this->is_measuring != other.is_measuring) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChemicalParticleConcentration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChemicalParticleConcentration_

// alias to use template instance with default allocator
using ChemicalParticleConcentration =
  uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__STRUCT_HPP_
