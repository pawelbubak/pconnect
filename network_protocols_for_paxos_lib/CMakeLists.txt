cmake_minimum_required(VERSION 3.5)
project(network_protocols_for_paxos_lib VERSION 0.1 LANGUAGES CXX)

include_directories(include)

file(GLOB CORE "src/core/*.cpp")
file(GLOB OTHERS "src/*.cpp")

add_library(network_protocols_for_paxos_lib STATIC ${CORE} ${OTHERS})
target_include_directories(network_protocols_for_paxos_lib PUBLIC "include")