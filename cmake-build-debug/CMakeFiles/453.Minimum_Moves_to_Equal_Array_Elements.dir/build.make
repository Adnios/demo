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
include CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/flags.make

CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.o: CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/flags.make
CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.o: ../LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.o -c /home/scrutiny/Desktop/C++/demo/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp

CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp > CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.i

CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp -o CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.s

# Object files for target 453.Minimum_Moves_to_Equal_Array_Elements
453_Minimum_Moves_to_Equal_Array_Elements_OBJECTS = \
"CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.o"

# External object files for target 453.Minimum_Moves_to_Equal_Array_Elements
453_Minimum_Moves_to_Equal_Array_Elements_EXTERNAL_OBJECTS =

453.Minimum_Moves_to_Equal_Array_Elements: CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/LeetCode/453.Minimum_Moves_to_Equal_Array_Elements.cpp.o
453.Minimum_Moves_to_Equal_Array_Elements: CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/build.make
453.Minimum_Moves_to_Equal_Array_Elements: CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 453.Minimum_Moves_to_Equal_Array_Elements"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/build: 453.Minimum_Moves_to_Equal_Array_Elements

.PHONY : CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/build

CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/cmake_clean.cmake
.PHONY : CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/clean

CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/453.Minimum_Moves_to_Equal_Array_Elements.dir/depend

