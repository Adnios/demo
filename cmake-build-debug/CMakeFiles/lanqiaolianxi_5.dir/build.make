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
include CMakeFiles/lanqiaolianxi_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lanqiaolianxi_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lanqiaolianxi_5.dir/flags.make

CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.o: CMakeFiles/lanqiaolianxi_5.dir/flags.make
CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.o: ../Class/pujizu/lanqiao_lianxi/5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.o -c /home/scrutiny/Desktop/C++/demo/Class/pujizu/lanqiao_lianxi/5.cpp

CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/scrutiny/Desktop/C++/demo/Class/pujizu/lanqiao_lianxi/5.cpp > CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.i

CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/scrutiny/Desktop/C++/demo/Class/pujizu/lanqiao_lianxi/5.cpp -o CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.s

# Object files for target lanqiaolianxi_5
lanqiaolianxi_5_OBJECTS = \
"CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.o"

# External object files for target lanqiaolianxi_5
lanqiaolianxi_5_EXTERNAL_OBJECTS =

lanqiaolianxi_5: CMakeFiles/lanqiaolianxi_5.dir/Class/pujizu/lanqiao_lianxi/5.cpp.o
lanqiaolianxi_5: CMakeFiles/lanqiaolianxi_5.dir/build.make
lanqiaolianxi_5: CMakeFiles/lanqiaolianxi_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lanqiaolianxi_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lanqiaolianxi_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lanqiaolianxi_5.dir/build: lanqiaolianxi_5

.PHONY : CMakeFiles/lanqiaolianxi_5.dir/build

CMakeFiles/lanqiaolianxi_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lanqiaolianxi_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lanqiaolianxi_5.dir/clean

CMakeFiles/lanqiaolianxi_5.dir/depend:
	cd /home/scrutiny/Desktop/C++/demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug /home/scrutiny/Desktop/C++/demo/cmake-build-debug/CMakeFiles/lanqiaolianxi_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lanqiaolianxi_5.dir/depend

