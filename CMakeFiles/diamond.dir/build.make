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
CMAKE_SOURCE_DIR = /Users/likejun/ProgrammingBasics/cpp-ch2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/likejun/ProgrammingBasics

# Include any dependencies generated for this target.
include CMakeFiles/diamond.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/diamond.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/diamond.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/diamond.dir/flags.make

CMakeFiles/diamond.dir/diamond.cpp.o: CMakeFiles/diamond.dir/flags.make
CMakeFiles/diamond.dir/diamond.cpp.o: cpp-ch2/diamond.cpp
CMakeFiles/diamond.dir/diamond.cpp.o: CMakeFiles/diamond.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/likejun/ProgrammingBasics/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/diamond.dir/diamond.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/diamond.dir/diamond.cpp.o -MF CMakeFiles/diamond.dir/diamond.cpp.o.d -o CMakeFiles/diamond.dir/diamond.cpp.o -c /Users/likejun/ProgrammingBasics/cpp-ch2/diamond.cpp

CMakeFiles/diamond.dir/diamond.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/diamond.dir/diamond.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/likejun/ProgrammingBasics/cpp-ch2/diamond.cpp > CMakeFiles/diamond.dir/diamond.cpp.i

CMakeFiles/diamond.dir/diamond.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/diamond.dir/diamond.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/likejun/ProgrammingBasics/cpp-ch2/diamond.cpp -o CMakeFiles/diamond.dir/diamond.cpp.s

# Object files for target diamond
diamond_OBJECTS = \
"CMakeFiles/diamond.dir/diamond.cpp.o"

# External object files for target diamond
diamond_EXTERNAL_OBJECTS =

diamond: CMakeFiles/diamond.dir/diamond.cpp.o
diamond: CMakeFiles/diamond.dir/build.make
diamond: CMakeFiles/diamond.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/likejun/ProgrammingBasics/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable diamond"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/diamond.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/diamond.dir/build: diamond
.PHONY : CMakeFiles/diamond.dir/build

CMakeFiles/diamond.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/diamond.dir/cmake_clean.cmake
.PHONY : CMakeFiles/diamond.dir/clean

CMakeFiles/diamond.dir/depend:
	cd /Users/likejun/ProgrammingBasics && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/likejun/ProgrammingBasics/cpp-ch2 /Users/likejun/ProgrammingBasics/cpp-ch2 /Users/likejun/ProgrammingBasics /Users/likejun/ProgrammingBasics /Users/likejun/ProgrammingBasics/CMakeFiles/diamond.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/diamond.dir/depend
