cmake_minimum_required(VERSION 3.3)
project(consecutive)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/consecutive.cpp)

add_executable(consecutives ${SOURCE_FILES})