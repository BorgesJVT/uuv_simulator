// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'cob'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'inertia'
#include "geometry_msgs/msg/detail/inertia__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnderwaterObjectModel_
{
  using Type = UnderwaterObjectModel_<ContainerAllocator>;

  explicit UnderwaterObjectModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cob(_init),
    inertia(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volume = 0.0;
      this->bbox_height = 0.0;
      this->bbox_length = 0.0;
      this->bbox_width = 0.0;
      this->fluid_density = 0.0;
      this->neutrally_buoyant = false;
    }
  }

  explicit UnderwaterObjectModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cob(_alloc, _init),
    inertia(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->volume = 0.0;
      this->bbox_height = 0.0;
      this->bbox_length = 0.0;
      this->bbox_width = 0.0;
      this->fluid_density = 0.0;
      this->neutrally_buoyant = false;
    }
  }

  // field types and members
  using _added_mass_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _added_mass_type added_mass;
  using _linear_damping_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _linear_damping_type linear_damping;
  using _linear_damping_forward_speed_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _linear_damping_forward_speed_type linear_damping_forward_speed;
  using _quadratic_damping_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _quadratic_damping_type quadratic_damping;
  using _volume_type =
    double;
  _volume_type volume;
  using _bbox_height_type =
    double;
  _bbox_height_type bbox_height;
  using _bbox_length_type =
    double;
  _bbox_length_type bbox_length;
  using _bbox_width_type =
    double;
  _bbox_width_type bbox_width;
  using _fluid_density_type =
    double;
  _fluid_density_type fluid_density;
  using _cob_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _cob_type cob;
  using _neutrally_buoyant_type =
    bool;
  _neutrally_buoyant_type neutrally_buoyant;
  using _inertia_type =
    geometry_msgs::msg::Inertia_<ContainerAllocator>;
  _inertia_type inertia;

  // setters for named parameter idiom
  Type & set__added_mass(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->added_mass = _arg;
    return *this;
  }
  Type & set__linear_damping(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->linear_damping = _arg;
    return *this;
  }
  Type & set__linear_damping_forward_speed(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->linear_damping_forward_speed = _arg;
    return *this;
  }
  Type & set__quadratic_damping(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->quadratic_damping = _arg;
    return *this;
  }
  Type & set__volume(
    const double & _arg)
  {
    this->volume = _arg;
    return *this;
  }
  Type & set__bbox_height(
    const double & _arg)
  {
    this->bbox_height = _arg;
    return *this;
  }
  Type & set__bbox_length(
    const double & _arg)
  {
    this->bbox_length = _arg;
    return *this;
  }
  Type & set__bbox_width(
    const double & _arg)
  {
    this->bbox_width = _arg;
    return *this;
  }
  Type & set__fluid_density(
    const double & _arg)
  {
    this->fluid_density = _arg;
    return *this;
  }
  Type & set__cob(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->cob = _arg;
    return *this;
  }
  Type & set__neutrally_buoyant(
    const bool & _arg)
  {
    this->neutrally_buoyant = _arg;
    return *this;
  }
  Type & set__inertia(
    const geometry_msgs::msg::Inertia_<ContainerAllocator> & _arg)
  {
    this->inertia = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnderwaterObjectModel_ & other) const
  {
    if (this->added_mass != other.added_mass) {
      return false;
    }
    if (this->linear_damping != other.linear_damping) {
      return false;
    }
    if (this->linear_damping_forward_speed != other.linear_damping_forward_speed) {
      return false;
    }
    if (this->quadratic_damping != other.quadratic_damping) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    if (this->bbox_height != other.bbox_height) {
      return false;
    }
    if (this->bbox_length != other.bbox_length) {
      return false;
    }
    if (this->bbox_width != other.bbox_width) {
      return false;
    }
    if (this->fluid_density != other.fluid_density) {
      return false;
    }
    if (this->cob != other.cob) {
      return false;
    }
    if (this->neutrally_buoyant != other.neutrally_buoyant) {
      return false;
    }
    if (this->inertia != other.inertia) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnderwaterObjectModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnderwaterObjectModel_

// alias to use template instance with default allocator
using UnderwaterObjectModel =
  uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__STRUCT_HPP_
