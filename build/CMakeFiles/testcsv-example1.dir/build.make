# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/arslanali/CLionProjects/reading-csv-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arslanali/CLionProjects/reading-csv-cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/testcsv-example1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testcsv-example1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testcsv-example1.dir/flags.make

CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.o: CMakeFiles/testcsv-example1.dir/flags.make
CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.o: ../examples/testcsv-example1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arslanali/CLionProjects/reading-csv-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.o -c /home/arslanali/CLionProjects/reading-csv-cpp/examples/testcsv-example1.cpp

CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arslanali/CLionProjects/reading-csv-cpp/examples/testcsv-example1.cpp > CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.i

CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arslanali/CLionProjects/reading-csv-cpp/examples/testcsv-example1.cpp -o CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.s

CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.o: CMakeFiles/testcsv-example1.dir/flags.make
CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.o: ../src/testcsvclass.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arslanali/CLionProjects/reading-csv-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.o -c /home/arslanali/CLionProjects/reading-csv-cpp/src/testcsvclass.cpp

CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arslanali/CLionProjects/reading-csv-cpp/src/testcsvclass.cpp > CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.i

CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arslanali/CLionProjects/reading-csv-cpp/src/testcsvclass.cpp -o CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.s

# Object files for target testcsv-example1
testcsv__example1_OBJECTS = \
"CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.o" \
"CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.o"

# External object files for target testcsv-example1
testcsv__example1_EXTERNAL_OBJECTS =

testcsv-example1: CMakeFiles/testcsv-example1.dir/examples/testcsv-example1.cpp.o
testcsv-example1: CMakeFiles/testcsv-example1.dir/src/testcsvclass.cpp.o
testcsv-example1: CMakeFiles/testcsv-example1.dir/build.make
testcsv-example1: /usr/lib/x86_64-linux-gnu/libarmadillo.so
testcsv-example1: CMakeFiles/testcsv-example1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arslanali/CLionProjects/reading-csv-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testcsv-example1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testcsv-example1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testcsv-example1.dir/build: testcsv-example1

.PHONY : CMakeFiles/testcsv-example1.dir/build

CMakeFiles/testcsv-example1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testcsv-example1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testcsv-example1.dir/clean

CMakeFiles/testcsv-example1.dir/depend:
	cd /home/arslanali/CLionProjects/reading-csv-cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arslanali/CLionProjects/reading-csv-cpp /home/arslanali/CLionProjects/reading-csv-cpp /home/arslanali/CLionProjects/reading-csv-cpp/build /home/arslanali/CLionProjects/reading-csv-cpp/build /home/arslanali/CLionProjects/reading-csv-cpp/build/CMakeFiles/testcsv-example1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testcsv-example1.dir/depend

