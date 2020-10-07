// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformToSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_TO_SPHERICAL_COORD__BUILDER_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_TO_SPHERICAL_COORD__BUILDER_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformToSphericalCoord_Request_input
{
public:
  Init_TransformToSphericalCoord_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request input(::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_TransformToSphericalCoord_Request_input();
}

}  // namespace uuv_world_ros_plugins_msgs


namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_TransformToSphericalCoord_Response_altitude
{
public:
  explicit Init_TransformToSphericalCoord_Response_altitude(::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response & msg)
  : msg_(msg)
  {}
  ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response altitude(::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response msg_;
};

class Init_TransformToSphericalCoord_Response_longitude_deg
{
public:
  explicit Init_TransformToSphericalCoord_Response_longitude_deg(::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response & msg)
  : msg_(msg)
  {}
  Init_TransformToSphericalCoord_Response_altitude longitude_deg(::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response::_longitude_deg_type arg)
  {
    msg_.longitude_deg = std::move(arg);
    return Init_TransformToSphericalCoord_Response_altitude(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response msg_;
};

class Init_TransformToSphericalCoord_Response_latitude_deg
{
public:
  Init_TransformToSphericalCoord_Response_latitude_deg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransformToSphericalCoord_Response_longitude_deg latitude_deg(::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response::_latitude_deg_type arg)
  {
    msg_.latitude_deg = std::move(arg);
    return Init_TransformToSphericalCoord_Response_longitude_deg(msg_);
  }

private:
  ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response>()
{
  return uuv_world_ros_plugins_msgs::srv::builder::Init_TransformToSphericalCoord_Response_latitude_deg();
}

}  // namespace uuv_world_ros_plugins_msgs

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_TO_SPHERICAL_COORD__BUILDER_HPP_
