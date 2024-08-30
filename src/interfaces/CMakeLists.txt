
set(CMAKE_AUTOMOC ON)

qt_add_library(interfaces STATIC
    senderinterface.h
    senderinterface.cpp
    receiverinterface.h
    receiverinterface.cpp
)
target_link_libraries(interfaces PRIVATE Qt6::Core)
target_include_directories(interfaces INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
