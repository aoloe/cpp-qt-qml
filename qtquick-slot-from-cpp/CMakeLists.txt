cmake_minimum_required(VERSION 3.10.0)

project(qt-quick)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets Qml Quick REQUIRED)

add_executable(qt-quick
    src/main.cpp
    src/backend.h
    src/qml.qrc
)

target_link_libraries(qt-quick
    Qt5::Qml
    Qt5::Quick
    Qt5::Widgets)
