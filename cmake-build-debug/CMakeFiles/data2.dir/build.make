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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/scrutiny/Desktop/C++/demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/scrutiny/Desktop/C++/demo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/data2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/data2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/data2.dir/flags.make

CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.o: CMakeFiles/data2.dir/flags.make
CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.o: ../2.Classic_entry/2.data/data2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.o -c /home/scrutiny/Desktop/C++/demo/2.Classic_entry/2.data/data2.cpp

CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/2.Classic_entry/2.data/data2.cpp > CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.i

CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/2.Classic_entry/2.data/data2.cpp -o CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.s

# Object files for target data2
data2_OBJECTS = \
"CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.o"

# External object files for target data2
data2_EXTERNAL_OBJECTS =

data2: CMakeFiles/data2.dir/2.Classic_entry/2.data/data2.cpp.o
data2: CMakeFiles/data2.dir/build.make
data2: CMakeFiles/data2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable data2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/data2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/data2.dir/build: data2

.PHONY : CMakeFiles/data2.dir/build

CMakeFiles/data2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/data2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/data2.dir/clean

CMakeFiles/data2.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/data2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/data2.dir/depend

