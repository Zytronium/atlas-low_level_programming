# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\daste\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\daste\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\daste\CLionProjects\atlas-low_level_programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\daste\CLionProjects\atlas-low_level_programming\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/atlas-low-level-programming.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/atlas-low-level-programming.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/atlas-low-level-programming.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/atlas-low-level-programming.dir/flags.make

CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj: CMakeFiles/atlas-low-level-programming.dir/flags.make
CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj: C:/Users/daste/CLionProjects/atlas-low_level_programming/file_io/0-read_textfile.c
CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj: CMakeFiles/atlas-low-level-programming.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\daste\CLionProjects\atlas-low_level_programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj"
	C:\Users\daste\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj -MF CMakeFiles\atlas-low-level-programming.dir\file_io\0-read_textfile.c.obj.d -o CMakeFiles\atlas-low-level-programming.dir\file_io\0-read_textfile.c.obj -c C:\Users\daste\CLionProjects\atlas-low_level_programming\file_io\0-read_textfile.c

CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.i"
	C:\Users\daste\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\daste\CLionProjects\atlas-low_level_programming\file_io\0-read_textfile.c > CMakeFiles\atlas-low-level-programming.dir\file_io\0-read_textfile.c.i

CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.s"
	C:\Users\daste\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\daste\CLionProjects\atlas-low_level_programming\file_io\0-read_textfile.c -o CMakeFiles\atlas-low-level-programming.dir\file_io\0-read_textfile.c.s

# Object files for target atlas-low-level-programming
atlas__low__level__programming_OBJECTS = \
"CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj"

# External object files for target atlas-low-level-programming
atlas__low__level__programming_EXTERNAL_OBJECTS =

atlas-low-level-programming.exe: CMakeFiles/atlas-low-level-programming.dir/file_io/0-read_textfile.c.obj
atlas-low-level-programming.exe: CMakeFiles/atlas-low-level-programming.dir/build.make
atlas-low-level-programming.exe: CMakeFiles/atlas-low-level-programming.dir/linkLibs.rsp
atlas-low-level-programming.exe: CMakeFiles/atlas-low-level-programming.dir/objects1.rsp
atlas-low-level-programming.exe: CMakeFiles/atlas-low-level-programming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\daste\CLionProjects\atlas-low_level_programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable atlas-low-level-programming.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\atlas-low-level-programming.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/atlas-low-level-programming.dir/build: atlas-low-level-programming.exe
.PHONY : CMakeFiles/atlas-low-level-programming.dir/build

CMakeFiles/atlas-low-level-programming.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\atlas-low-level-programming.dir\cmake_clean.cmake
.PHONY : CMakeFiles/atlas-low-level-programming.dir/clean

CMakeFiles/atlas-low-level-programming.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\daste\CLionProjects\atlas-low_level_programming C:\Users\daste\CLionProjects\atlas-low_level_programming C:\Users\daste\CLionProjects\atlas-low_level_programming\cmake-build-debug C:\Users\daste\CLionProjects\atlas-low_level_programming\cmake-build-debug C:\Users\daste\CLionProjects\atlas-low_level_programming\cmake-build-debug\CMakeFiles\atlas-low-level-programming.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/atlas-low-level-programming.dir/depend

