# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/chenxiangbo/Software/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/chenxiangbo/Software/clion-2020.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chenxiangbo/CLionProjects/CPlusPlus-base

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPlusPlus_base.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPlusPlus_base.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPlusPlus_base.dir/flags.make

CMakeFiles/CPlusPlus_base.dir/main.cpp.o: CMakeFiles/CPlusPlus_base.dir/flags.make
CMakeFiles/CPlusPlus_base.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPlusPlus_base.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPlusPlus_base.dir/main.cpp.o -c /home/chenxiangbo/CLionProjects/CPlusPlus-base/main.cpp

CMakeFiles/CPlusPlus_base.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPlusPlus_base.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chenxiangbo/CLionProjects/CPlusPlus-base/main.cpp > CMakeFiles/CPlusPlus_base.dir/main.cpp.i

CMakeFiles/CPlusPlus_base.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPlusPlus_base.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chenxiangbo/CLionProjects/CPlusPlus-base/main.cpp -o CMakeFiles/CPlusPlus_base.dir/main.cpp.s

# Object files for target CPlusPlus_base
CPlusPlus_base_OBJECTS = \
"CMakeFiles/CPlusPlus_base.dir/main.cpp.o"

# External object files for target CPlusPlus_base
CPlusPlus_base_EXTERNAL_OBJECTS =

CPlusPlus_base: CMakeFiles/CPlusPlus_base.dir/main.cpp.o
CPlusPlus_base: CMakeFiles/CPlusPlus_base.dir/build.make
CPlusPlus_base: CMakeFiles/CPlusPlus_base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CPlusPlus_base"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPlusPlus_base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPlusPlus_base.dir/build: CPlusPlus_base

.PHONY : CMakeFiles/CPlusPlus_base.dir/build

CMakeFiles/CPlusPlus_base.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPlusPlus_base.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPlusPlus_base.dir/clean

CMakeFiles/CPlusPlus_base.dir/depend:
	cd /home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chenxiangbo/CLionProjects/CPlusPlus-base /home/chenxiangbo/CLionProjects/CPlusPlus-base /home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug /home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug /home/chenxiangbo/CLionProjects/CPlusPlus-base/cmake-build-debug/CMakeFiles/CPlusPlus_base.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPlusPlus_base.dir/depend

