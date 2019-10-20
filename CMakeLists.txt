cmake_minimum_required(VERSION 3.5)
project(pconnect VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(pconnect STATIC ${SOURCES})