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
CMAKE_SOURCE_DIR = /home/wxj/wuxingjie/chapter_9/program_9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxj/wuxingjie/chapter_9/program_9/build

# Include any dependencies generated for this target.
include CMakeFiles/program9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/program9.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/program9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program9.dir/flags.make

CMakeFiles/program9.dir/sizeof_class0.cpp.o: CMakeFiles/program9.dir/flags.make
CMakeFiles/program9.dir/sizeof_class0.cpp.o: /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class0.cpp
CMakeFiles/program9.dir/sizeof_class0.cpp.o: CMakeFiles/program9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/chapter_9/program_9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program9.dir/sizeof_class0.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program9.dir/sizeof_class0.cpp.o -MF CMakeFiles/program9.dir/sizeof_class0.cpp.o.d -o CMakeFiles/program9.dir/sizeof_class0.cpp.o -c /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class0.cpp

CMakeFiles/program9.dir/sizeof_class0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program9.dir/sizeof_class0.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class0.cpp > CMakeFiles/program9.dir/sizeof_class0.cpp.i

CMakeFiles/program9.dir/sizeof_class0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program9.dir/sizeof_class0.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class0.cpp -o CMakeFiles/program9.dir/sizeof_class0.cpp.s

CMakeFiles/program9.dir/sizeof_class.cpp.o: CMakeFiles/program9.dir/flags.make
CMakeFiles/program9.dir/sizeof_class.cpp.o: /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class.cpp
CMakeFiles/program9.dir/sizeof_class.cpp.o: CMakeFiles/program9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/wxj/wuxingjie/chapter_9/program_9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/program9.dir/sizeof_class.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/program9.dir/sizeof_class.cpp.o -MF CMakeFiles/program9.dir/sizeof_class.cpp.o.d -o CMakeFiles/program9.dir/sizeof_class.cpp.o -c /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class.cpp

CMakeFiles/program9.dir/sizeof_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/program9.dir/sizeof_class.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class.cpp > CMakeFiles/program9.dir/sizeof_class.cpp.i

CMakeFiles/program9.dir/sizeof_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/program9.dir/sizeof_class.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wxj/wuxingjie/chapter_9/program_9/sizeof_class.cpp -o CMakeFiles/program9.dir/sizeof_class.cpp.s

# Object files for target program9
program9_OBJECTS = \
"CMakeFiles/program9.dir/sizeof_class0.cpp.o" \
"CMakeFiles/program9.dir/sizeof_class.cpp.o"

# External object files for target program9
program9_EXTERNAL_OBJECTS =

program9: CMakeFiles/program9.dir/sizeof_class0.cpp.o
program9: CMakeFiles/program9.dir/sizeof_class.cpp.o
program9: CMakeFiles/program9.dir/build.make
program9: CMakeFiles/program9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/wxj/wuxingjie/chapter_9/program_9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable program9"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program9.dir/build: program9
.PHONY : CMakeFiles/program9.dir/build

CMakeFiles/program9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program9.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program9.dir/clean

CMakeFiles/program9.dir/depend:
	cd /home/wxj/wuxingjie/chapter_9/program_9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxj/wuxingjie/chapter_9/program_9 /home/wxj/wuxingjie/chapter_9/program_9 /home/wxj/wuxingjie/chapter_9/program_9/build /home/wxj/wuxingjie/chapter_9/program_9/build /home/wxj/wuxingjie/chapter_9/program_9/build/CMakeFiles/program9.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/program9.dir/depend

