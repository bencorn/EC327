cmake_minimum_required(VERSION 3.3)
project(Consecutives)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Consecutives.cpp)

add_executable(Consecutives ${SOURCE_FILES})