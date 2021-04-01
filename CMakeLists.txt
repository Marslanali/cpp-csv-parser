############################################################
# Find CMake, Compiler Version, and OS
############################################################
cmake_minimum_required(VERSION 3.15)
project(cpp_csv_parser VERSION 1.0.1 DESCRIPTION "cpp_csv_parser description")
set(CMAKE_CXX_STANDARD 20)

message(STATUS "CMake Version   : " ${CMAKE_SYSTEM_VERSION})
message(STATUS "Compiler        : " ${CMAKE_CXX_COMPILER})
message(STATUS "Operating System: " ${CMAKE_SYSTEM})
message(STATUS "SYSTEM PROCESSOR: " ${CMAKE_SYSTEM_PROCESSOR})

############################################################
# Create a library csv_parser_library  [.so]
############################################################
# Generate the shared library from the library sources
add_library(csv_parser_library SHARED
        ${PROJECT_SOURCE_DIR}/src/cpp_csv_parser.cpp
        )
add_library(cpp_csv_parser::library ALIAS csv_parser_library)


target_include_directories(csv_parser_library
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )

############################################################
# Install
############################################################

# Library
# Note: may not work on windows
install(TARGETS csv_parser_library
        LIBRARY DESTINATION lib)

# Header filesd
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
        DESTINATION include)

# Config
install(FILES cpp_csv_parser.conf
        DESTINATION etc)


############################################################
# Add subdirectory
############################################################
#add_subdirectory(examples)

############################################################
# Find CSV_PARSER_LIBRARY
############################################################
find_library(CSV_PARSER_LIBRARY csv_parser_library)

############################################################
#  Create a executable for csv_parser_test1_binary
############################################################
# Add an executable with the above sources
add_executable(csv_parser_test1_binary
        ${PROJECT_SOURCE_DIR}/tests/csv_parser_test.cpp)

############################################################
# Target Include Directories
############################################################
include_directories(include ${CSV_PARSER_LIBRARY})
#target includes
#target_include_directories(include ${CPP_CPU_USAGE_LIBRARY} )

############################################################
# Target Link Libaries [shared lib .so]
############################################################
target_link_libraries(csv_parser_test1_binary ${CSV_PARSER_LIBRARY})
