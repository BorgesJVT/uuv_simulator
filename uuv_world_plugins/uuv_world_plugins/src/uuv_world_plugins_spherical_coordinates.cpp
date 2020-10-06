// Copyright (c) 2016 The UUV Simulator Authors.
// All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// \file uuv_world_plugins_spherical_coordinates.cpp

#include <uuv_world_plugins/uuv_world_plugins_spherical_coordinates.hpp>

#include <gazebo/common/SphericalCoordinates.hh>

#include <uuv_world_ros_plugins_msgs/srv/set_origin_spherical_coord.hpp>
#include <uuv_world_ros_plugins_msgs/srv/get_origin_spherical_coord.hpp>
#include <uuv_world_ros_plugins_msgs/srv/transform_to_spherical_coord.hpp>
#include <uuv_world_ros_plugins_msgs/srv/transform_from_spherical_coord.hpp>
#include <gazebo_ros/node.hpp>
#include <geometry_msgs/msg/vector3.hpp>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp/service.hpp>
#include <std_srvs/srv/set_bool.hpp>

#include <map>
#include <string>

namespace uuv_world_plugins
{

class UUVWorldPluginsSphericalCoordinatesPrivate
{
public:
  /// Service call that returns the origin in WGS84 standard
  void GetOriginSphericalCoord(
      uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord::Response::SharedPtr _res);

  /// Service call that returns the origin in WGS84 standard
  void SetOriginSphericalCoord(
      uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord::Response::SharedPtr _res);

  /// Service call to transform from Cartesian to spherical coordinates
  void TransformToSphericalCoord(
      uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord::Response::SharedPtr _res);

  /// Service call to transform from spherical to Cartesian coordinates
  void TransformFromSphericalCoord(
      uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord::Response::SharedPtr _res);

  /// A pointer to the GazeboROS node.
  gazebo_ros::Node::SharedPtr ros_node_;

  /// Connection to event called at every world iteration.
  gazebo::event::ConnectionPtr update_connection_;

  /// Pointer to world
  gazebo::physics::WorldPtr world_;

  /// All underwater world services
  //std::map<std::string, rclcpp::ServiceBase::SharedPtr> world_services_;

  /// \brief ROS service to handle requests for origin spherical coordinates.
  // JOAO: Must this service pointer be unique?
  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord>::SharedPtr get_origin_spherical_coord_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>::SharedPtr set_origin_spherical_coord_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord>::SharedPtr transf_to_spherical_coord_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord>::SharedPtr transf_from_spherical_coord_service_;
};

UUVWorldPluginsSphericalCoordinates::UUVWorldPluginsSphericalCoordinates()
: impl_(std::make_unique<UUVWorldPluginsSphericalCoordinatesPrivate>())
{ 
}

UUVWorldPluginsSphericalCoordinates::~UUVWorldPluginsSphericalCoordinates()
{
}

void UUVWorldPluginsSphericalCoordinates::Load(
  gazebo::physics::WorldPtr _world, sdf::ElementPtr _sdf)
{
  if(!rclcpp::ok())
  {
    std::stringstream ss;
    ss << "Not loading plugin since ROS has not been "
       << "properly initialized.  Try starting gazebo with ros plugin:" << std::endl
       << "  gazebo -s libgazebo_ros_api_plugin.so" << std::endl;
    RCLCPP_ERROR(impl_->ros_node_->get_logger(), ss.str().c_str());

    return;
  }

  impl_->world_ = _world;

  impl_->ros_node_ = gazebo_ros::Node::Get(_sdf);

  impl_->get_origin_spherical_coord_service_ =
    impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord>(
    "get_origin_spherical_coord", std::bind(
      &UUVWorldPluginsSphericalCoordinatesPrivate::GetOriginSphericalCoord, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  impl_->set_origin_spherical_coord_service_ =
    impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord>(
    "set_origin_spherical_coord", std::bind(
      &UUVWorldPluginsSphericalCoordinatesPrivate::SetOriginSphericalCoord, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  impl_->transf_to_spherical_coord_service_ =
    impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord>(
    "transf_to_spherical_coord", std::bind(
      &UUVWorldPluginsSphericalCoordinatesPrivate::TransformToSphericalCoord, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  impl_->transf_from_spherical_coord_service_ =
    impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord>(
    "transf_from_spherical_coord", std::bind(
      &UUVWorldPluginsSphericalCoordinatesPrivate::TransformFromSphericalCoord, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));
}

void UUVWorldPluginsSphericalCoordinatesPrivate::GetOriginSphericalCoord(
    uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::GetOriginSphericalCoord::Response::SharedPtr _res)
{
  _res->latitude_deg =
    this->world_->SphericalCoords()->LatitudeReference().Degree();
  _res->longitude_deg =
    this->world_->SphericalCoords()->LongitudeReference().Degree();
  _res->altitude =
    this->world_->SphericalCoords()->GetElevationReference();
}

void UUVWorldPluginsSphericalCoordinatesPrivate::SetOriginSphericalCoord(
    uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetOriginSphericalCoord::Response::SharedPtr _res)
{
  ignition::math::Angle angle;
  angle.Degree(_req->latitude_deg);
  this->world_->SphericalCoords()->SetLatitudeReference(angle);
  angle.Degree(_req->longitude_deg);

  this->world_->SphericalCoords()->SetLongitudeReference(angle);
  this->world_->SphericalCoords()->SetElevationReference(_req->altitude);

  _res->success = true;
}

void UUVWorldPluginsSphericalCoordinatesPrivate::TransformToSphericalCoord(
    uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord::Response::SharedPtr _res)
{
  ignition::math::Vector3d cartVec = ignition::math::Vector3d(
    _req->input.x, _req->input.y, _req->input.z);
  ignition::math::Vector3d scVec =
    this->world_->SphericalCoords()->SphericalFromLocal(cartVec);
  _res->latitude_deg = scVec.X();
  _res->longitude_deg = scVec.Y();
  _res->altitude = scVec.Z(); 
}

void UUVWorldPluginsSphericalCoordinatesPrivate::TransformFromSphericalCoord(
    uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::TransformFromSphericalCoord::Response::SharedPtr _res)
{
  ignition::math::Vector3d scVec = ignition::math::Vector3d(
    _req->latitude_deg, _req->longitude_deg, _req->altitude);
  ignition::math::Vector3d cartVec =
    this->world_->SphericalCoords()->LocalFromSpherical(scVec);
  _res->output.x = cartVec.X();
  _res->output.y = cartVec.Y();
  _res->output.z = cartVec.Z();
}


/////////////////////////////////////////////////
GZ_REGISTER_WORLD_PLUGIN(UUVWorldPluginsSphericalCoordinates)

}  // namespace uuv_world_plugins
