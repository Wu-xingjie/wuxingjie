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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/Matrix/test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/Matrix/test/build

# Include any dependencies generated for this target.
include CMakeFiles/vec.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vec.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vec.dir/flags.make

CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o: CMakeFiles/vec.dir/flags.make
CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o: /home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp
CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o: CMakeFiles/vec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/Matrix/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o -MF CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o.d -o CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o -c /home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp

CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp > CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.i

CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp -o CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.s

# Object files for target vec
vec_OBJECTS = \
"CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o"

# External object files for target vec
vec_EXTERNAL_OBJECTS =

libvec.a: CMakeFiles/vec.dir/home/wxj/wuxingjie/Matrix/src/VectorMulti.cpp.o
libvec.a: CMakeFiles/vec.dir/build.make
libvec.a: CMakeFiles/vec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/Matrix/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libvec.a"
	$(CMAKE_COMMAND) -P CMakeFiles/vec.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vec.dir/build: libvec.a
.PHONY : CMakeFiles/vec.dir/build

CMakeFiles/vec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vec.dir/clean

CMakeFiles/vec.dir/depend:
	cd /home/wxj/wuxingjie/Matrix/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/Matrix/test /home/wxj/wuxingjie/Matrix/test /home/wxj/wuxingjie/Matrix/test/build /home/wxj/wuxingjie/Matrix/test/build /home/wxj/wuxingjie/Matrix/test/build/CMakeFiles/vec.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/vec.dir/depend
