from setuptools import find_packages
from setuptools import setup

setup(
    name='pub_test_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('pub_test_pkg', 'pub_test_pkg.*')),
)
