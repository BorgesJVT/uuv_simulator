// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVLBeam.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__BUILDER_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__BUILDER_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_DVLBeam_pose
{
public:
  explicit Init_DVLBeam_pose(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  ::uuv_sensor_ros_plugins_msgs::msg::DVLBeam pose(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::DVLBeam msg_;
};

class Init_DVLBeam_velocity_covariance
{
public:
  explicit Init_DVLBeam_velocity_covariance(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  Init_DVLBeam_pose velocity_covariance(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_DVLBeam_pose(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::DVLBeam msg_;
};

class Init_DVLBeam_velocity
{
public:
  explicit Init_DVLBeam_velocity(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  Init_DVLBeam_velocity_covariance velocity(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_DVLBeam_velocity_covariance(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::DVLBeam msg_;
};

class Init_DVLBeam_range_covariance
{
public:
  explicit Init_DVLBeam_range_covariance(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam & msg)
  : msg_(msg)
  {}
  Init_DVLBeam_velocity range_covariance(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam::_range_covariance_type arg)
  {
    msg_.range_covariance = std::move(arg);
    return Init_DVLBeam_velocity(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::DVLBeam msg_;
};

class Init_DVLBeam_range
{
public:
  Init_DVLBeam_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DVLBeam_range_covariance range(::uuv_sensor_ros_plugins_msgs::msg::DVLBeam::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_DVLBeam_range_covariance(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::DVLBeam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::msg::DVLBeam>()
{
  return uuv_sensor_ros_plugins_msgs::msg::builder::Init_DVLBeam_range();
}

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__DVL_BEAM__BUILDER_HPP_
