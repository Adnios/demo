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
include CMakeFiles/tianda2019-2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tianda2019-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tianda2019-2.dir/flags.make

CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.o: CMakeFiles/tianda2019-2.dir/flags.make
CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.o: ../preparation/tianda/2019-2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.o -c /home/scrutiny/Desktop/C++/demo/preparation/tianda/2019-2.cpp

CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/preparation/tianda/2019-2.cpp > CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.i

CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/preparation/tianda/2019-2.cpp -o CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.s

# Object files for target tianda2019-2
tianda2019__2_OBJECTS = \
"CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.o"

# External object files for target tianda2019-2
tianda2019__2_EXTERNAL_OBJECTS =

tianda2019-2: CMakeFiles/tianda2019-2.dir/preparation/tianda/2019-2.cpp.o
tianda2019-2: CMakeFiles/tianda2019-2.dir/build.make
tianda2019-2: CMakeFiles/tianda2019-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tianda2019-2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tianda2019-2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tianda2019-2.dir/build: tianda2019-2

.PHONY : CMakeFiles/tianda2019-2.dir/build

CMakeFiles/tianda2019-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tianda2019-2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tianda2019-2.dir/clean

CMakeFiles/tianda2019-2.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/tianda2019-2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tianda2019-2.dir/depend
