#ifndef UUV_GAZEBO_PLUGINS_UNDERWATER_OBJECT_HPP__
#define UUV_GAZEBO_PLUGINS_UNDERWATER_OBJECT_HPP__

// #include <map>
// #include <string>

// #include <gazebo/gazebo.hh>
// #include <gazebo/msgs/msgs.hh>

// #include <uuv_gazebo_plugins/HydrodynamicModel.hh>
// #include <uuv_gazebo_plugins/Def.hh>

#include <gazebo/common/Plugin.hh>

namespace uuv_gazebo_plugins
{
class UnderwaterObjectPrivate;

class UnderwaterObject : public gazebo::ModelPlugin
{
public:
  /// Constructor
  UnderwaterObject();

  /// Destructor
  virtual ~UnderwaterObject();

  // Documentation inherited.
  void Load(gazebo::physics::WorldPtr _world,
        sdf::ElementPtr _sdf) override;

private:
  std::unique_ptr<UnderwaterObjectPrivate> impl_;  
};

}  //  uuv_gazebo_plugins

#endif  // UUV_GAZEBO_PLUGINS_UNDERWATER_OBJECT_HPP__
