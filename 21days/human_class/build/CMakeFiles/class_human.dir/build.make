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
include CMakeFiles/class_human.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/class_human.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/class_human.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class_human.dir/flags.make

CMakeFiles/class_human.dir/Human0.cpp.o: CMakeFiles/class_human.dir/flags.make
CMakeFiles/class_human.dir/Human0.cpp.o: /home/wxj/wuxingjie/human_class/Human0.cpp
CMakeFiles/class_human.dir/Human0.cpp.o: CMakeFiles/class_human.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/human_class/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/class_human.dir/Human0.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/class_human.dir/Human0.cpp.o -MF CMakeFiles/class_human.dir/Human0.cpp.o.d -o CMakeFiles/class_human.dir/Human0.cpp.o -c /home/wxj/wuxingjie/human_class/Human0.cpp

CMakeFiles/class_human.dir/Human0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/class_human.dir/Human0.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/human_class/Human0.cpp > CMakeFiles/class_human.dir/Human0.cpp.i

CMakeFiles/class_human.dir/Human0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/class_human.dir/Human0.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/human_class/Human0.cpp -o CMakeFiles/class_human.dir/Human0.cpp.s

# Object files for target class_human
class_human_OBJECTS = \
"CMakeFiles/class_human.dir/Human0.cpp.o"

# External object files for target class_human
class_human_EXTERNAL_OBJECTS =

class_human: CMakeFiles/class_human.dir/Human0.cpp.o
class_human: CMakeFiles/class_human.dir/build.make
class_human: libhuman.a
class_human: CMakeFiles/class_human.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/human_class/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable class_human"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/class_human.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class_human.dir/build: class_human
.PHONY : CMakeFiles/class_human.dir/build

CMakeFiles/class_human.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/class_human.dir/cmake_clean.cmake
.PHONY : CMakeFiles/class_human.dir/clean

CMakeFiles/class_human.dir/depend:
	cd /home/wxj/wuxingjie/human_class/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/human_class /home/wxj/wuxingjie/human_class /home/wxj/wuxingjie/human_class/build /home/wxj/wuxingjie/human_class/build /home/wxj/wuxingjie/human_class/build/CMakeFiles/class_human.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/class_human.dir/depend

