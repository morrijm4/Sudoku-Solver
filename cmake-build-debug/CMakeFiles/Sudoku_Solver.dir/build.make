# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/matthew/projects/CLionProjects/Sudoku-Solver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sudoku_Solver.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sudoku_Solver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sudoku_Solver.dir/flags.make

CMakeFiles/Sudoku_Solver.dir/main.cpp.o: CMakeFiles/Sudoku_Solver.dir/flags.make
CMakeFiles/Sudoku_Solver.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sudoku_Solver.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sudoku_Solver.dir/main.cpp.o -c /Users/matthew/projects/CLionProjects/Sudoku-Solver/main.cpp

CMakeFiles/Sudoku_Solver.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sudoku_Solver.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthew/projects/CLionProjects/Sudoku-Solver/main.cpp > CMakeFiles/Sudoku_Solver.dir/main.cpp.i

CMakeFiles/Sudoku_Solver.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sudoku_Solver.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthew/projects/CLionProjects/Sudoku-Solver/main.cpp -o CMakeFiles/Sudoku_Solver.dir/main.cpp.s

CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.o: CMakeFiles/Sudoku_Solver.dir/flags.make
CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.o: ../src/Sudoku.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.o -c /Users/matthew/projects/CLionProjects/Sudoku-Solver/src/Sudoku.cpp

CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/matthew/projects/CLionProjects/Sudoku-Solver/src/Sudoku.cpp > CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.i

CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/matthew/projects/CLionProjects/Sudoku-Solver/src/Sudoku.cpp -o CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.s

# Object files for target Sudoku_Solver
Sudoku_Solver_OBJECTS = \
"CMakeFiles/Sudoku_Solver.dir/main.cpp.o" \
"CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.o"

# External object files for target Sudoku_Solver
Sudoku_Solver_EXTERNAL_OBJECTS =

Sudoku_Solver: CMakeFiles/Sudoku_Solver.dir/main.cpp.o
Sudoku_Solver: CMakeFiles/Sudoku_Solver.dir/src/Sudoku.cpp.o
Sudoku_Solver: CMakeFiles/Sudoku_Solver.dir/build.make
Sudoku_Solver: CMakeFiles/Sudoku_Solver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Sudoku_Solver"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sudoku_Solver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sudoku_Solver.dir/build: Sudoku_Solver

.PHONY : CMakeFiles/Sudoku_Solver.dir/build

CMakeFiles/Sudoku_Solver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sudoku_Solver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sudoku_Solver.dir/clean

CMakeFiles/Sudoku_Solver.dir/depend:
	cd /Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/matthew/projects/CLionProjects/Sudoku-Solver /Users/matthew/projects/CLionProjects/Sudoku-Solver /Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug /Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug /Users/matthew/projects/CLionProjects/Sudoku-Solver/cmake-build-debug/CMakeFiles/Sudoku_Solver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sudoku_Solver.dir/depend

