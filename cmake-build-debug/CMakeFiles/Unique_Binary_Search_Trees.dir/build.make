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
include CMakeFiles/Unique_Binary_Search_Trees.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Unique_Binary_Search_Trees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Unique_Binary_Search_Trees.dir/flags.make

CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.o: CMakeFiles/Unique_Binary_Search_Trees.dir/flags.make
CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.o: ../LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.o -c /home/scrutiny/Desktop/C++/demo/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp

CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp > CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.i

CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp -o CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.s

# Object files for target Unique_Binary_Search_Trees
Unique_Binary_Search_Trees_OBJECTS = \
"CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.o"

# External object files for target Unique_Binary_Search_Trees
Unique_Binary_Search_Trees_EXTERNAL_OBJECTS =

Unique_Binary_Search_Trees: CMakeFiles/Unique_Binary_Search_Trees.dir/LeetCode/96.Unique_Binary_Search_Trees/Solution.cpp.o
Unique_Binary_Search_Trees: CMakeFiles/Unique_Binary_Search_Trees.dir/build.make
Unique_Binary_Search_Trees: CMakeFiles/Unique_Binary_Search_Trees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Unique_Binary_Search_Trees"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Unique_Binary_Search_Trees.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Unique_Binary_Search_Trees.dir/build: Unique_Binary_Search_Trees

.PHONY : CMakeFiles/Unique_Binary_Search_Trees.dir/build

CMakeFiles/Unique_Binary_Search_Trees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Unique_Binary_Search_Trees.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Unique_Binary_Search_Trees.dir/clean

CMakeFiles/Unique_Binary_Search_Trees.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/Unique_Binary_Search_Trees.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Unique_Binary_Search_Trees.dir/depend
