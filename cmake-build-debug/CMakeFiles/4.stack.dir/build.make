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
include CMakeFiles/4.stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4.stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4.stack.dir/flags.make

CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.o: CMakeFiles/4.stack.dir/flags.make
CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.o: ../Class/basic/4.stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.o -c /home/scrutiny/Desktop/C++/demo/Class/basic/4.stack.cpp

CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/Class/basic/4.stack.cpp > CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.i

CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/Class/basic/4.stack.cpp -o CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.s

# Object files for target 4.stack
4_stack_OBJECTS = \
"CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.o"

# External object files for target 4.stack
4_stack_EXTERNAL_OBJECTS =

4.stack: CMakeFiles/4.stack.dir/Class/basic/4.stack.cpp.o
4.stack: CMakeFiles/4.stack.dir/build.make
4.stack: CMakeFiles/4.stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4.stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4.stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4.stack.dir/build: 4.stack

.PHONY : CMakeFiles/4.stack.dir/build

CMakeFiles/4.stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4.stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4.stack.dir/clean

CMakeFiles/4.stack.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/4.stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/4.stack.dir/depend

