cmake_minimum_required(VERSION 3.24)
project(ThreeTargetSum)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ThreeTargetSum
        3SumTarget.cpp
        3SumTarget.h
        main.cpp)
