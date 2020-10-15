import os
from glob import glob
from setuptools import setup

PACKAGE_NAME = 'uuv_control_cascaded_pids'

setup(
    name=PACKAGE_NAME,
    version='0.0.1',
    packages=[PACKAGE_NAME],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + PACKAGE_NAME]),
        ('share/' + PACKAGE_NAME, ['package.xml']),
        (os.path.join('share', PACKAGE_NAME, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'PIDRegulator = uuv_control_cascaded_pids.PIDRegulator',
            'acc_control = uuv_control_cascaded_pids.AccelerationControl:main',
            'vel_control = uuv_control_cascaded_pids.VelocityControl:main',
            'pos_control = uuv_control_cascaded_pids.PositionControl:main',            
        ],
    },
)
