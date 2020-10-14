# Install script for directory: /home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/install/uuv_control_cascaded_pids")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/environment" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/environment" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/uuv_control_cascaded_pids" TYPE DIRECTORY FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/uuv_control_cascaded_pids/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/install/uuv_control_cascaded_pids/lib/python3.8/site-packages/uuv_control_cascaded_pids"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/uuv_control_cascaded_pids" TYPE PROGRAM FILES
    "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/uuv_control_cascaded_pids/AccelerationControl.py"
    "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/uuv_control_cascaded_pids/PositionControl.py"
    "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/uuv_control_cascaded_pids/VelocityControl.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE DIRECTORY FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE DIRECTORY FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE DIRECTORY FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/uuv_control_cascaded_pids")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/uuv_control_cascaded_pids")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/environment" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/environment" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_index/share/ament_index/resource_index/packages/uuv_control_cascaded_pids")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids/cmake" TYPE FILE FILES
    "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_core/uuv_control_cascaded_pidsConfig.cmake"
    "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/ament_cmake_core/uuv_control_cascaded_pidsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_cascaded_pids" TYPE FILE FILES "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/rodrigosleonello/dev_ws/src/uuv_simulator/uuv_control/uuv_control_cascaded_pids/build/uuv_control_cascaded_pids/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
