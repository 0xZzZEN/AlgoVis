# define target platform: PLATFORM_DESKTOP, TBD: PLATFORM_RPI, PLATFORM_DRM, PLATFORM_ANDROID, PLATFORM_WEB
PLATFORM              = PLATFORM_DESKTOP_WIN_x64_x86

# define project
PROJECT_NAME          = algo-vis
PROJECT_VERSION       = 0.1
PROJECT_BUILD_MODE    = DEBUG # use DEBUG build mode for -g
# info for debug/build
$(info PROJECT_BUILD_MODE is $(PROJECT_BUILD_MODE))

# define source files and object files
PROJECT_SOURCE_FILES = main.c \
					   StateMachine.c \
					   MenuState.c
OBJS = $(patsubst %.c, %.o, $(PROJECT_SOURCE_FILES))

# Locations of raylib.h and libraylib.a/libraylib.so
# Library type compilation: STATIC (.a) or SHARED (.so/.dll)
RAYLIB_INCLUDE_PATH   ?= c:/msys64/mingw64/lib/raylib/include
RAYLIB_LIB_PATH       ?= c:/msys64/mingw64/lib/raylib/lib
RAYLIB_LIBTYPE        ?= STATIC

# Locations of additional headers

# define default C compiler: CC
CC = gcc

# define default make program: MAKE
MAKE ?= make
MAKEFILE_PARAMS = $(PROJECT_NAME)
VPATH = src/ \
		src/states \
		src/states/MenuState

# define compiler flags
# -I stands for include paths for required headers in current folder + raylib include path
CFLAGS = -Wall -Wextra -std=c99 -I. -I$(RAYLIB_INCLUDE_PATH)

# DEBUG_OPTION will hold the -g flag for the assembly and linker step when in DEBUG mode
DEBUG_OPTION =

# library paths for the linker
LDFLAGS = -L. -L$(RAYLIB_LIB_PATH)

# define raylib and APIs for rendering in Win
# NOTE: WinMM library required to set high-res timer resolution
LDLIBS = -lraylib -lgdi32 -lwinmm -lopengl32

ifeq ($(strip $(PROJECT_BUILD_MODE)),DEBUG)
	CFLAGS += -D$(PLATFORM)_DEBUG
	DEBUG_OPTION += -g
else
    CFLAGS += -O1 -D$(PLATFORM)
endif

# Define processes to execute
#------------------------------------------------------------------------------------------------
all:
	$(MAKE) $(MAKEFILE_PARAMS)

# goal 
$(PROJECT_NAME): $(OBJS) 
	$(CC) $(DEBUG_OPTION) $(LDFLAGS) -o $(PROJECT_NAME) $(OBJS) $(LDLIBS)

# source to obj
%.o: %.c
	$(CC) $(CFLAGS) $(DEBUG_OPTION) -c $< -o $@


# phony target, to make command clean
.PHONY: clean

clean:
	rm -f $(PROJECT_NAME) $(OBJS)