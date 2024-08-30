cmake_minimum_required(VERSION 3.16)

project(pluginplay VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
qt_standard_project_setup()

add_subdirectory(src/interfaces)
add_subdirectory(src/plugins)
add_subdirectory(src/app)
