cmake_minimum_required(VERSION 3.6)
project(No163)

set(CMAKE_CXX_FLAGS "-std=c++11 -O2 -g -Wall ${CMAKE_CXX_FLAGS} ")

set(SOURCE_FILES main.cpp)
add_executable(No163 ${SOURCE_FILES})
