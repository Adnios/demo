# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
include CMakeFiles/stac.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stac.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stac.dir/flags.make

CMakeFiles/stac.dir/Class/stack.cpp.o: CMakeFiles/stac.dir/flags.make
CMakeFiles/stac.dir/Class/stack.cpp.o: ../Class/stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stac.dir/Class/stack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stac.dir/Class/stack.cpp.o -c /home/scrutiny/Desktop/C++/demo/Class/stack.cpp

CMakeFiles/stac.dir/Class/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stac.dir/Class/stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/Class/stack.cpp > CMakeFiles/stac.dir/Class/stack.cpp.i

CMakeFiles/stac.dir/Class/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stac.dir/Class/stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/Class/stack.cpp -o CMakeFiles/stac.dir/Class/stack.cpp.s

CMakeFiles/stac.dir/Class/2.stack.cpp.o: CMakeFiles/stac.dir/flags.make
CMakeFiles/stac.dir/Class/2.stack.cpp.o: ../Class/2.stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/stac.dir/Class/2.stack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stac.dir/Class/2.stack.cpp.o -c /home/scrutiny/Desktop/C++/demo/Class/2.stack.cpp

CMakeFiles/stac.dir/Class/2.stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stac.dir/Class/2.stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/Class/2.stack.cpp > CMakeFiles/stac.dir/Class/2.stack.cpp.i

CMakeFiles/stac.dir/Class/2.stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stac.dir/Class/2.stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/Class/2.stack.cpp -o CMakeFiles/stac.dir/Class/2.stack.cpp.s

# Object files for target stac
stac_OBJECTS = \
"CMakeFiles/stac.dir/Class/stack.cpp.o" \
"CMakeFiles/stac.dir/Class/2.stack.cpp.o"

# External object files for target stac
stac_EXTERNAL_OBJECTS =

stac: CMakeFiles/stac.dir/Class/stack.cpp.o
stac: CMakeFiles/stac.dir/Class/2.stack.cpp.o
stac: CMakeFiles/stac.dir/build.make
stac: CMakeFiles/stac.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable stac"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stac.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stac.dir/build: stac

.PHONY : CMakeFiles/stac.dir/build

CMakeFiles/stac.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stac.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stac.dir/clean

CMakeFiles/stac.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/stac.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stac.dir/depend

