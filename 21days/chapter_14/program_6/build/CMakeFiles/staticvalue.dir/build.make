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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/chapter_14/program_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/chapter_14/program_6/build

# Include any dependencies generated for this target.
include CMakeFiles/staticvalue.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/staticvalue.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/staticvalue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/staticvalue.dir/flags.make

CMakeFiles/staticvalue.dir/Typestatic.o: CMakeFiles/staticvalue.dir/flags.make
CMakeFiles/staticvalue.dir/Typestatic.o: /home/wxj/wuxingjie/chapter_14/program_6/Typestatic.cpp
CMakeFiles/staticvalue.dir/Typestatic.o: CMakeFiles/staticvalue.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/chapter_14/program_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/staticvalue.dir/Typestatic.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/staticvalue.dir/Typestatic.o -MF CMakeFiles/staticvalue.dir/Typestatic.o.d -o CMakeFiles/staticvalue.dir/Typestatic.o -c /home/wxj/wuxingjie/chapter_14/program_6/Typestatic.cpp

CMakeFiles/staticvalue.dir/Typestatic.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/staticvalue.dir/Typestatic.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/chapter_14/program_6/Typestatic.cpp > CMakeFiles/staticvalue.dir/Typestatic.i

CMakeFiles/staticvalue.dir/Typestatic.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/staticvalue.dir/Typestatic.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/chapter_14/program_6/Typestatic.cpp -o CMakeFiles/staticvalue.dir/Typestatic.s

# Object files for target staticvalue
staticvalue_OBJECTS = \
"CMakeFiles/staticvalue.dir/Typestatic.o"

# External object files for target staticvalue
staticvalue_EXTERNAL_OBJECTS =

staticvalue: CMakeFiles/staticvalue.dir/Typestatic.o
staticvalue: CMakeFiles/staticvalue.dir/build.make
staticvalue: CMakeFiles/staticvalue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/chapter_14/program_6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable staticvalue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/staticvalue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/staticvalue.dir/build: staticvalue
.PHONY : CMakeFiles/staticvalue.dir/build

CMakeFiles/staticvalue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/staticvalue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/staticvalue.dir/clean

CMakeFiles/staticvalue.dir/depend:
	cd /home/wxj/wuxingjie/chapter_14/program_6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/chapter_14/program_6 /home/wxj/wuxingjie/chapter_14/program_6 /home/wxj/wuxingjie/chapter_14/program_6/build /home/wxj/wuxingjie/chapter_14/program_6/build /home/wxj/wuxingjie/chapter_14/program_6/build/CMakeFiles/staticvalue.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/staticvalue.dir/depend
