// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__STRUCT_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetModelProperties_Request_
{
  using Type = GetModelProperties_Request_<ContainerAllocator>;

  explicit GetModelProperties_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetModelProperties_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Request
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetModelProperties_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetModelProperties_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetModelProperties_Request_

// alias to use template instance with default allocator
using GetModelProperties_Request =
  uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs


// Include directives for member types
// Member 'models'
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response __declspec(deprecated)
#endif

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetModelProperties_Response_
{
  using Type = GetModelProperties_Response_<ContainerAllocator>;

  explicit GetModelProperties_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetModelProperties_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _link_names_type link_names;
  using _models_type =
    std::vector<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>, typename ContainerAllocator::template rebind<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>::other>;
  _models_type models;

  // setters for named parameter idiom
  Type & set__link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->link_names = _arg;
    return *this;
  }
  Type & set__models(
    const std::vector<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>, typename ContainerAllocator::template rebind<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel_<ContainerAllocator>>::other> & _arg)
  {
    this->models = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_gazebo_ros_plugins_msgs__srv__GetModelProperties_Response
    std::shared_ptr<uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetModelProperties_Response_ & other) const
  {
    if (this->link_names != other.link_names) {
      return false;
    }
    if (this->models != other.models) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetModelProperties_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetModelProperties_Response_

// alias to use template instance with default allocator
using GetModelProperties_Response =
  uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

struct GetModelProperties
{
  using Request = uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request;
  using Response = uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response;
};

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__STRUCT_HPP_
