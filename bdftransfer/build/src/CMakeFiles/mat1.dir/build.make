# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/bdftransfer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/bdftransfer/build

# Include any dependencies generated for this target.
include src/CMakeFiles/mat1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/mat1.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/mat1.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/mat1.dir/flags.make

src/CMakeFiles/mat1.dir/mat1.cpp.o: src/CMakeFiles/mat1.dir/flags.make
src/CMakeFiles/mat1.dir/mat1.cpp.o: /home/wxj/wuxingjie/bdftransfer/src/mat1.cpp
src/CMakeFiles/mat1.dir/mat1.cpp.o: src/CMakeFiles/mat1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/bdftransfer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/mat1.dir/mat1.cpp.o"
	cd /home/wxj/wuxingjie/bdftransfer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/mat1.dir/mat1.cpp.o -MF CMakeFiles/mat1.dir/mat1.cpp.o.d -o CMakeFiles/mat1.dir/mat1.cpp.o -c /home/wxj/wuxingjie/bdftransfer/src/mat1.cpp

src/CMakeFiles/mat1.dir/mat1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/mat1.dir/mat1.cpp.i"
	cd /home/wxj/wuxingjie/bdftransfer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/bdftransfer/src/mat1.cpp > CMakeFiles/mat1.dir/mat1.cpp.i

src/CMakeFiles/mat1.dir/mat1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/mat1.dir/mat1.cpp.s"
	cd /home/wxj/wuxingjie/bdftransfer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/bdftransfer/src/mat1.cpp -o CMakeFiles/mat1.dir/mat1.cpp.s

# Object files for target mat1
mat1_OBJECTS = \
"CMakeFiles/mat1.dir/mat1.cpp.o"

# External object files for target mat1
mat1_EXTERNAL_OBJECTS =

src/libmat1.a: src/CMakeFiles/mat1.dir/mat1.cpp.o
src/libmat1.a: src/CMakeFiles/mat1.dir/build.make
src/libmat1.a: src/CMakeFiles/mat1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/bdftransfer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmat1.a"
	cd /home/wxj/wuxingjie/bdftransfer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/mat1.dir/cmake_clean_target.cmake
	cd /home/wxj/wuxingjie/bdftransfer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mat1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/mat1.dir/build: src/libmat1.a
.PHONY : src/CMakeFiles/mat1.dir/build

src/CMakeFiles/mat1.dir/clean:
	cd /home/wxj/wuxingjie/bdftransfer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/mat1.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/mat1.dir/clean

src/CMakeFiles/mat1.dir/depend:
	cd /home/wxj/wuxingjie/bdftransfer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/bdftransfer /home/wxj/wuxingjie/bdftransfer/src /home/wxj/wuxingjie/bdftransfer/build /home/wxj/wuxingjie/bdftransfer/build/src /home/wxj/wuxingjie/bdftransfer/build/src/CMakeFiles/mat1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/mat1.dir/depend

