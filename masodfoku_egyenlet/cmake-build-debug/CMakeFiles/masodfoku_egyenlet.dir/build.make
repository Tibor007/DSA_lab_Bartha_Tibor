# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/masodfoku_egyenlet.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/masodfoku_egyenlet.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/masodfoku_egyenlet.dir/flags.make

CMakeFiles/masodfoku_egyenlet.dir/main.c.obj: CMakeFiles/masodfoku_egyenlet.dir/flags.make
CMakeFiles/masodfoku_egyenlet.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/masodfoku_egyenlet.dir/main.c.obj"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\masodfoku_egyenlet.dir\main.c.obj   -c D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\main.c

CMakeFiles/masodfoku_egyenlet.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/masodfoku_egyenlet.dir/main.c.i"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\main.c > CMakeFiles\masodfoku_egyenlet.dir\main.c.i

CMakeFiles/masodfoku_egyenlet.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/masodfoku_egyenlet.dir/main.c.s"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\main.c -o CMakeFiles\masodfoku_egyenlet.dir\main.c.s

CMakeFiles/masodfoku_egyenlet.dir/functions.c.obj: CMakeFiles/masodfoku_egyenlet.dir/flags.make
CMakeFiles/masodfoku_egyenlet.dir/functions.c.obj: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/masodfoku_egyenlet.dir/functions.c.obj"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\masodfoku_egyenlet.dir\functions.c.obj   -c D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\functions.c

CMakeFiles/masodfoku_egyenlet.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/masodfoku_egyenlet.dir/functions.c.i"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\functions.c > CMakeFiles\masodfoku_egyenlet.dir\functions.c.i

CMakeFiles/masodfoku_egyenlet.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/masodfoku_egyenlet.dir/functions.c.s"
	C:\OJI\Codeblocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\functions.c -o CMakeFiles\masodfoku_egyenlet.dir\functions.c.s

# Object files for target masodfoku_egyenlet
masodfoku_egyenlet_OBJECTS = \
"CMakeFiles/masodfoku_egyenlet.dir/main.c.obj" \
"CMakeFiles/masodfoku_egyenlet.dir/functions.c.obj"

# External object files for target masodfoku_egyenlet
masodfoku_egyenlet_EXTERNAL_OBJECTS =

masodfoku_egyenlet.exe: CMakeFiles/masodfoku_egyenlet.dir/main.c.obj
masodfoku_egyenlet.exe: CMakeFiles/masodfoku_egyenlet.dir/functions.c.obj
masodfoku_egyenlet.exe: CMakeFiles/masodfoku_egyenlet.dir/build.make
masodfoku_egyenlet.exe: CMakeFiles/masodfoku_egyenlet.dir/linklibs.rsp
masodfoku_egyenlet.exe: CMakeFiles/masodfoku_egyenlet.dir/objects1.rsp
masodfoku_egyenlet.exe: CMakeFiles/masodfoku_egyenlet.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable masodfoku_egyenlet.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\masodfoku_egyenlet.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/masodfoku_egyenlet.dir/build: masodfoku_egyenlet.exe

.PHONY : CMakeFiles/masodfoku_egyenlet.dir/build

CMakeFiles/masodfoku_egyenlet.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\masodfoku_egyenlet.dir\cmake_clean.cmake
.PHONY : CMakeFiles/masodfoku_egyenlet.dir/clean

CMakeFiles/masodfoku_egyenlet.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug D:\DSA_lab\DSA_lab_Bartha_Tibor\masodfoku_egyenlet\cmake-build-debug\CMakeFiles\masodfoku_egyenlet.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/masodfoku_egyenlet.dir/depend

