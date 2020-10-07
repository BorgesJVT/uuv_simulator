// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/GetOriginSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_ORIGIN_SPHERICAL_COORD__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_ORIGIN_SPHERICAL_COORD__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/get_origin_spherical_coord__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Request>()
{
  return ::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetOriginSphericalCoord_Response_altitude
{
public:
  explicit Init_GetOriginSphericalCoord_Response_altitude(::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response altitude(::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response msg_;
};

class Init_GetOriginSphericalCoord_Response_longitude_deg
{
public:
  explicit Init_GetOriginSphericalCoord_Response_longitude_deg(::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response & msg)
  : msg_(msg)
  {}
  Init_GetOriginSphericalCoord_Response_altitude longitude_deg(::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response::_longitude_deg_type arg)
  {
    msg_.longitude_deg = std::move(arg);
    return Init_GetOriginSphericalCoord_Response_altitude(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response msg_;
};

class Init_GetOriginSphericalCoord_Response_latitude_deg
{
public:
  Init_GetOriginSphericalCoord_Response_latitude_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetOriginSphericalCoord_Response_longitude_deg latitude_deg(::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response::_latitude_deg_type arg)
  {
    msg_.latitude_deg = std::move(arg);
    return Init_GetOriginSphericalCoord_Response_longitude_deg(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_GetOriginSphericalCoord_Response_latitude_deg();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_ORIGIN_SPHERICAL_COORD__BUILDER_HPP_
