// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformFromSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/transform_from_spherical_coord__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformFromSphericalCoord_Request_altitude
{
public:
  explicit Init_TransformFromSphericalCoord_Request_altitude(::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request altitude(::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request msg_;
};

class Init_TransformFromSphericalCoord_Request_longitude_deg
{
public:
  explicit Init_TransformFromSphericalCoord_Request_longitude_deg(::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request & msg)
  : msg_(msg)
  {}
  Init_TransformFromSphericalCoord_Request_altitude longitude_deg(::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request::_longitude_deg_type arg)
  {
    msg_.longitude_deg = std::move(arg);
    return Init_TransformFromSphericalCoord_Request_altitude(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request msg_;
};

class Init_TransformFromSphericalCoord_Request_latitude_deg
{
public:
  Init_TransformFromSphericalCoord_Request_latitude_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformFromSphericalCoord_Request_longitude_deg latitude_deg(::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request::_latitude_deg_type arg)
  {
    msg_.latitude_deg = std::move(arg);
    return Init_TransformFromSphericalCoord_Request_longitude_deg(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Request>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_TransformFromSphericalCoord_Request_latitude_deg();
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformFromSphericalCoord_Response_output
{
public:
  Init_TransformFromSphericalCoord_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Response output(::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_TransformFromSphericalCoord_Response_output();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__BUILDER_HPP_
