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
include CMakeFiles/Not_AC.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Not_AC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Not_AC.dir/flags.make

CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.o: CMakeFiles/Not_AC.dir/flags.make
CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.o: ../2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.o -c /home/scrutiny/Desktop/C++/demo/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp

CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp > CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.i

CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp -o CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.s

# Object files for target Not_AC
Not_AC_OBJECTS = \
"CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.o"

# External object files for target Not_AC
Not_AC_EXTERNAL_OBJECTS =

Not_AC: CMakeFiles/Not_AC.dir/2.Classic_entry/6.GreedyAlgorithm/Not_AC.cpp.o
Not_AC: CMakeFiles/Not_AC.dir/build.make
Not_AC: CMakeFiles/Not_AC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Not_AC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Not_AC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Not_AC.dir/build: Not_AC

.PHONY : CMakeFiles/Not_AC.dir/build

CMakeFiles/Not_AC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Not_AC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Not_AC.dir/clean

CMakeFiles/Not_AC.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/Not_AC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Not_AC.dir/depend

