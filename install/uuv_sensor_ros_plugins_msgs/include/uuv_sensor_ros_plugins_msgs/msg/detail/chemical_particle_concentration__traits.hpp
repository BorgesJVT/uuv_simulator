// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__TRAITS_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>()
{
  return "uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>()
{
  return "uuv_sensor_ros_plugins_msgs/msg/ChemicalParticleConcentration";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::msg::ChemicalParticleConcentration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__CHEMICAL_PARTICLE_CONCENTRATION__TRAITS_HPP_
