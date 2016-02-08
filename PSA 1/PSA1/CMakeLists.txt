cmake_minimum_required(VERSION 3.3)
project(PSA1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/divisorsum.cpp)

add_executable(PSA1 ${SOURCE_FILES})