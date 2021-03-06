# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/bin/cmake3

# The command to remove a file.
RM = /usr/bin/cmake3 -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/csmajs/amuni012/final-project-amuni012-dcaza005-mvong006

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/amuni012/final-project-amuni012-dcaza005-mvong006

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake3 -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake3 -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake3 -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake3 -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake3 -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake3 -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake3 --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake3 -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/amuni012/final-project-amuni012-dcaza005-mvong006/CMakeFiles /home/csmajs/amuni012/final-project-amuni012-dcaza005-mvong006/CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/amuni012/final-project-amuni012-dcaza005-mvong006/CMakeFiles 0
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
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named test

# Build rule for target.
test: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test
.PHONY : test

# fast build rule for target.
test/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/build
.PHONY : test/fast

#=============================================================================
# Target rules for targets named shop

# Build rule for target.
shop: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 shop
.PHONY : shop

# fast build rule for target.
shop/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/build
.PHONY : shop/fast

#=============================================================================
# Target rules for targets named logo

# Build rule for target.
logo: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 logo
.PHONY : logo

# fast build rule for target.
logo/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/logo.dir/build.make CMakeFiles/logo.dir/build
.PHONY : logo/fast

#=============================================================================
# Target rules for targets named gmock_main

# Build rule for target.
gmock_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock_main
.PHONY : gmock_main

# fast build rule for target.
gmock_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googlemock/CMakeFiles/gmock_main.dir/build.make googletest/googlemock/CMakeFiles/gmock_main.dir/build
.PHONY : gmock_main/fast

#=============================================================================
# Target rules for targets named gmock

# Build rule for target.
gmock: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock
.PHONY : gmock

# fast build rule for target.
gmock/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googlemock/CMakeFiles/gmock.dir/build.make googletest/googlemock/CMakeFiles/gmock.dir/build
.PHONY : gmock/fast

#=============================================================================
# Target rules for targets named gtest_main

# Build rule for target.
gtest_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest_main
.PHONY : gtest_main

# fast build rule for target.
gtest_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googletest/CMakeFiles/gtest_main.dir/build.make googletest/googletest/CMakeFiles/gtest_main.dir/build
.PHONY : gtest_main/fast

#=============================================================================
# Target rules for targets named gtest

# Build rule for target.
gtest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest
.PHONY : gtest

# fast build rule for target.
gtest/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googletest/CMakeFiles/gtest.dir/build.make googletest/googletest/CMakeFiles/gtest.dir/build
.PHONY : gtest/fast

CReviewmain.o: CReviewmain.cpp.o

.PHONY : CReviewmain.o

# target to build an object file
CReviewmain.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/CReviewmain.cpp.o
.PHONY : CReviewmain.cpp.o

CReviewmain.i: CReviewmain.cpp.i

.PHONY : CReviewmain.i

# target to preprocess a source file
CReviewmain.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/CReviewmain.cpp.i
.PHONY : CReviewmain.cpp.i

CReviewmain.s: CReviewmain.cpp.s

.PHONY : CReviewmain.s

# target to generate assembly for a file
CReviewmain.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/CReviewmain.cpp.s
.PHONY : CReviewmain.cpp.s

ReviewStrategy.o: ReviewStrategy.cpp.o

.PHONY : ReviewStrategy.o

# target to build an object file
ReviewStrategy.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/ReviewStrategy.cpp.o
.PHONY : ReviewStrategy.cpp.o

ReviewStrategy.i: ReviewStrategy.cpp.i

.PHONY : ReviewStrategy.i

# target to preprocess a source file
ReviewStrategy.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/ReviewStrategy.cpp.i
.PHONY : ReviewStrategy.cpp.i

ReviewStrategy.s: ReviewStrategy.cpp.s

.PHONY : ReviewStrategy.s

# target to generate assembly for a file
ReviewStrategy.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/ReviewStrategy.cpp.s
.PHONY : ReviewStrategy.cpp.s

Shop.o: Shop.cpp.o

.PHONY : Shop.o

# target to build an object file
Shop.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/Shop.cpp.o
.PHONY : Shop.cpp.o

Shop.i: Shop.cpp.i

.PHONY : Shop.i

# target to preprocess a source file
Shop.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/Shop.cpp.i
.PHONY : Shop.cpp.i

Shop.s: Shop.cpp.s

.PHONY : Shop.s

# target to generate assembly for a file
Shop.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/shop.dir/build.make CMakeFiles/shop.dir/Shop.cpp.s
.PHONY : Shop.cpp.s

logo.o: logo.cpp.o

.PHONY : logo.o

# target to build an object file
logo.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/logo.dir/build.make CMakeFiles/logo.dir/logo.cpp.o
.PHONY : logo.cpp.o

logo.i: logo.cpp.i

.PHONY : logo.i

# target to preprocess a source file
logo.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/logo.dir/build.make CMakeFiles/logo.dir/logo.cpp.i
.PHONY : logo.cpp.i

logo.s: logo.cpp.s

.PHONY : logo.s

# target to generate assembly for a file
logo.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/logo.dir/build.make CMakeFiles/logo.dir/logo.cpp.s
.PHONY : logo.cpp.s

test.o: test.cpp.o

.PHONY : test.o

# target to build an object file
test.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test.cpp.o
.PHONY : test.cpp.o

test.i: test.cpp.i

.PHONY : test.i

# target to preprocess a source file
test.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test.cpp.i
.PHONY : test.cpp.i

test.s: test.cpp.s

.PHONY : test.s

# target to generate assembly for a file
test.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/test.dir/build.make CMakeFiles/test.dir/test.cpp.s
.PHONY : test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... gmock"
	@echo "... gmock_main"
	@echo "... gtest"
	@echo "... gtest_main"
	@echo "... logo"
	@echo "... shop"
	@echo "... test"
	@echo "... CReviewmain.o"
	@echo "... CReviewmain.i"
	@echo "... CReviewmain.s"
	@echo "... ReviewStrategy.o"
	@echo "... ReviewStrategy.i"
	@echo "... ReviewStrategy.s"
	@echo "... Shop.o"
	@echo "... Shop.i"
	@echo "... Shop.s"
	@echo "... logo.o"
	@echo "... logo.i"
	@echo "... logo.s"
	@echo "... test.o"
	@echo "... test.i"
	@echo "... test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

