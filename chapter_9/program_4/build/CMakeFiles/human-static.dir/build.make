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
include CMakeFiles/human-static.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/human-static.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/human-static.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/human-static.dir/flags.make

# Object files for target human-static
human__static_OBJECTS =

# External object files for target human-static
human__static_EXTERNAL_OBJECTS = \
"/home/wxj/wuxingjie/chapter_9/program_4/build/CMakeFiles/human-object.dir/Human.cpp.o"

libhuman-static.a: CMakeFiles/human-object.dir/Human.cpp.o
libhuman-static.a: CMakeFiles/human-static.dir/build.make
libhuman-static.a: CMakeFiles/human-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/chapter_9/program_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library libhuman-static.a"
	$(CMAKE_COMMAND) -P CMakeFiles/human-static.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/human-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/human-static.dir/build: libhuman-static.a
.PHONY : CMakeFiles/human-static.dir/build

CMakeFiles/human-static.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/human-static.dir/cmake_clean.cmake
.PHONY : CMakeFiles/human-static.dir/clean

CMakeFiles/human-static.dir/depend:
	cd /home/wxj/wuxingjie/chapter_9/program_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/chapter_9/program_4 /home/wxj/wuxingjie/chapter_9/program_4 /home/wxj/wuxingjie/chapter_9/program_4/build /home/wxj/wuxingjie/chapter_9/program_4/build /home/wxj/wuxingjie/chapter_9/program_4/build/CMakeFiles/human-static.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/human-static.dir/depend

