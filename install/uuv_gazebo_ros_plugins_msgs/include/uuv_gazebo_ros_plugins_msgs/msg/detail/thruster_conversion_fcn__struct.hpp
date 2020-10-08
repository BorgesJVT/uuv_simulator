// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrusterConversionFcn_
{
  using Type = ThrusterConversionFcn_<ContainerAllocator>;

  explicit ThrusterConversionFcn_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->function_name = "";
    }
  }

  explicit ThrusterConversionFcn_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : function_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->function_name = "";
    }
  }

  // field types and members
  using _function_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _function_name_type function_name;
  using _tags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _tags_type tags;
  using _data_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _data_type data;
  using _lookup_table_input_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _lookup_table_input_type lookup_table_input;
  using _lookup_table_output_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _lookup_table_output_type lookup_table_output;

  // setters for named parameter idiom
  Type & set__function_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->function_name = _arg;
    return *this;
  }
  Type & set__tags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->tags = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__lookup_table_input(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->lookup_table_input = _arg;
    return *this;
  }
  Type & set__lookup_table_output(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->lookup_table_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrusterConversionFcn_ & other) const
  {
    if (this->function_name != other.function_name) {
      return false;
    }
    if (this->tags != other.tags) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->lookup_table_input != other.lookup_table_input) {
      return false;
    }
    if (this->lookup_table_output != other.lookup_table_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrusterConversionFcn_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrusterConversionFcn_

// alias to use template instance with default allocator
using ThrusterConversionFcn =
  uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__STRUCT_HPP_
