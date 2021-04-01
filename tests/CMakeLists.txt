############################################################
# Find CMake, Compiler Version, and OS
############################################################
cmake_minimum_required(VERSION 3.15)
project(tests VERSION 1.0.1 DESCRIPTION "tests description")
set(CMAKE_CXX_STANDARD 20)

message(STATUS "CMake Version   : " ${CMAKE_SYSTEM_VERSION})
message(STATUS "Compiler        : " ${CMAKE_CXX_COMPILER})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})
message(STATUS "SYSTEM PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})


