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
include CMakeFiles/joseph.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/joseph.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/joseph.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/joseph.dir/flags.make

CMakeFiles/joseph.dir/joseph.cpp.o: CMakeFiles/joseph.dir/flags.make
CMakeFiles/joseph.dir/joseph.cpp.o: joseph.cpp
CMakeFiles/joseph.dir/joseph.cpp.o: CMakeFiles/joseph.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/likejun/ProgrammingBasics/ch-4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/joseph.dir/joseph.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/joseph.dir/joseph.cpp.o -MF CMakeFiles/joseph.dir/joseph.cpp.o.d -o CMakeFiles/joseph.dir/joseph.cpp.o -c /Users/likejun/ProgrammingBasics/ch-4/joseph.cpp

CMakeFiles/joseph.dir/joseph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/joseph.dir/joseph.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/likejun/ProgrammingBasics/ch-4/joseph.cpp > CMakeFiles/joseph.dir/joseph.cpp.i

CMakeFiles/joseph.dir/joseph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/joseph.dir/joseph.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/likejun/ProgrammingBasics/ch-4/joseph.cpp -o CMakeFiles/joseph.dir/joseph.cpp.s

# Object files for target joseph
joseph_OBJECTS = \
"CMakeFiles/joseph.dir/joseph.cpp.o"

# External object files for target joseph
joseph_EXTERNAL_OBJECTS =

joseph: CMakeFiles/joseph.dir/joseph.cpp.o
joseph: CMakeFiles/joseph.dir/build.make
joseph: CMakeFiles/joseph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/likejun/ProgrammingBasics/ch-4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable joseph"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/joseph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/joseph.dir/build: joseph
.PHONY : CMakeFiles/joseph.dir/build

CMakeFiles/joseph.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/joseph.dir/cmake_clean.cmake
.PHONY : CMakeFiles/joseph.dir/clean

CMakeFiles/joseph.dir/depend:
	cd /Users/likejun/ProgrammingBasics/ch-4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4 /Users/likejun/ProgrammingBasics/ch-4/CMakeFiles/joseph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/joseph.dir/depend
