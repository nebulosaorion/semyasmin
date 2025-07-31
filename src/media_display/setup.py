from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'media_display'

setup(
    name=package_name,
    version='0.0.0',
    packages=['media_display'],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='evangelista', 
    maintainer_email='evangelista@furg.br', 
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    
    entry_points={
        'console_scripts': [
            'display_node = media_display.display_node:main',
            
        ],
    },
)