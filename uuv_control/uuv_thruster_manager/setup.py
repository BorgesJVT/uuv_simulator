import os
from glob import glob
from setuptools import setup

package_name = 'uuv_thruster_manager'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'urdf'), glob('urdf/*.urdf')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rodrigosleonello',
    maintainer_email='rodrigosleonello@gmail.com',
    description='The thruster manager package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'thruster_custom_node = uuv_thruster_manager.thruster_custom',
            'thruster_proportional_node = uuv_thruster_manager.thruster_proportional',
            'thruster_node = uuv_thruster_manager.thruster',
            'thruster_manager_node = uuv_thruster_manager.thruster_manager',
            'thruster_allocator_node = uuv_thruster_manager.thruster_allocator:main'
        ],
    },
)
