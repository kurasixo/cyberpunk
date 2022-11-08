# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vadimkurnakov/projects/cyberpunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vadimkurnakov/projects/cyberpunk

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/opt/homebrew/Cellar/cmake/3.24.2/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/opt/homebrew/Cellar/cmake/3.24.2/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/vadimkurnakov/projects/cyberpunk/CMakeFiles /Users/vadimkurnakov/projects/cyberpunk//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/vadimkurnakov/projects/cyberpunk/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -P /Users/vadimkurnakov/projects/cyberpunk/CMakeFiles/VerifyGlobs.cmake
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named cyberpunk_app

# Build rule for target.
cyberpunk_app: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 cyberpunk_app
.PHONY : cyberpunk_app

# fast build rule for target.
cyberpunk_app/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/build
.PHONY : cyberpunk_app/fast

src/actions/action.o: src/actions/action.cpp.o
.PHONY : src/actions/action.o

# target to build an object file
src/actions/action.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/actions/action.cpp.o
.PHONY : src/actions/action.cpp.o

src/actions/action.i: src/actions/action.cpp.i
.PHONY : src/actions/action.i

# target to preprocess a source file
src/actions/action.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/actions/action.cpp.i
.PHONY : src/actions/action.cpp.i

src/actions/action.s: src/actions/action.cpp.s
.PHONY : src/actions/action.s

# target to generate assembly for a file
src/actions/action.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/actions/action.cpp.s
.PHONY : src/actions/action.cpp.s

src/character/ability.o: src/character/ability.cpp.o
.PHONY : src/character/ability.o

# target to build an object file
src/character/ability.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/ability.cpp.o
.PHONY : src/character/ability.cpp.o

src/character/ability.i: src/character/ability.cpp.i
.PHONY : src/character/ability.i

# target to preprocess a source file
src/character/ability.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/ability.cpp.i
.PHONY : src/character/ability.cpp.i

src/character/ability.s: src/character/ability.cpp.s
.PHONY : src/character/ability.s

# target to generate assembly for a file
src/character/ability.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/ability.cpp.s
.PHONY : src/character/ability.cpp.s

src/character/appearance/affectations.o: src/character/appearance/affectations.cpp.o
.PHONY : src/character/appearance/affectations.o

# target to build an object file
src/character/appearance/affectations.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/affectations.cpp.o
.PHONY : src/character/appearance/affectations.cpp.o

src/character/appearance/affectations.i: src/character/appearance/affectations.cpp.i
.PHONY : src/character/appearance/affectations.i

# target to preprocess a source file
src/character/appearance/affectations.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/affectations.cpp.i
.PHONY : src/character/appearance/affectations.cpp.i

src/character/appearance/affectations.s: src/character/appearance/affectations.cpp.s
.PHONY : src/character/appearance/affectations.s

# target to generate assembly for a file
src/character/appearance/affectations.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/affectations.cpp.s
.PHONY : src/character/appearance/affectations.cpp.s

src/character/appearance/clothes.o: src/character/appearance/clothes.cpp.o
.PHONY : src/character/appearance/clothes.o

# target to build an object file
src/character/appearance/clothes.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/clothes.cpp.o
.PHONY : src/character/appearance/clothes.cpp.o

src/character/appearance/clothes.i: src/character/appearance/clothes.cpp.i
.PHONY : src/character/appearance/clothes.i

# target to preprocess a source file
src/character/appearance/clothes.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/clothes.cpp.i
.PHONY : src/character/appearance/clothes.cpp.i

src/character/appearance/clothes.s: src/character/appearance/clothes.cpp.s
.PHONY : src/character/appearance/clothes.s

# target to generate assembly for a file
src/character/appearance/clothes.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/clothes.cpp.s
.PHONY : src/character/appearance/clothes.cpp.s

src/character/appearance/hairstyle.o: src/character/appearance/hairstyle.cpp.o
.PHONY : src/character/appearance/hairstyle.o

# target to build an object file
src/character/appearance/hairstyle.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/hairstyle.cpp.o
.PHONY : src/character/appearance/hairstyle.cpp.o

src/character/appearance/hairstyle.i: src/character/appearance/hairstyle.cpp.i
.PHONY : src/character/appearance/hairstyle.i

# target to preprocess a source file
src/character/appearance/hairstyle.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/hairstyle.cpp.i
.PHONY : src/character/appearance/hairstyle.cpp.i

src/character/appearance/hairstyle.s: src/character/appearance/hairstyle.cpp.s
.PHONY : src/character/appearance/hairstyle.s

# target to generate assembly for a file
src/character/appearance/hairstyle.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/hairstyle.cpp.s
.PHONY : src/character/appearance/hairstyle.cpp.s

src/character/appearance/race.o: src/character/appearance/race.cpp.o
.PHONY : src/character/appearance/race.o

# target to build an object file
src/character/appearance/race.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/race.cpp.o
.PHONY : src/character/appearance/race.cpp.o

src/character/appearance/race.i: src/character/appearance/race.cpp.i
.PHONY : src/character/appearance/race.i

# target to preprocess a source file
src/character/appearance/race.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/race.cpp.i
.PHONY : src/character/appearance/race.cpp.i

src/character/appearance/race.s: src/character/appearance/race.cpp.s
.PHONY : src/character/appearance/race.s

# target to generate assembly for a file
src/character/appearance/race.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/appearance/race.cpp.s
.PHONY : src/character/appearance/race.cpp.s

src/character/backstory/backstory.o: src/character/backstory/backstory.cpp.o
.PHONY : src/character/backstory/backstory.o

# target to build an object file
src/character/backstory/backstory.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/backstory.cpp.o
.PHONY : src/character/backstory/backstory.cpp.o

src/character/backstory/backstory.i: src/character/backstory/backstory.cpp.i
.PHONY : src/character/backstory/backstory.i

# target to preprocess a source file
src/character/backstory/backstory.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/backstory.cpp.i
.PHONY : src/character/backstory/backstory.cpp.i

src/character/backstory/backstory.s: src/character/backstory/backstory.cpp.s
.PHONY : src/character/backstory/backstory.s

# target to generate assembly for a file
src/character/backstory/backstory.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/backstory.cpp.s
.PHONY : src/character/backstory/backstory.cpp.s

src/character/backstory/motivation.o: src/character/backstory/motivation.cpp.o
.PHONY : src/character/backstory/motivation.o

# target to build an object file
src/character/backstory/motivation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/motivation.cpp.o
.PHONY : src/character/backstory/motivation.cpp.o

src/character/backstory/motivation.i: src/character/backstory/motivation.cpp.i
.PHONY : src/character/backstory/motivation.i

# target to preprocess a source file
src/character/backstory/motivation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/motivation.cpp.i
.PHONY : src/character/backstory/motivation.cpp.i

src/character/backstory/motivation.s: src/character/backstory/motivation.cpp.s
.PHONY : src/character/backstory/motivation.s

# target to generate assembly for a file
src/character/backstory/motivation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/motivation.cpp.s
.PHONY : src/character/backstory/motivation.cpp.s

src/character/backstory/relatedPerson.o: src/character/backstory/relatedPerson.cpp.o
.PHONY : src/character/backstory/relatedPerson.o

# target to build an object file
src/character/backstory/relatedPerson.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/relatedPerson.cpp.o
.PHONY : src/character/backstory/relatedPerson.cpp.o

src/character/backstory/relatedPerson.i: src/character/backstory/relatedPerson.cpp.i
.PHONY : src/character/backstory/relatedPerson.i

# target to preprocess a source file
src/character/backstory/relatedPerson.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/relatedPerson.cpp.i
.PHONY : src/character/backstory/relatedPerson.cpp.i

src/character/backstory/relatedPerson.s: src/character/backstory/relatedPerson.cpp.s
.PHONY : src/character/backstory/relatedPerson.s

# target to generate assembly for a file
src/character/backstory/relatedPerson.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/backstory/relatedPerson.cpp.s
.PHONY : src/character/backstory/relatedPerson.cpp.s

src/character/character.o: src/character/character.cpp.o
.PHONY : src/character/character.o

# target to build an object file
src/character/character.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/character.cpp.o
.PHONY : src/character/character.cpp.o

src/character/character.i: src/character/character.cpp.i
.PHONY : src/character/character.i

# target to preprocess a source file
src/character/character.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/character.cpp.i
.PHONY : src/character/character.cpp.i

src/character/character.s: src/character/character.cpp.s
.PHONY : src/character/character.s

# target to generate assembly for a file
src/character/character.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/character.cpp.s
.PHONY : src/character/character.cpp.s

src/character/characterClass.o: src/character/characterClass.cpp.o
.PHONY : src/character/characterClass.o

# target to build an object file
src/character/characterClass.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/characterClass.cpp.o
.PHONY : src/character/characterClass.cpp.o

src/character/characterClass.i: src/character/characterClass.cpp.i
.PHONY : src/character/characterClass.i

# target to preprocess a source file
src/character/characterClass.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/characterClass.cpp.i
.PHONY : src/character/characterClass.cpp.i

src/character/characterClass.s: src/character/characterClass.cpp.s
.PHONY : src/character/characterClass.s

# target to generate assembly for a file
src/character/characterClass.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/characterClass.cpp.s
.PHONY : src/character/characterClass.cpp.s

src/character/stat.o: src/character/stat.cpp.o
.PHONY : src/character/stat.o

# target to build an object file
src/character/stat.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/stat.cpp.o
.PHONY : src/character/stat.cpp.o

src/character/stat.i: src/character/stat.cpp.i
.PHONY : src/character/stat.i

# target to preprocess a source file
src/character/stat.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/stat.cpp.i
.PHONY : src/character/stat.cpp.i

src/character/stat.s: src/character/stat.cpp.s
.PHONY : src/character/stat.s

# target to generate assembly for a file
src/character/stat.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/character/stat.cpp.s
.PHONY : src/character/stat.cpp.s

src/dice/dice.o: src/dice/dice.cpp.o
.PHONY : src/dice/dice.o

# target to build an object file
src/dice/dice.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/dice/dice.cpp.o
.PHONY : src/dice/dice.cpp.o

src/dice/dice.i: src/dice/dice.cpp.i
.PHONY : src/dice/dice.i

# target to preprocess a source file
src/dice/dice.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/dice/dice.cpp.i
.PHONY : src/dice/dice.cpp.i

src/dice/dice.s: src/dice/dice.cpp.s
.PHONY : src/dice/dice.s

# target to generate assembly for a file
src/dice/dice.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/dice/dice.cpp.s
.PHONY : src/dice/dice.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/cyberpunk_app.dir/build.make CMakeFiles/cyberpunk_app.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... cyberpunk_app"
	@echo "... src/actions/action.o"
	@echo "... src/actions/action.i"
	@echo "... src/actions/action.s"
	@echo "... src/character/ability.o"
	@echo "... src/character/ability.i"
	@echo "... src/character/ability.s"
	@echo "... src/character/appearance/affectations.o"
	@echo "... src/character/appearance/affectations.i"
	@echo "... src/character/appearance/affectations.s"
	@echo "... src/character/appearance/clothes.o"
	@echo "... src/character/appearance/clothes.i"
	@echo "... src/character/appearance/clothes.s"
	@echo "... src/character/appearance/hairstyle.o"
	@echo "... src/character/appearance/hairstyle.i"
	@echo "... src/character/appearance/hairstyle.s"
	@echo "... src/character/appearance/race.o"
	@echo "... src/character/appearance/race.i"
	@echo "... src/character/appearance/race.s"
	@echo "... src/character/backstory/backstory.o"
	@echo "... src/character/backstory/backstory.i"
	@echo "... src/character/backstory/backstory.s"
	@echo "... src/character/backstory/motivation.o"
	@echo "... src/character/backstory/motivation.i"
	@echo "... src/character/backstory/motivation.s"
	@echo "... src/character/backstory/relatedPerson.o"
	@echo "... src/character/backstory/relatedPerson.i"
	@echo "... src/character/backstory/relatedPerson.s"
	@echo "... src/character/character.o"
	@echo "... src/character/character.i"
	@echo "... src/character/character.s"
	@echo "... src/character/characterClass.o"
	@echo "... src/character/characterClass.i"
	@echo "... src/character/characterClass.s"
	@echo "... src/character/stat.o"
	@echo "... src/character/stat.i"
	@echo "... src/character/stat.s"
	@echo "... src/dice/dice.o"
	@echo "... src/dice/dice.i"
	@echo "... src/dice/dice.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -P /Users/vadimkurnakov/projects/cyberpunk/CMakeFiles/VerifyGlobs.cmake
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

