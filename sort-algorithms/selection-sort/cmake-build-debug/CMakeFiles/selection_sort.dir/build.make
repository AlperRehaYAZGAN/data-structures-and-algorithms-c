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
CMAKE_SOURCE_DIR = D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/selection_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/selection_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/selection_sort.dir/flags.make

CMakeFiles/selection_sort.dir/main.c.obj: CMakeFiles/selection_sort.dir/flags.make
CMakeFiles/selection_sort.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/selection_sort.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\selection_sort.dir\main.c.obj   -c D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\main.c

CMakeFiles/selection_sort.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/selection_sort.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\main.c > CMakeFiles\selection_sort.dir\main.c.i

CMakeFiles/selection_sort.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/selection_sort.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\main.c -o CMakeFiles\selection_sort.dir\main.c.s

# Object files for target selection_sort
selection_sort_OBJECTS = \
"CMakeFiles/selection_sort.dir/main.c.obj"

# External object files for target selection_sort
selection_sort_EXTERNAL_OBJECTS =

selection_sort.exe: CMakeFiles/selection_sort.dir/main.c.obj
selection_sort.exe: CMakeFiles/selection_sort.dir/build.make
selection_sort.exe: CMakeFiles/selection_sort.dir/linklibs.rsp
selection_sort.exe: CMakeFiles/selection_sort.dir/objects1.rsp
selection_sort.exe: CMakeFiles/selection_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable selection_sort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\selection_sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/selection_sort.dir/build: selection_sort.exe

.PHONY : CMakeFiles/selection_sort.dir/build

CMakeFiles/selection_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\selection_sort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/selection_sort.dir/clean

CMakeFiles/selection_sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\cmake-build-debug D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\cmake-build-debug D:\github\data-structures-and-algorithms\sort-algorithms\selection-sort\cmake-build-debug\CMakeFiles\selection_sort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/selection_sort.dir/depend
