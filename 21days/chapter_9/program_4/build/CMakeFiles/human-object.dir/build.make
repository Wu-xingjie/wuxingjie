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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/chapter_9/program_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/chapter_9/program_4/build

# Include any dependencies generated for this target.
include CMakeFiles/human-object.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/human-object.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/human-object.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/human-object.dir/flags.make

CMakeFiles/human-object.dir/Human.cpp.o: CMakeFiles/human-object.dir/flags.make
CMakeFiles/human-object.dir/Human.cpp.o: /home/wxj/wuxingjie/chapter_9/program_4/Human.cpp
CMakeFiles/human-object.dir/Human.cpp.o: CMakeFiles/human-object.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/chapter_9/program_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/human-object.dir/Human.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/human-object.dir/Human.cpp.o -MF CMakeFiles/human-object.dir/Human.cpp.o.d -o CMakeFiles/human-object.dir/Human.cpp.o -c /home/wxj/wuxingjie/chapter_9/program_4/Human.cpp

CMakeFiles/human-object.dir/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/human-object.dir/Human.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/chapter_9/program_4/Human.cpp > CMakeFiles/human-object.dir/Human.cpp.i

CMakeFiles/human-object.dir/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/human-object.dir/Human.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/chapter_9/program_4/Human.cpp -o CMakeFiles/human-object.dir/Human.cpp.s

human-object: CMakeFiles/human-object.dir/Human.cpp.o
human-object: CMakeFiles/human-object.dir/build.make
.PHONY : human-object

# Rule to build all files generated by this target.
CMakeFiles/human-object.dir/build: human-object
.PHONY : CMakeFiles/human-object.dir/build

CMakeFiles/human-object.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/human-object.dir/cmake_clean.cmake
.PHONY : CMakeFiles/human-object.dir/clean

CMakeFiles/human-object.dir/depend:
	cd /home/wxj/wuxingjie/chapter_9/program_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/chapter_9/program_4 /home/wxj/wuxingjie/chapter_9/program_4 /home/wxj/wuxingjie/chapter_9/program_4/build /home/wxj/wuxingjie/chapter_9/program_4/build /home/wxj/wuxingjie/chapter_9/program_4/build/CMakeFiles/human-object.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/human-object.dir/depend

