from setuptools import find_packages, setup

package_name = 'my_turtle_action'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='boris',
    maintainer_email='boris@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'turtle_action_server = my_turtle_action.turtle_action_server:main',
            'turtle_action_client = my_turtle_action.turtle_action_client:main',
            'coordinate_publisher = my_turtle_action.coordinate_publisher:main',
        ],
    },
)
