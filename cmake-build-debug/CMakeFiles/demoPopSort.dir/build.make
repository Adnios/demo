# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/local/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adnois/CLionProjects/demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adnois/CLionProjects/demo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/demoPopSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demoPopSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demoPopSort.dir/flags.make

CMakeFiles/demoPopSort.dir/Tree.cpp.o: CMakeFiles/demoPopSort.dir/flags.make
CMakeFiles/demoPopSort.dir/Tree.cpp.o: ../Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adnois/CLionProjects/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demoPopSort.dir/Tree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/demoPopSort.dir/Tree.cpp.o -c /home/adnois/CLionProjects/demo/Tree.cpp

CMakeFiles/demoPopSort.dir/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demoPopSort.dir/Tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adnois/CLionProjects/demo/Tree.cpp > CMakeFiles/demoPopSort.dir/Tree.cpp.i

CMakeFiles/demoPopSort.dir/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demoPopSort.dir/Tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adnois/CLionProjects/demo/Tree.cpp -o CMakeFiles/demoPopSort.dir/Tree.cpp.s

# Object files for target demoPopSort
demoPopSort_OBJECTS = \
"CMakeFiles/demoPopSort.dir/Tree.cpp.o"

# External object files for target demoPopSort
demoPopSort_EXTERNAL_OBJECTS =

demoPopSort: CMakeFiles/demoPopSort.dir/Tree.cpp.o
demoPopSort: CMakeFiles/demoPopSort.dir/build.make
demoPopSort: CMakeFiles/demoPopSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adnois/CLionProjects/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable demoPopSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demoPopSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demoPopSort.dir/build: demoPopSort

.PHONY : CMakeFiles/demoPopSort.dir/build

CMakeFiles/demoPopSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demoPopSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demoPopSort.dir/clean

CMakeFiles/demoPopSort.dir/depend:
	cd /home/adnois/CLionProjects/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adnois/CLionProjects/demo /home/adnois/CLionProjects/demo /home/adnois/CLionProjects/demo/cmake-build-debug /home/adnois/CLionProjects/demo/cmake-build-debug /home/adnois/CLionProjects/demo/cmake-build-debug/CMakeFiles/demoPopSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demoPopSort.dir/depend
