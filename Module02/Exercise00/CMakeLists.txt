cmake_minimum_required(VERSION 3.5)

project(Exercise00 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise00 main.cpp
    Car.h Car.cpp
    SportsCar.h SportsCar.cpp
    Seat.h )

include(GNUInstallDirs)
install(TARGETS Exercise00
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
