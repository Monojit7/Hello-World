# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

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
CMAKE_COMMAND = /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/cmake

# The command to remove a file.
RM = /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build

# Include any dependencies generated for this target.
include src/CMakeFiles/TriangleServer.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/TriangleServer.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/TriangleServer.dir/flags.make

src/CMakeFiles/TriangleServer.dir/main.cpp.o: src/CMakeFiles/TriangleServer.dir/flags.make
src/CMakeFiles/TriangleServer.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/TriangleServer.dir/main.cpp.o"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/arm-elina-linux-gnueabi/arm-elina-linux-gnueabi-g++   -march=armv7-a -marm  -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi/  $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TriangleServer.dir/main.cpp.o -c /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src/main.cpp

src/CMakeFiles/TriangleServer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TriangleServer.dir/main.cpp.i"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/arm-elina-linux-gnueabi/arm-elina-linux-gnueabi-g++   -march=armv7-a -marm  -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi/ $(CXX_DEFINES) $(CXX_FLAGS) -E /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src/main.cpp > CMakeFiles/TriangleServer.dir/main.cpp.i

src/CMakeFiles/TriangleServer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TriangleServer.dir/main.cpp.s"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/arm-elina-linux-gnueabi/arm-elina-linux-gnueabi-g++   -march=armv7-a -marm  -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi/ $(CXX_DEFINES) $(CXX_FLAGS) -S /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src/main.cpp -o CMakeFiles/TriangleServer.dir/main.cpp.s

src/CMakeFiles/TriangleServer.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/TriangleServer.dir/main.cpp.o.requires

src/CMakeFiles/TriangleServer.dir/main.cpp.o.provides: src/CMakeFiles/TriangleServer.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/TriangleServer.dir/build.make src/CMakeFiles/TriangleServer.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/TriangleServer.dir/main.cpp.o.provides

src/CMakeFiles/TriangleServer.dir/main.cpp.o.provides.build: src/CMakeFiles/TriangleServer.dir/main.cpp.o


src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o: src/CMakeFiles/TriangleServer.dir/flags.make
src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o: ../src/provides/v1/com/monojit/TriangleStubImpl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/arm-elina-linux-gnueabi/arm-elina-linux-gnueabi-g++   -march=armv7-a -marm  -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi/  $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o -c /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src/provides/v1/com/monojit/TriangleStubImpl.cpp

src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.i"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/arm-elina-linux-gnueabi/arm-elina-linux-gnueabi-g++   -march=armv7-a -marm  -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi/ $(CXX_DEFINES) $(CXX_FLAGS) -E /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src/provides/v1/com/monojit/TriangleStubImpl.cpp > CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.i

src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.s"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && /opt/elina/2.0.2015143A/sysroots/x86_64-elinasdk-linux/usr/bin/arm-elina-linux-gnueabi/arm-elina-linux-gnueabi-g++   -march=armv7-a -marm  -mthumb-interwork -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi --sysroot=/opt/elina/2.0.2015143A/sysroots/cortexa9hf-vfp-neon-elina-linux-gnueabi/ $(CXX_DEFINES) $(CXX_FLAGS) -S /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src/provides/v1/com/monojit/TriangleStubImpl.cpp -o CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.s

src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.requires:

.PHONY : src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.requires

src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.provides: src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/TriangleServer.dir/build.make src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.provides.build
.PHONY : src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.provides

src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.provides.build: src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o


# Object files for target TriangleServer
TriangleServer_OBJECTS = \
"CMakeFiles/TriangleServer.dir/main.cpp.o" \
"CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o"

# External object files for target TriangleServer
TriangleServer_EXTERNAL_OBJECTS =

src/TriangleServer: src/CMakeFiles/TriangleServer.dir/main.cpp.o
src/TriangleServer: src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o
src/TriangleServer: src/CMakeFiles/TriangleServer.dir/build.make
src/TriangleServer: src-gen/libTriangleServer_triangleServer_types_static_stub.a
src/TriangleServer: src/CMakeFiles/TriangleServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TriangleServer"
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TriangleServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/TriangleServer.dir/build: src/TriangleServer

.PHONY : src/CMakeFiles/TriangleServer.dir/build

src/CMakeFiles/TriangleServer.dir/requires: src/CMakeFiles/TriangleServer.dir/main.cpp.o.requires
src/CMakeFiles/TriangleServer.dir/requires: src/CMakeFiles/TriangleServer.dir/provides/v1/com/monojit/TriangleStubImpl.cpp.o.requires

.PHONY : src/CMakeFiles/TriangleServer.dir/requires

src/CMakeFiles/TriangleServer.dir/clean:
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/TriangleServer.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/TriangleServer.dir/clean

src/CMakeFiles/TriangleServer.dir/depend:
	cd /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/src /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src /home/monojit/FORD/Linux_Programming/CommonAPI/Hello_World/TriangleServer/build/src/CMakeFiles/TriangleServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/TriangleServer.dir/depend
