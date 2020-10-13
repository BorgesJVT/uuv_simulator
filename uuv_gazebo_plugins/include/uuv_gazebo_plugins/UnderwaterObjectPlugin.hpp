#ifndef UUV_GAZEBO_PLUGINS__UNDERWATER_OBJECT_HPP__
#define UUV_GAZEBO_PLUGINS__UNDERWATER_OBJECT_HPP__

// #include <map>
// #include <string>

// #include <gazebo/gazebo.hh>
// #include <gazebo/msgs/msgs.hh>

// #include <uuv_gazebo_plugins/Def.hh>

#include <gazebo/common/Plugin.hh>
#include <memory>

namespace uuv_gazebo_plugins
{
class UnderwaterObjectPluginPrivate;

class UnderwaterObjectPlugin : public gazebo::ModelPlugin
{
public:
  /// Constructor
  UnderwaterObjectPlugin();

  /// Destructor
  ~UnderwaterObjectPlugin();

protected:
  // Documentation inherited.
  void Load(gazebo::physics::ModelPtr _model, sdf::ElementPtr _sdf) override;

private:
  std::unique_ptr<UnderwaterObjectPluginPrivate> impl_;  
};

}  //  uuv_gazebo

#endif  // UUV_GAZEBO_PLUGINS__UNDERWATER_OBJECT_HPP__
