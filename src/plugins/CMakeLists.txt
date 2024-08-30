
set(CMAKE_AUTOMOC ON)

add_compile_definitions(PLUGIN_LIBARY=1)

add_custom_target(plugin_misc SOURCES
    plugin_global.h
)

qt_add_library(basicsender SHARED
    basicsender.h
    basicsender.cpp
    basicsender.json
)
target_link_libraries(basicsender PRIVATE Qt6::Core interfaces)
target_include_directories(basicsender INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} interfaces)

qt_add_library(basicreceiver SHARED
    basicreceiver.h
    basicreceiver.cpp
    basicreceiver.json
)
target_link_libraries(basicreceiver PRIVATE Qt6::Core interfaces)
target_include_directories(basicreceiver INTERFACE ${CMAKE_CURRENT_SOURCE_DIR} interfaces)

