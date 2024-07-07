cmake_minimum_required(VERSION 3.1)

project(Exercise00 VERSION 1.0 DESCRIPTION "Mod01-Ex00" LANGUAGES CXX)

add_library(CarLib STATIC Car.cpp Car.h)

add_executable(Exercise00 main.cpp)
target_link_libraries(Exercise00 PUBLIC CarLib)
