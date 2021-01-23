# cpp-csv-parser

This repository is C++ implementation for READ/Write comma-separated values file (CSV). 

## Files

```
.
├── src
├── include
├── examples
├── CMakeList.txt
├── .clang-format
└── README.md
```
## Dependencies

* [GCC](https://gcc.gnu.org/)   

* [CMake](https://cmake.org/) 

* [BOOST](https://cmake.org/)  

## Dependencies Installation

* [CMake](https://cmake.org/)   Version 3.17.5

Install [CMake](https://cmake.org/) from source. 

```bash
sudo apt-get install -y -q wget
wget https://cmake.org/files/v3.17/cmake-3.17.5.tar.gz 
tar xzf cmake-3.17.5.tar.gz 
cd cmake-3.17.5 
sudo apt install libssl-dev 
./bootstrap -- -DCMAKE_BUILD_TYPE:STRING=Release 
make -j4 # where j is the number of core
sudo make install
```

* [GCC](https://gcc.gnu.org/)   

Install [GCC](https://gcc.gnu.org/) from package manager. 


```bash
sudo apt update && sudo apt-get install build-essential 
```


* [BOOST](https://gcc.gnu.org/)   

Install [BOOST](https://gcc.gnu.org/) from package manager. 

```bash
sudo apt-get install libboost-dev
```

## BUILD and Install csv_parser_library

The code can be compiled using GCC on any Linux System.

To build run the following command in terminal:

```bash
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make -j4 # where j is no. of cores
sudo make install
```

## Run Examples

```bash
cd build
./csv_parser_test1_binary ~/path_to_csv
```

## To-Do List:

- :ballot_box_with_check:  Refactor src/include
- :negative_squared_cross_mark: Add GTest
- :negative_squared_cross_mark: Add Docker Image Support
- :negative_squared_cross_mark: Refactor CMakeLists.txt
