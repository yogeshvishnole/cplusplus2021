# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/dell/my/c++ new 2021/cMakeLib"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/dell/my/c++ new 2021/cMakeLib/build"

# Include any dependencies generated for this target.
include CMakeFiles/firstLib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/firstLib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/firstLib.dir/flags.make

CMakeFiles/firstLib.dir/firstLib.cpp.o: CMakeFiles/firstLib.dir/flags.make
CMakeFiles/firstLib.dir/firstLib.cpp.o: ../firstLib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/dell/my/c++ new 2021/cMakeLib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/firstLib.dir/firstLib.cpp.o"
	/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firstLib.dir/firstLib.cpp.o -c "/home/dell/my/c++ new 2021/cMakeLib/firstLib.cpp"

CMakeFiles/firstLib.dir/firstLib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstLib.dir/firstLib.cpp.i"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/dell/my/c++ new 2021/cMakeLib/firstLib.cpp" > CMakeFiles/firstLib.dir/firstLib.cpp.i

CMakeFiles/firstLib.dir/firstLib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstLib.dir/firstLib.cpp.s"
	/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/dell/my/c++ new 2021/cMakeLib/firstLib.cpp" -o CMakeFiles/firstLib.dir/firstLib.cpp.s

# Object files for target firstLib
firstLib_OBJECTS = \
"CMakeFiles/firstLib.dir/firstLib.cpp.o"

# External object files for target firstLib
firstLib_EXTERNAL_OBJECTS =

libfirstLib.a: CMakeFiles/firstLib.dir/firstLib.cpp.o
libfirstLib.a: CMakeFiles/firstLib.dir/build.make
libfirstLib.a: CMakeFiles/firstLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/dell/my/c++ new 2021/cMakeLib/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfirstLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/firstLib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firstLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/firstLib.dir/build: libfirstLib.a

.PHONY : CMakeFiles/firstLib.dir/build

CMakeFiles/firstLib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/firstLib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/firstLib.dir/clean

CMakeFiles/firstLib.dir/depend:
	cd "/home/dell/my/c++ new 2021/cMakeLib/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/dell/my/c++ new 2021/cMakeLib" "/home/dell/my/c++ new 2021/cMakeLib" "/home/dell/my/c++ new 2021/cMakeLib/build" "/home/dell/my/c++ new 2021/cMakeLib/build" "/home/dell/my/c++ new 2021/cMakeLib/build/CMakeFiles/firstLib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/firstLib.dir/depend

