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
include CMakeFiles/UncommonWordsfromTwoSentences.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UncommonWordsfromTwoSentences.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UncommonWordsfromTwoSentences.dir/flags.make

CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.o: CMakeFiles/UncommonWordsfromTwoSentences.dir/flags.make
CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.o: ../LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.o -c /home/scrutiny/Desktop/C++/demo/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp

CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp > CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.i

CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp -o CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.s

# Object files for target UncommonWordsfromTwoSentences
UncommonWordsfromTwoSentences_OBJECTS = \
"CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.o"

# External object files for target UncommonWordsfromTwoSentences
UncommonWordsfromTwoSentences_EXTERNAL_OBJECTS =

UncommonWordsfromTwoSentences: CMakeFiles/UncommonWordsfromTwoSentences.dir/LeetCode/884.UncommonWordsfromTwoSentences/Solution.cpp.o
UncommonWordsfromTwoSentences: CMakeFiles/UncommonWordsfromTwoSentences.dir/build.make
UncommonWordsfromTwoSentences: CMakeFiles/UncommonWordsfromTwoSentences.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UncommonWordsfromTwoSentences"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UncommonWordsfromTwoSentences.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UncommonWordsfromTwoSentences.dir/build: UncommonWordsfromTwoSentences

.PHONY : CMakeFiles/UncommonWordsfromTwoSentences.dir/build

CMakeFiles/UncommonWordsfromTwoSentences.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UncommonWordsfromTwoSentences.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UncommonWordsfromTwoSentences.dir/clean

CMakeFiles/UncommonWordsfromTwoSentences.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/UncommonWordsfromTwoSentences.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UncommonWordsfromTwoSentences.dir/depend
