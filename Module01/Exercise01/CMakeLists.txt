cmake_minimum_required(VERSION 3.5)

project(Exercise01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise01 main.cpp
    Car.h Car.cpp
    SportsCar.h SportsCar.cpp)

include(GNUInstallDirs)
install(TARGETS Exercise01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
