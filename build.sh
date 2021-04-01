#!/bin/sh

DIR="/home/arslan/arslan/github/cpp-csv-parser/build"

if [ -d "$DIR" ]; then
  ### Take action if $DIR exists ###
  echo "build directory exits"
  echo "cleaning build directory"
  echo "Installing config files in ${DIR}..."
  cd build && \
          rm -r * && \
          cmake -DCMAKE_BUILD_TYPE=Release .. && \
          make -j7
	  #cd ${PWD}/build
else
  ###  Control will jump here if $DIR does NOT exists ###
  echo "${DIR} not found. Generating new Build Directory......"
  mkdir build && \
          cd build && \
          cmake -DCMAKE_BUILD_TYPE=Release .. && \
          make -j7
	  #cd ${PWD}/build
  #exit 1
fi

