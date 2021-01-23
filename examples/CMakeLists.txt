############################################################
# Find CMake, Compiler Version, and OS
############################################################
cmake_minimum_required(VERSION 3.15)
project(csv_parser_example VERSION 1.0.1 DESCRIPTION "csv_parser_example description")
set(CMAKE_CXX_STANDARD 20)

message(STATUS "CMake Version   : " ${CMAKE_SYSTEM_VERSION})
message(STATUS "Compiler        : " ${CMAKE_CXX_COMPILER})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})
message(STATUS "SYSTEM PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})

############################################################
# Find CSV_PARSER_LIBRARY
############################################################
find_library(CSV_PARSER_LIBRARY csv_parser_library)

############################################################
#  Create a executable for csv_parser_test1_binary
############################################################
# Add an executable with the above sources
add_executable(csv_parser_test1_binary csv_parser_test.cpp)

############################################################
# Target Include Directories
############################################################
include_directories(include ${CSV_PARSER_LIBRARY} )
#target includes
#target_include_directories(include ${CPP_CPU_USAGE_LIBRARY} )

############################################################
# Target Link Libaries [shared lib .so]
############################################################
target_link_libraries(csv_parser_test1_binary  ${CSV_PARSER_LIBRARY} )