#include <gazebo/physics/Collision.hh>
#include <gazebo/physics/Base.hh>
#include <gazebo/physics/Link.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/PhysicsEngine.hh>
#include <gazebo/physics/Shape.hh>
#include <gazebo/physics/World.hh>
//#include <gazebo/transport/TransportTypes.hh>
//#include <gazebo/transport/transport.hh>
#include <gazebo_ros/node.hpp>

#include <uuv_gazebo_plugins/Def.hh>
#include <geometry_msgs/msg/twist_stamped.hpp>

#include <uuv_gazebo_plugins/HydrodynamicModel.hpp>
#include <uuv_gazebo_plugins/UnderwaterObjectPlugin.hpp>

namespace uuv_gazebo_plugins
{
class UnderwaterObjectPluginPrivate
{
public:

  gazebo::physics::WorldPtr world_;
  /// Pointer to model.
  gazebo::physics::ModelPtr model_;

  /// Node for ROS communication.
  gazebo_ros::Node::SharedPtr ros_node_;

  /// Connection to event called at every world iteration.
  gazebo::event::ConnectionPtr update_connection_;

  bool use_global_current_;

  std::string base_link_name_;

  ignition::math::Vector3d flow_velocity_;

  /// \brief Pairs of links & corresponding hydrodynamic models
  std::map<gazebo::physics::LinkPtr, HydrodynamicModelPtr> links_hydro_models_;

  /// \brief Publishers of hydrodynamic and hydrostatic forces and torques in
  /// the case the debug flag is on
  std::map<std::string, gazebo::transport::PublisherPtr> hydro_forces_pubs_;
  //std::map<std::string, geometry_msgs::msg::WrenchStamped> hydro_forces_pubs_;

  void InitDebug(gazebo::physics::LinkPtr _link, HydrodynamicModelPtr _hydro);
  /// Callback to be called at every simulation iteration.
  /// \param[in] _info Updated simulation info.
  void OnUpdate(const gazebo::common::UpdateInfo &_info);

  void UpdateFlowVelocity(geometry_msgs::msg::TwistStamped::SharedPtr _msg);

  void PublishRestoringForce(gazebo::physics::LinkPtr _link);

  void PublishHydrodynamicWrenches(
        gazebo::physics::LinkPtr _link);

  void GenWrenchMsg(ignition::math::Vector3d _force,
        ignition::math::Vector3d _torque, gazebo::msgs::WrenchStamped &_output);

};

UnderwaterObjectPlugin::UnderwaterObjectPlugin() 
: impl_(std::make_unique<UnderwaterObjectPluginPrivate>())
{
}

UnderwaterObjectPlugin::~UnderwaterObjectPlugin()
{
  //this->updateConnection.reset();
}

void UnderwaterObjectPlugin::Load(gazebo::physics::ModelPtr _model,
                                  sdf::ElementPtr _sdf)
{

  if (!rclcpp::ok())
  {
    gzerr << "Not loading plugin since ROS has not been "
          << "properly initialized.  Try starting gazebo with ros plugin:\n"
          << "  gazebo -s libgazebo_ros_api_plugin.so\n";
    return;
  }
  
  GZ_ASSERT(_model != NULL, "Invalid model pointer");
  GZ_ASSERT(_sdf != NULL, "Invalid SDF element pointer");

  impl_->model_ = _model;
  impl_->world_ = _model->GetWorld();
  impl_->ros_node_ = gazebo_ros::Node::Get(_sdf);
  impl_->use_global_current_ = true;

  // If fluid topic is available, subscribe to it
  if (_sdf->HasElement("flow_velocity_topic"))
  {
    std::string flow_velocity_topic_ = _sdf->Get<std::string>("flow_velocity_topic");
    GZ_ASSERT(!flow_velocity_topic_.empty(),
              "Fluid velocity topic tag cannot be empty");

    gzmsg << "Subscribing to current velocity topic: " << flow_velocity_topic_
        << std::endl;
    impl_->ros_node_->create_subscription<geometry_msgs::msg::TwistStamped>(
                flow_velocity_topic_, 10, std::bind(
                &UnderwaterObjectPluginPrivate::UpdateFlowVelocity, 
                impl_.get(), std::placeholders::_1));
  }

  double fluidDensity = 1028.0;
  // Get the fluid density, if present
  if (_sdf->HasElement("fluid_density"))
    fluidDensity = _sdf->Get<double>("fluid_density");

  if (_sdf->HasElement("use_global_current"))
    impl_->use_global_current_ = _sdf->Get<bool>("use_global_current");

  // Get the debug flag, if available
  bool debugFlag = false;
  if (_sdf->HasElement("debug"))
    debugFlag = static_cast<bool>(_sdf->Get<int>("debug"));

  // Center of buoyancy
  ignition::math::Vector3d cob;
  // gravity
  double gAcc = std::abs(impl_->world_->Gravity().Z());

  impl_->base_link_name_ = std::string();
  if (_sdf->HasElement("link"))
  {
    for (sdf::ElementPtr linkElem = _sdf->GetElement("link"); linkElem;
         linkElem = linkElem->GetNextElement("link"))
    {
      gazebo::physics::LinkPtr link;
      std::string linkName = "";

      if (linkElem->HasAttribute("name"))
      {
        linkName = linkElem->Get<std::string>("name");
        std::size_t found = linkName.find("base_link");
        if (found != std::string::npos)
        {
          impl_->base_link_name_ = linkName;
          gzmsg << "Name of the BASE_LINK: " << impl_->base_link_name_ << std::endl;
        }

        link = impl_->model_->GetLink(linkName);
        if (!link)
        {
          gzwarn << "Specified link [" << linkName << "] not found."
                 << std::endl;
          continue;
        }
      }
      else
      {
        gzwarn << "Attribute name missing from link [" << linkName
               << "]" << std::endl;
        continue;
      }

      // Creating a new hydrodynamic model for this link
      HydrodynamicModelPtr hydro;
      hydro.reset(
        HydrodynamicModelFactory::GetInstance().CreateHydrodynamicModel(
        linkElem, link));
      hydro->SetFluidDensity(fluidDensity);
      hydro->SetGravity(gAcc);

      if (debugFlag)
        impl_->InitDebug(link, hydro);

      impl_->links_hydro_models_[link] = hydro;
      impl_->links_hydro_models_[link]->Print("all");
    }  // for each link mentioned in plugin sdf
  }

  // Connect the update event
  impl_->update_connection_ = gazebo::event::Events::ConnectWorldUpdateBegin(
        boost::bind(&UnderwaterObjectPluginPrivate::OnUpdate,
                    impl_.get(), _1));
/*                    
  this->nedTransform.header.frame_id = this->model->GetName() + "/base_link";
  this->nedTransform.child_frame_id = this->model->GetName() + "/base_link_ned";
  this->nedTransform.transform.translation.x = 0;
  this->nedTransform.transform.translation.y = 0;
  this->nedTransform.transform.translation.z = 0;
  tf2::Quaternion quat;
  quat.setRPY(M_PI, 0, 0);
  this->nedTransform.transform.rotation.x = quat.x();
  this->nedTransform.transform.rotation.y = quat.y();
  this->nedTransform.transform.rotation.z = quat.z();
  this->nedTransform.transform.rotation.w = quat.w();
*/
}

// /////////////////////////////////////////////////
void UnderwaterObjectPluginPrivate::InitDebug(gazebo::physics::LinkPtr _link,
  HydrodynamicModelPtr _hydro)
{
  // Create topics for the individual hydrodynamic and hydrostatic forces
  // std::string rootTopic = "/debug/forces/" + _link->GetName() + "/";
  // std::vector<std::string> topics {"restoring", "damping", "added_mass",
  //   "added_coriolis"};
  // for (auto topic : topics)
  // {
  //   hydro_forces_pubs_[_link->GetName() + "/" + topic] =
  //     this->node->Advertise<gazebo::msgs::WrenchStamped>(rootTopic + topic);
  // }

  // // Setup the vectors to be stored
  // _hydro->SetDebugFlag(true);
  // _hydro->SetStoreVector(RESTORING_FORCE);
  // _hydro->SetStoreVector(UUV_DAMPING_FORCE);
  // _hydro->SetStoreVector(UUV_DAMPING_TORQUE);
  // _hydro->SetStoreVector(UUV_ADDED_CORIOLIS_FORCE);
  // _hydro->SetStoreVector(UUV_ADDED_CORIOLIS_TORQUE);
  // _hydro->SetStoreVector(UUV_ADDED_MASS_FORCE);
  // _hydro->SetStoreVector(UUV_ADDED_MASS_TORQUE);
}

/////////////////////////////////////////////////
// void UnderwaterObjectPlugin::Init()
// {
//   // Doing nothing for now
// }

/////////////////////////////////////////////////
void UnderwaterObjectPluginPrivate::OnUpdate(const gazebo::common::UpdateInfo &_info)
{
  double time = _info.simTime.Double();

  for (std::map<gazebo::physics::LinkPtr,
       HydrodynamicModelPtr>::iterator it = links_hydro_models_.begin();
       it != links_hydro_models_.end(); ++it)
  {
    gazebo::physics::LinkPtr link = it->first;
    HydrodynamicModelPtr hydro = it->second;
    // Apply hydrodynamic and hydrostatic forces and torques
    double linearAccel, angularAccel;
    linearAccel = link->RelativeLinearAccel().Length();
    angularAccel = link->RelativeAngularAccel().Length();


    GZ_ASSERT(!std::isnan(linearAccel) && !std::isnan(angularAccel),
      "Linear or angular accelerations are invalid.");

    hydro->ApplyHydrodynamicForces(time, flow_velocity_);
    this->PublishRestoringForce(link);
    this->PublishHydrodynamicWrenches(link);
    
    //this->nedTransform.header.stamp = ros::Time::now();
    //this->tfBroadcaster.sendTransform(this->nedTransform);
  }
}

/////////////////////////////////////////////////
void UnderwaterObjectPluginPrivate::UpdateFlowVelocity(geometry_msgs::msg::TwistStamped::SharedPtr _msg)
{
  if (use_global_current_)
  {
    flow_velocity_.X() = _msg->twist.linear.x;
    flow_velocity_.Y() = _msg->twist.linear.y;
    flow_velocity_.Z() = _msg->twist.linear.z;
  }
}

/////////////////////////////////////////////////
void UnderwaterObjectPluginPrivate::PublishRestoringForce(
  gazebo::physics::LinkPtr _link)
{
  if (links_hydro_models_.count(_link))
  {
    if (!links_hydro_models_[_link]->GetDebugFlag())
      return;

    ignition::math::Vector3d restoring = links_hydro_models_[_link]->GetStoredVector(
      RESTORING_FORCE);

    gazebo::msgs::WrenchStamped msg;
    GenWrenchMsg(restoring, ignition::math::Vector3d(0, 0, 0), msg);
    hydro_forces_pubs_[_link->GetName() + "/restoring"]->Publish(msg);
  }
}

// /////////////////////////////////////////////////
void UnderwaterObjectPluginPrivate::PublishHydrodynamicWrenches(
  gazebo::physics::LinkPtr _link)
{
  if (links_hydro_models_.count(_link))
  {
    if (!links_hydro_models_[_link]->GetDebugFlag())
      return;
    gazebo::msgs::WrenchStamped msg;
    ignition::math::Vector3d force, torque;

    // Publish wrench generated by the acceleraton of fluid aroung the object
    force = links_hydro_models_[_link]->GetStoredVector(UUV_ADDED_MASS_FORCE);
    torque = links_hydro_models_[_link]->GetStoredVector(UUV_ADDED_MASS_TORQUE);

    GenWrenchMsg(force, torque, msg);
    hydro_forces_pubs_[_link->GetName() + "/added_mass"]->Publish(msg);

    // Publish wrench generated by the acceleraton of fluid aroung the object
    force = links_hydro_models_[_link]->GetStoredVector(UUV_DAMPING_FORCE);
    torque = links_hydro_models_[_link]->GetStoredVector(UUV_DAMPING_TORQUE);

    GenWrenchMsg(force, torque, msg);
    hydro_forces_pubs_[_link->GetName() + "/damping"]->Publish(msg);

    // Publish wrench generated by the acceleraton of fluid aroung the object
    force = links_hydro_models_[_link]->GetStoredVector(UUV_ADDED_CORIOLIS_FORCE);
    torque = links_hydro_models_[_link]->GetStoredVector(UUV_ADDED_CORIOLIS_TORQUE);

    GenWrenchMsg(force, torque, msg);
    hydro_forces_pubs_[_link->GetName() + "/added_coriolis"]->Publish(msg);
  }
}

// /////////////////////////////////////////////////
void UnderwaterObjectPluginPrivate::GenWrenchMsg(ignition::math::Vector3d _force,
  ignition::math::Vector3d _torque, gazebo::msgs::WrenchStamped &_output)
{
  gazebo::common::Time curTime;
  curTime = world_->SimTime();

  gazebo::msgs::Wrench * wrench = _output.mutable_wrench();
  gazebo::msgs::Time * t = _output.mutable_time();
  gazebo::msgs::Vector3d * msgForce = wrench->mutable_force();
  gazebo::msgs::Vector3d * msgTorque = wrench->mutable_torque();

  gazebo::msgs::Set(msgTorque,
    ignition::math::Vector3d(_torque.X(), _torque.Y(), _torque.Z()));
  gazebo::msgs::Set(msgForce,
    ignition::math::Vector3d(_force.X(), _force.Y(), _force.Z()));

  t->set_sec(curTime.sec);
  t->set_nsec(curTime.nsec);
}

GZ_REGISTER_MODEL_PLUGIN(UnderwaterObjectPlugin)

}  //  namespace uuv_gazebo
