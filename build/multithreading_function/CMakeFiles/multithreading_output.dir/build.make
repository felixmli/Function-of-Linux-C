# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/lmk/linuxC/Function-of-Linux-C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lmk/linuxC/Function-of-Linux-C/build

# Include any dependencies generated for this target.
include multithreading_function/CMakeFiles/multithreading_output.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include multithreading_function/CMakeFiles/multithreading_output.dir/compiler_depend.make

# Include the progress variables for this target.
include multithreading_function/CMakeFiles/multithreading_output.dir/progress.make

# Include the compile flags for this target's objects.
include multithreading_function/CMakeFiles/multithreading_output.dir/flags.make

multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o: multithreading_function/CMakeFiles/multithreading_output.dir/flags.make
multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o: ../multithreading_function/multithreading_function_test.c
multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o: multithreading_function/CMakeFiles/multithreading_output.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmk/linuxC/Function-of-Linux-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o -MF CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o.d -o CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o -c /home/lmk/linuxC/Function-of-Linux-C/multithreading_function/multithreading_function_test.c

multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multithreading_output.dir/multithreading_function_test.c.i"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lmk/linuxC/Function-of-Linux-C/multithreading_function/multithreading_function_test.c > CMakeFiles/multithreading_output.dir/multithreading_function_test.c.i

multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multithreading_output.dir/multithreading_function_test.c.s"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lmk/linuxC/Function-of-Linux-C/multithreading_function/multithreading_function_test.c -o CMakeFiles/multithreading_output.dir/multithreading_function_test.c.s

multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o: multithreading_function/CMakeFiles/multithreading_output.dir/flags.make
multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o: ../utils/src/array_utils.c
multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o: multithreading_function/CMakeFiles/multithreading_output.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmk/linuxC/Function-of-Linux-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o -MF CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o.d -o CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o -c /home/lmk/linuxC/Function-of-Linux-C/utils/src/array_utils.c

multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.i"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lmk/linuxC/Function-of-Linux-C/utils/src/array_utils.c > CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.i

multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.s"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lmk/linuxC/Function-of-Linux-C/utils/src/array_utils.c -o CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.s

multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o: multithreading_function/CMakeFiles/multithreading_output.dir/flags.make
multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o: ../multithreading_function/src/multithreading_function.c
multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o: multithreading_function/CMakeFiles/multithreading_output.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lmk/linuxC/Function-of-Linux-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o -MF CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o.d -o CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o -c /home/lmk/linuxC/Function-of-Linux-C/multithreading_function/src/multithreading_function.c

multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/multithreading_output.dir/src/multithreading_function.c.i"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lmk/linuxC/Function-of-Linux-C/multithreading_function/src/multithreading_function.c > CMakeFiles/multithreading_output.dir/src/multithreading_function.c.i

multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/multithreading_output.dir/src/multithreading_function.c.s"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lmk/linuxC/Function-of-Linux-C/multithreading_function/src/multithreading_function.c -o CMakeFiles/multithreading_output.dir/src/multithreading_function.c.s

# Object files for target multithreading_output
multithreading_output_OBJECTS = \
"CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o" \
"CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o" \
"CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o"

# External object files for target multithreading_output
multithreading_output_EXTERNAL_OBJECTS =

output/multithreading_output: multithreading_function/CMakeFiles/multithreading_output.dir/multithreading_function_test.c.o
output/multithreading_output: multithreading_function/CMakeFiles/multithreading_output.dir/__/utils/src/array_utils.c.o
output/multithreading_output: multithreading_function/CMakeFiles/multithreading_output.dir/src/multithreading_function.c.o
output/multithreading_output: multithreading_function/CMakeFiles/multithreading_output.dir/build.make
output/multithreading_output: multithreading_function/CMakeFiles/multithreading_output.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lmk/linuxC/Function-of-Linux-C/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ../output/multithreading_output"
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/multithreading_output.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
multithreading_function/CMakeFiles/multithreading_output.dir/build: output/multithreading_output
.PHONY : multithreading_function/CMakeFiles/multithreading_output.dir/build

multithreading_function/CMakeFiles/multithreading_output.dir/clean:
	cd /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function && $(CMAKE_COMMAND) -P CMakeFiles/multithreading_output.dir/cmake_clean.cmake
.PHONY : multithreading_function/CMakeFiles/multithreading_output.dir/clean

multithreading_function/CMakeFiles/multithreading_output.dir/depend:
	cd /home/lmk/linuxC/Function-of-Linux-C/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lmk/linuxC/Function-of-Linux-C /home/lmk/linuxC/Function-of-Linux-C/multithreading_function /home/lmk/linuxC/Function-of-Linux-C/build /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function /home/lmk/linuxC/Function-of-Linux-C/build/multithreading_function/CMakeFiles/multithreading_output.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : multithreading_function/CMakeFiles/multithreading_output.dir/depend

