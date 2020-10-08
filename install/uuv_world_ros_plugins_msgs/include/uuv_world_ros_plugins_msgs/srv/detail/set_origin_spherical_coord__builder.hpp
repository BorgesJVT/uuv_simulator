// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetOriginSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/set_origin_spherical_coord__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetOriginSphericalCoord_Request_altitude
{
public:
  explicit Init_SetOriginSphericalCoord_Request_altitude(::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request altitude(::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request msg_;
};

class Init_SetOriginSphericalCoord_Request_longitude_deg
{
public:
  explicit Init_SetOriginSphericalCoord_Request_longitude_deg(::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request & msg)
  : msg_(msg)
  {}
  Init_SetOriginSphericalCoord_Request_altitude longitude_deg(::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request::_longitude_deg_type arg)
  {
    msg_.longitude_deg = std::move(arg);
    return Init_SetOriginSphericalCoord_Request_altitude(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request msg_;
};

class Init_SetOriginSphericalCoord_Request_latitude_deg
{
public:
  Init_SetOriginSphericalCoord_Request_latitude_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetOriginSphericalCoord_Request_longitude_deg latitude_deg(::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request::_latitude_deg_type arg)
  {
    msg_.latitude_deg = std::move(arg);
    return Init_SetOriginSphericalCoord_Request_longitude_deg(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Request>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetOriginSphericalCoord_Request_latitude_deg();
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetOriginSphericalCoord_Response_success
{
public:
  Init_SetOriginSphericalCoord_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response success(::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_SetOriginSphericalCoord_Response_success();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__BUILDER_HPP_
