// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetOriginSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__STRUCT_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetOriginSphericalCoord_Request_
{
  using Type = SetOriginSphericalCoord_Request_<ContainerAllocator>;

  explicit SetOriginSphericalCoord_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude_deg = 0.0;
      this->longitude_deg = 0.0;
      this->altitude = 0.0;
    }
  }

  explicit SetOriginSphericalCoord_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude_deg = 0.0;
      this->longitude_deg = 0.0;
      this->altitude = 0.0;
    }
  }

  // field types and members
  using _latitude_deg_type =
    double;
  _latitude_deg_type latitude_deg;
  using _longitude_deg_type =
    double;
  _longitude_deg_type longitude_deg;
  using _altitude_type =
    double;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__latitude_deg(
    const double & _arg)
  {
    this->latitude_deg = _arg;
    return *this;
  }
  Type & set__longitude_deg(
    const double & _arg)
  {
    this->longitude_deg = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetOriginSphericalCoord_Request_ & other) const
  {
    if (this->latitude_deg != other.latitude_deg) {
      return false;
    }
    if (this->longitude_deg != other.longitude_deg) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetOriginSphericalCoord_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetOriginSphericalCoord_Request_

// alias to use template instance with default allocator
using SetOriginSphericalCoord_Request =
  uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


#ifndef _WIN32
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response __attribute__((deprecated))
#else
# define DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response __declspec(deprecated)
#endif

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetOriginSphericalCoord_Response_
{
  using Type = SetOriginSphericalCoord_Response_<ContainerAllocator>;

  explicit SetOriginSphericalCoord_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetOriginSphericalCoord_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response
    std::shared_ptr<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetOriginSphericalCoord_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetOriginSphericalCoord_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetOriginSphericalCoord_Response_

// alias to use template instance with default allocator
using SetOriginSphericalCoord_Response =
  uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

struct SetOriginSphericalCoord
{
  using Request = uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request;
  using Response = uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response;
};

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__STRUCT_HPP_
