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
include CMakeFiles/CF372C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CF372C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CF372C.dir/flags.make

CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.o: CMakeFiles/CF372C.dir/flags.make
CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.o: ../Class/update/5.DP/CF372C.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.o -c /home/scrutiny/Desktop/C++/demo/Class/update/5.DP/CF372C.cpp

CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/Class/update/5.DP/CF372C.cpp > CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.i

CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/Class/update/5.DP/CF372C.cpp -o CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.s

# Object files for target CF372C
CF372C_OBJECTS = \
"CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.o"

# External object files for target CF372C
CF372C_EXTERNAL_OBJECTS =

CF372C: CMakeFiles/CF372C.dir/Class/update/5.DP/CF372C.cpp.o
CF372C: CMakeFiles/CF372C.dir/build.make
CF372C: CMakeFiles/CF372C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CF372C"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CF372C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CF372C.dir/build: CF372C

.PHONY : CMakeFiles/CF372C.dir/build

CMakeFiles/CF372C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CF372C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CF372C.dir/clean

CMakeFiles/CF372C.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/CF372C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CF372C.dir/depend

