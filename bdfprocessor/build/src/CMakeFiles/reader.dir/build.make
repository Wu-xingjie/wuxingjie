# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/BdfTransfer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/BdfTransfer/build

# Include any dependencies generated for this target.
include src/CMakeFiles/reader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/reader.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/reader.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/reader.dir/flags.make

src/CMakeFiles/reader.dir/bdfReader.cpp.o: src/CMakeFiles/reader.dir/flags.make
src/CMakeFiles/reader.dir/bdfReader.cpp.o: /home/wxj/wuxingjie/BdfTransfer/src/bdfReader.cpp
src/CMakeFiles/reader.dir/bdfReader.cpp.o: src/CMakeFiles/reader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/BdfTransfer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/reader.dir/bdfReader.cpp.o"
	cd /home/wxj/wuxingjie/BdfTransfer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/reader.dir/bdfReader.cpp.o -MF CMakeFiles/reader.dir/bdfReader.cpp.o.d -o CMakeFiles/reader.dir/bdfReader.cpp.o -c /home/wxj/wuxingjie/BdfTransfer/src/bdfReader.cpp

src/CMakeFiles/reader.dir/bdfReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/reader.dir/bdfReader.cpp.i"
	cd /home/wxj/wuxingjie/BdfTransfer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/BdfTransfer/src/bdfReader.cpp > CMakeFiles/reader.dir/bdfReader.cpp.i

src/CMakeFiles/reader.dir/bdfReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/reader.dir/bdfReader.cpp.s"
	cd /home/wxj/wuxingjie/BdfTransfer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/BdfTransfer/src/bdfReader.cpp -o CMakeFiles/reader.dir/bdfReader.cpp.s

# Object files for target reader
reader_OBJECTS = \
"CMakeFiles/reader.dir/bdfReader.cpp.o"

# External object files for target reader
reader_EXTERNAL_OBJECTS =

src/libreader.a: src/CMakeFiles/reader.dir/bdfReader.cpp.o
src/libreader.a: src/CMakeFiles/reader.dir/build.make
src/libreader.a: src/CMakeFiles/reader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/BdfTransfer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libreader.a"
	cd /home/wxj/wuxingjie/BdfTransfer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/reader.dir/cmake_clean_target.cmake
	cd /home/wxj/wuxingjie/BdfTransfer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/reader.dir/build: src/libreader.a
.PHONY : src/CMakeFiles/reader.dir/build

src/CMakeFiles/reader.dir/clean:
	cd /home/wxj/wuxingjie/BdfTransfer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/reader.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/reader.dir/clean

src/CMakeFiles/reader.dir/depend:
	cd /home/wxj/wuxingjie/BdfTransfer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/BdfTransfer /home/wxj/wuxingjie/BdfTransfer/src /home/wxj/wuxingjie/BdfTransfer/build /home/wxj/wuxingjie/BdfTransfer/build/src /home/wxj/wuxingjie/BdfTransfer/build/src/CMakeFiles/reader.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/reader.dir/depend
