from setuptools import setup
import os
from glob import glob

package_name = 'media_display'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='evangelista',
    maintainer_email='evangelista@furg.br',
    description='Um pacote para exibir diferentes tipos de mídia via ROS2.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'display_node = media_display.display_node:main',
            'test_publisher = media_display.test_image_publisher:main',
        ],
    },
)
