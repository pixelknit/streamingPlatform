# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/felipeserver/Documents/development/cpp/dev/streamingPlatform

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build

# Include any dependencies generated for this target.
include source/CMakeFiles/platformlib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include source/CMakeFiles/platformlib.dir/compiler_depend.make

# Include the progress variables for this target.
include source/CMakeFiles/platformlib.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/platformlib.dir/flags.make

source/CMakeFiles/platformlib.dir/platform.cpp.o: source/CMakeFiles/platformlib.dir/flags.make
source/CMakeFiles/platformlib.dir/platform.cpp.o: ../source/platform.cpp
source/CMakeFiles/platformlib.dir/platform.cpp.o: source/CMakeFiles/platformlib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/platformlib.dir/platform.cpp.o"
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/CMakeFiles/platformlib.dir/platform.cpp.o -MF CMakeFiles/platformlib.dir/platform.cpp.o.d -o CMakeFiles/platformlib.dir/platform.cpp.o -c /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/source/platform.cpp

source/CMakeFiles/platformlib.dir/platform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platformlib.dir/platform.cpp.i"
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/source/platform.cpp > CMakeFiles/platformlib.dir/platform.cpp.i

source/CMakeFiles/platformlib.dir/platform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platformlib.dir/platform.cpp.s"
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/source/platform.cpp -o CMakeFiles/platformlib.dir/platform.cpp.s

# Object files for target platformlib
platformlib_OBJECTS = \
"CMakeFiles/platformlib.dir/platform.cpp.o"

# External object files for target platformlib
platformlib_EXTERNAL_OBJECTS =

source/libplatformlib.a: source/CMakeFiles/platformlib.dir/platform.cpp.o
source/libplatformlib.a: source/CMakeFiles/platformlib.dir/build.make
source/libplatformlib.a: source/CMakeFiles/platformlib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libplatformlib.a"
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source && $(CMAKE_COMMAND) -P CMakeFiles/platformlib.dir/cmake_clean_target.cmake
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/platformlib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/platformlib.dir/build: source/libplatformlib.a
.PHONY : source/CMakeFiles/platformlib.dir/build

source/CMakeFiles/platformlib.dir/clean:
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source && $(CMAKE_COMMAND) -P CMakeFiles/platformlib.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/platformlib.dir/clean

source/CMakeFiles/platformlib.dir/depend:
	cd /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felipeserver/Documents/development/cpp/dev/streamingPlatform /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/source /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source /home/felipeserver/Documents/development/cpp/dev/streamingPlatform/build/source/CMakeFiles/platformlib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/platformlib.dir/depend

