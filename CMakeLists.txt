cmake_minimum_required(VERSION 3.15)
project(reading-csv-cpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(reading-csv-cpp main.cpp)

## Armadillo & OpenCV packages
find_package(OpenCV 4.2 REQUIRED)
find_package(Armadillo 5.2.0 REQUIRED)

#find opencv & armadillo libraries
find_library(ARMADILLO_LIBRARIES armadillo)


#target includes
include_directories(include ${PYTHON_INCLUDE_DIRS} ${ARMADILLO_INCLUDE_DIRS} )

#target link libraries
target_link_libraries(reading-csv-cpp ${PYTHON_LIBRARIES}  ${ARMADILLO_LIBRARIES} )
