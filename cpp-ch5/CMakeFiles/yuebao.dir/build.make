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
CMAKE_SOURCE_DIR = /Users/likejun/ProgrammingBasics/cpp-ch5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/likejun/ProgrammingBasics/cpp-ch5

# Include any dependencies generated for this target.
include CMakeFiles/yuebao.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/yuebao.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/yuebao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/yuebao.dir/flags.make

CMakeFiles/yuebao.dir/yuebao.cpp.o: CMakeFiles/yuebao.dir/flags.make
CMakeFiles/yuebao.dir/yuebao.cpp.o: yuebao.cpp
CMakeFiles/yuebao.dir/yuebao.cpp.o: CMakeFiles/yuebao.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/likejun/ProgrammingBasics/cpp-ch5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/yuebao.dir/yuebao.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/yuebao.dir/yuebao.cpp.o -MF CMakeFiles/yuebao.dir/yuebao.cpp.o.d -o CMakeFiles/yuebao.dir/yuebao.cpp.o -c /Users/likejun/ProgrammingBasics/cpp-ch5/yuebao.cpp

CMakeFiles/yuebao.dir/yuebao.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yuebao.dir/yuebao.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/likejun/ProgrammingBasics/cpp-ch5/yuebao.cpp > CMakeFiles/yuebao.dir/yuebao.cpp.i

CMakeFiles/yuebao.dir/yuebao.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yuebao.dir/yuebao.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/likejun/ProgrammingBasics/cpp-ch5/yuebao.cpp -o CMakeFiles/yuebao.dir/yuebao.cpp.s

# Object files for target yuebao
yuebao_OBJECTS = \
"CMakeFiles/yuebao.dir/yuebao.cpp.o"

# External object files for target yuebao
yuebao_EXTERNAL_OBJECTS =

yuebao: CMakeFiles/yuebao.dir/yuebao.cpp.o
yuebao: CMakeFiles/yuebao.dir/build.make
yuebao: CMakeFiles/yuebao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/likejun/ProgrammingBasics/cpp-ch5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable yuebao"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yuebao.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/yuebao.dir/build: yuebao
.PHONY : CMakeFiles/yuebao.dir/build

CMakeFiles/yuebao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/yuebao.dir/cmake_clean.cmake
.PHONY : CMakeFiles/yuebao.dir/clean

CMakeFiles/yuebao.dir/depend:
	cd /Users/likejun/ProgrammingBasics/cpp-ch5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/likejun/ProgrammingBasics/cpp-ch5 /Users/likejun/ProgrammingBasics/cpp-ch5 /Users/likejun/ProgrammingBasics/cpp-ch5 /Users/likejun/ProgrammingBasics/cpp-ch5 /Users/likejun/ProgrammingBasics/cpp-ch5/CMakeFiles/yuebao.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/yuebao.dir/depend

