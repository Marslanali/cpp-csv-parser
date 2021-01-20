############################################################
# Find CMake, Compiler Version, and OS
############################################################
cmake_minimum_required(VERSION 3.15)
project(csv_parser VERSION 1.0.1 DESCRIPTION "csv_parser description")
set(CMAKE_CXX_STANDARD 20)

message(STATUS "CMake version   : " ${CMAKE_SYSTEM_VERSION})
message(STATUS "Compiler        : " ${CMAKE_CXX_COMPILER})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})
message(STATUS "SYSTEM PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})

############################################################
# Create a library csv_parser_library  [.so]
############################################################
#Generate the shared library from the library sources
add_library(csv_parser_library SHARED
        ${PROJECT_SOURCE_DIR}/src/csv_parser.cpp
        )
add_library(csv_parser::library ALIAS csv_parser_library)


target_include_directories(csv_parser_library
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
#  Create a executable for cpp-cpu-usage
############################################################
# Add an executable with the above sources
add_executable(csv_parser_binary
        ${PROJECT_SOURCE_DIR}/test/csv_parser_test1.cpp
        )

############################################################
# Target Link Libaries
############################################################
# link the csv_parser_library target with the cpp-cpu-usage target
target_link_libraries(csv_parser_binary
        PRIVATE
        csv_parser::library
        )

############################################################
# Install
############################################################

# Binaries
install(TARGETS csv_parser_binary
        DESTINATION bin)

# Library
# Note: may not work on windows
install(TARGETS csv_parser_library
        LIBRARY DESTINATION lib)

# Header files
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
        DESTINATION include)

# Config
install(FILES csv_parser.conf
        DESTINATION etc)