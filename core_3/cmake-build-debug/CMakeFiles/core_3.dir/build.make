# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuriilebid/CLionProjects/core_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuriilebid/CLionProjects/core_3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/core_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/core_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/core_3.dir/flags.make

CMakeFiles/core_3.dir/main.cpp.o: CMakeFiles/core_3.dir/flags.make
CMakeFiles/core_3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuriilebid/CLionProjects/core_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/core_3.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/core_3.dir/main.cpp.o -c /Users/yuriilebid/CLionProjects/core_3/main.cpp

CMakeFiles/core_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core_3.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuriilebid/CLionProjects/core_3/main.cpp > CMakeFiles/core_3.dir/main.cpp.i

CMakeFiles/core_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core_3.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuriilebid/CLionProjects/core_3/main.cpp -o CMakeFiles/core_3.dir/main.cpp.s

# Object files for target core_3
core_3_OBJECTS = \
"CMakeFiles/core_3.dir/main.cpp.o"

# External object files for target core_3
core_3_EXTERNAL_OBJECTS =

core_3: CMakeFiles/core_3.dir/main.cpp.o
core_3: CMakeFiles/core_3.dir/build.make
core_3: CMakeFiles/core_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuriilebid/CLionProjects/core_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable core_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/core_3.dir/build: core_3

.PHONY : CMakeFiles/core_3.dir/build

CMakeFiles/core_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/core_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/core_3.dir/clean

CMakeFiles/core_3.dir/depend:
	cd /Users/yuriilebid/CLionProjects/core_3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuriilebid/CLionProjects/core_3 /Users/yuriilebid/CLionProjects/core_3 /Users/yuriilebid/CLionProjects/core_3/cmake-build-debug /Users/yuriilebid/CLionProjects/core_3/cmake-build-debug /Users/yuriilebid/CLionProjects/core_3/cmake-build-debug/CMakeFiles/core_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/core_3.dir/depend
