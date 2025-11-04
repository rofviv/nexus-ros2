from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'manual'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),

        #  incluir la carpeta de launch
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='leyla',
    maintainer_email='lipaleyla9@gmail.com',
    description='Control manual y joystick para Jetpack (Fase 2)',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'control=manual.control:main',
            'joystick=manual.joystick:main',

        ],
    },
)
