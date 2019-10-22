cmake_minimum_required(VERSION 3.5)
project(pconnect VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Release)

add_subdirectory(network_protocols_for_paxos_lib)
add_subdirectory(network_protocols_for_paxos_test)