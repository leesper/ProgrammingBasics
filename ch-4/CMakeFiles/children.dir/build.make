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
CMAKE_SOURCE_DIR = /Users/likejun/ProgrammingBasics/ch-4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/likejun/ProgrammingBasics/ch-4

# Include any dependencies generated for this target.
include CMakeFiles/children.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/children.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/children.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/children.dir/flags.make

CMakeFiles/children.dir/children.cpp.o: CMakeFiles/children.dir/flags.make
CMakeFiles/children.dir/children.cpp.o: children.cpp
CMakeFiles/children.dir/children.cpp.o: CMakeFiles/children.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/likejun/ProgrammingBasics/ch-4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/children.dir/children.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/children.dir/children.cpp.o -MF CMakeFiles/children.dir/children.cpp.o.d -o CMakeFiles/children.dir/children.cpp.o -c /Users/likejun/ProgrammingBasics/ch-4/children.cpp

CMakeFiles/children.dir/children.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/children.dir/children.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/likejun/ProgrammingBasics/ch-4/children.cpp > CMakeFiles/children.dir/children.cpp.i

CMakeFiles/children.dir/children.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/children.dir/children.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/likejun/ProgrammingBasics/ch-4/children.cpp -o CMakeFiles/children.dir/children.cpp.s

# Object files for target children
children_OBJECTS = \
"CMakeFiles/children.dir/children.cpp.o"

# External object files for target children
children_EXTERNAL_OBJECTS =

children: CMakeFiles/children.dir/children.cpp.o
children: CMakeFiles/children.dir/build.make
children: CMakeFiles/children.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/likejun/ProgrammingBasics/ch-4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable children"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/children.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/children.dir/build: children
.PHONY : CMakeFiles/children.dir/build

CMakeFiles/children.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/children.dir/cmake_clean.cmake
.PHONY : CMakeFiles/children.dir/clean

CMakeFiles/children.dir/depend:
	cd /Users/likejun/ProgrammingBasics/ch-4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4/CMakeFiles/children.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/children.dir/depend
