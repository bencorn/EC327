cmake_minimum_required(VERSION 3.3)
project(PSA1_Part2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/PSA1_Part2.cpp)

add_executable(PSA1_Part2 ${SOURCE_FILES})