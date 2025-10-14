# define target platform: PLATFORM_DESKTOP, TBD: PLATFORM_RPI, PLATFORM_DRM, PLATFORM_ANDROID, PLATFORM_WEB
PLATFORM              ?= PLATFORM_DESKTOP_WIN_x64_x86

# define project
PROJECT_NAME          ?= algo-vis
PROJECT_VERSION       ?= 0.1
PROJECT_BUILD_MODE    ?= Release # use DEBUG for -g

# define source files and object files
PROJECT_SOURCE_FILES = main.c
OBJS = $(patsubst %.c, %.o, $(PROJECT_SOURCE_FILES))

# Locations of raylib.h and libraylib.a/libraylib.so
# Library type compilation: STATIC (.a) or SHARED (.so/.dll)
RAYLIB_INCLUDE_PATH   ?= c:\msys64\mingw64\lib\raylib\include
RAYLIB_LIB_PATH       ?= c:\msys64\mingw64\lib\raylib\lib
RAYLIB_LIBTYPE        ?= STATIC

# define default C compiler: CC
CC = gcc

# define default make program: MAKE
MAKE ?= make

# define compiler flags
# -I stands for include paths for required headers in current folder + raylib include path
CFLAGS = -Wall -Wextra -std=c99 -D$(PLATFORM) -I. -I$(RAYLIB_INCLUDE_PATH)

# library paths for linker
LDFLAGS = -L. -L$(RAYLIB_LIB_PATH)

# define raylib and APIs for rendering in Win
# NOTE: WinMM library required to set high-res timer resolution
LDLIBS = -lraylib -lgdi32 -lwinmm -lopengl32

ifeq ($(PROJECT_BUILD_MODE),DEBUG)
    CFLAGS += -g -D_DEBUG
else
    CFLAGS += -O1
endif

# goal 
$(PROJECT_NAME): $(OBJS) 
	$(CC) $(LDFLAGS) -o $(PROJECT_NAME) $(OBJS) $(LDLIBS)

# source to obj
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# phony target, to make command clean
.PHONY: clean

clean:
	rm -f $(PROJECT_NAME) $(OBJS)