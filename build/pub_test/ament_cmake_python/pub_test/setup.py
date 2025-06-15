from setuptools import find_packages
from setuptools import setup

setup(
    name='pub_test',
    version='0.0.0',
    packages=find_packages(
        include=('pub_test', 'pub_test.*')),
)
