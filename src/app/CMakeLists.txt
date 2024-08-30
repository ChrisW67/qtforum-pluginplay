cmake_minimum_required(VERSION 3.16)

project(app LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(app
  main.cpp
)
target_include_directories(app INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(app
    Qt${QT_VERSION_MAJOR}::Core
    interfaces
)

include(GNUInstallDirs)
install(TARGETS app
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
