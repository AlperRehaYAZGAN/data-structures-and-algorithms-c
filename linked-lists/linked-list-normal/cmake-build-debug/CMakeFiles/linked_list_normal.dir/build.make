# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linked_list_normal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linked_list_normal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linked_list_normal.dir/flags.make

CMakeFiles/linked_list_normal.dir/main.c.obj: CMakeFiles/linked_list_normal.dir/flags.make
CMakeFiles/linked_list_normal.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linked_list_normal.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\linked_list_normal.dir\main.c.obj   -c D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\main.c

CMakeFiles/linked_list_normal.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linked_list_normal.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\main.c > CMakeFiles\linked_list_normal.dir\main.c.i

CMakeFiles/linked_list_normal.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linked_list_normal.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\main.c -o CMakeFiles\linked_list_normal.dir\main.c.s

# Object files for target linked_list_normal
linked_list_normal_OBJECTS = \
"CMakeFiles/linked_list_normal.dir/main.c.obj"

# External object files for target linked_list_normal
linked_list_normal_EXTERNAL_OBJECTS =

linked_list_normal.exe: CMakeFiles/linked_list_normal.dir/main.c.obj
linked_list_normal.exe: CMakeFiles/linked_list_normal.dir/build.make
linked_list_normal.exe: CMakeFiles/linked_list_normal.dir/linklibs.rsp
linked_list_normal.exe: CMakeFiles/linked_list_normal.dir/objects1.rsp
linked_list_normal.exe: CMakeFiles/linked_list_normal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable linked_list_normal.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\linked_list_normal.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linked_list_normal.dir/build: linked_list_normal.exe

.PHONY : CMakeFiles/linked_list_normal.dir/build

CMakeFiles/linked_list_normal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linked_list_normal.dir\cmake_clean.cmake
.PHONY : CMakeFiles/linked_list_normal.dir/clean

CMakeFiles/linked_list_normal.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\cmake-build-debug D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\cmake-build-debug D:\github\data-structures-and-algorithms\linked-lists\linked-list-normal\cmake-build-debug\CMakeFiles\linked_list_normal.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linked_list_normal.dir/depend

