# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.23.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.23.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/likejun/ProgrammingBasics/cpp-ch3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/likejun/ProgrammingBasics/cpp-ch3

# Include any dependencies generated for this target.
include CMakeFiles/rightTriangle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rightTriangle.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rightTriangle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rightTriangle.dir/flags.make

CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o: CMakeFiles/rightTriangle.dir/flags.make
CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o: rightTriangle.cpp
CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o: CMakeFiles/rightTriangle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/likejun/ProgrammingBasics/cpp-ch3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o -MF CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o.d -o CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o -c /Users/likejun/ProgrammingBasics/cpp-ch3/rightTriangle.cpp

CMakeFiles/rightTriangle.dir/rightTriangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rightTriangle.dir/rightTriangle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/likejun/ProgrammingBasics/cpp-ch3/rightTriangle.cpp > CMakeFiles/rightTriangle.dir/rightTriangle.cpp.i

CMakeFiles/rightTriangle.dir/rightTriangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rightTriangle.dir/rightTriangle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/likejun/ProgrammingBasics/cpp-ch3/rightTriangle.cpp -o CMakeFiles/rightTriangle.dir/rightTriangle.cpp.s

# Object files for target rightTriangle
rightTriangle_OBJECTS = \
"CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o"

# External object files for target rightTriangle
rightTriangle_EXTERNAL_OBJECTS =

rightTriangle: CMakeFiles/rightTriangle.dir/rightTriangle.cpp.o
rightTriangle: CMakeFiles/rightTriangle.dir/build.make
rightTriangle: CMakeFiles/rightTriangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/likejun/ProgrammingBasics/cpp-ch3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rightTriangle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rightTriangle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rightTriangle.dir/build: rightTriangle
.PHONY : CMakeFiles/rightTriangle.dir/build

CMakeFiles/rightTriangle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rightTriangle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rightTriangle.dir/clean

CMakeFiles/rightTriangle.dir/depend:
	cd /Users/likejun/ProgrammingBasics/cpp-ch3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/likejun/ProgrammingBasics/cpp-ch3 /Users/likejun/ProgrammingBasics/cpp-ch3 /Users/likejun/ProgrammingBasics/cpp-ch3 /Users/likejun/ProgrammingBasics/cpp-ch3 /Users/likejun/ProgrammingBasics/cpp-ch3/CMakeFiles/rightTriangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rightTriangle.dir/depend

