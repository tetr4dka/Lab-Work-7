cmake_minimum_required(VERSION 3.15)


project(LB7)

set(CAMKE_CXX_STANDART 17)
set(CMAKE_CXX_EXTENTIONS OFF)
set(CAMKE_CXX_STANDART_REQUIRED TRUE)

add_executable(test source.cpp inc/Functions.hpp src/Functions.cpp)