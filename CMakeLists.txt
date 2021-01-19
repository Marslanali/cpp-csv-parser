cmake_minimum_required(VERSION 3.15)
project(reading-csv-cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread ")

add_executable(testcsv-example1
        ${PROJECT_SOURCE_DIR}/examples/testcsv-example1.cpp
        ${PROJECT_SOURCE_DIR}/src/testcsvclass.cpp
        ${PROJECT_SOURCE_DIR}/include/testcsvclass.h )

add_executable(testcsv-example2
        ${PROJECT_SOURCE_DIR}/examples/testcsv-example2.cpp
        ${PROJECT_SOURCE_DIR}/src/testcsvclass.cpp
        ${PROJECT_SOURCE_DIR}/include/testcsvclass.h )
#
#add_executable(testcsv-example3
#        ${PROJECT_SOURCE_DIR}/examples/testcsv-example3.cpp
#        )

## Armadillo & OpenCV packages
#find_package(OpenCV 4.2 REQUIRED)
find_package(Armadillo 5.2.0 REQUIRED)

#find opencv & armadillo libraries
find_library(ARMADILLO_LIBRARIES armadillo)

#target includes
include_directories(include ${PYTHON_INCLUDE_DIRS} ${ARMADILLO_INCLUDE_DIRS} )

#target link libraries
target_link_libraries(testcsv-example1 ${PYTHON_LIBRARIES}  ${ARMADILLO_LIBRARIES} )

#target link libraries
target_link_libraries(testcsv-example2 ${PYTHON_LIBRARIES}  ${ARMADILLO_LIBRARIES} )
