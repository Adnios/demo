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
include CMakeFiles/CombinationSumIII.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CombinationSumIII.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CombinationSumIII.dir/flags.make

CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.o: CMakeFiles/CombinationSumIII.dir/flags.make
CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.o: ../LeetCode/216.CombinationSumIII/Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.o -c /home/scrutiny/Desktop/C++/demo/LeetCode/216.CombinationSumIII/Solution.cpp

CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/LeetCode/216.CombinationSumIII/Solution.cpp > CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.i

CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/LeetCode/216.CombinationSumIII/Solution.cpp -o CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.s

# Object files for target CombinationSumIII
CombinationSumIII_OBJECTS = \
"CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.o"

# External object files for target CombinationSumIII
CombinationSumIII_EXTERNAL_OBJECTS =

CombinationSumIII: CMakeFiles/CombinationSumIII.dir/LeetCode/216.CombinationSumIII/Solution.cpp.o
CombinationSumIII: CMakeFiles/CombinationSumIII.dir/build.make
CombinationSumIII: CMakeFiles/CombinationSumIII.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CombinationSumIII"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CombinationSumIII.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CombinationSumIII.dir/build: CombinationSumIII

.PHONY : CMakeFiles/CombinationSumIII.dir/build

CMakeFiles/CombinationSumIII.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CombinationSumIII.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CombinationSumIII.dir/clean

CMakeFiles/CombinationSumIII.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/CombinationSumIII.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CombinationSumIII.dir/depend

