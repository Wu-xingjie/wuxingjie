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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/human_class

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/human_class/build

# Include any dependencies generated for this target.
include CMakeFiles/human.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/human.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/human.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/human.dir/flags.make

CMakeFiles/human.dir/Human.cpp.o: CMakeFiles/human.dir/flags.make
CMakeFiles/human.dir/Human.cpp.o: /home/wxj/wuxingjie/human_class/Human.cpp
CMakeFiles/human.dir/Human.cpp.o: CMakeFiles/human.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/human_class/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/human.dir/Human.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/human.dir/Human.cpp.o -MF CMakeFiles/human.dir/Human.cpp.o.d -o CMakeFiles/human.dir/Human.cpp.o -c /home/wxj/wuxingjie/human_class/Human.cpp

CMakeFiles/human.dir/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/human.dir/Human.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/human_class/Human.cpp > CMakeFiles/human.dir/Human.cpp.i

CMakeFiles/human.dir/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/human.dir/Human.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/human_class/Human.cpp -o CMakeFiles/human.dir/Human.cpp.s

# Object files for target human
human_OBJECTS = \
"CMakeFiles/human.dir/Human.cpp.o"

# External object files for target human
human_EXTERNAL_OBJECTS =

libhuman.a: CMakeFiles/human.dir/Human.cpp.o
libhuman.a: CMakeFiles/human.dir/build.make
libhuman.a: CMakeFiles/human.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/human_class/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhuman.a"
	$(CMAKE_COMMAND) -P CMakeFiles/human.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/human.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/human.dir/build: libhuman.a
.PHONY : CMakeFiles/human.dir/build

CMakeFiles/human.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/human.dir/cmake_clean.cmake
.PHONY : CMakeFiles/human.dir/clean

CMakeFiles/human.dir/depend:
	cd /home/wxj/wuxingjie/human_class/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/human_class /home/wxj/wuxingjie/human_class /home/wxj/wuxingjie/human_class/build /home/wxj/wuxingjie/human_class/build /home/wxj/wuxingjie/human_class/build/CMakeFiles/human.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/human.dir/depend

