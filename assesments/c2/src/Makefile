# Makefile for Project

# Compiler settings
PLATFORM := HOST
CC := $(CC)
CFLAGS := $(CFLAGS) -Wall -Werror -g -O0 -std=c99 
CPPFLAGS := $(CPPFLAGS)
LDFLAGS := $(LDFLAGS)

# Platform-specific settings
ifeq ($(PLATFORM),HOST)
    CC := gcc
    CPPFLAGS := -DHOST
    SOURCES := main.c memory.c
    INCLUDES := -I../include/common -I../include/host
else
    CC := arm-none-eabi-gcc
    CPPFLAGS := -DMSP432
    SOURCES := startup_msp432p401r_gcc.c system_msp432p401r.c interrupts_msp432p401r_gcc.c main.c memory.c
    INCLUDES := -Iinclude/common -Iinclude/msp432 -Iinclude/CMSIS
    LDFLAGS += -T msp432p401r.lds
endif

# Architecture-specific flags (ARM only)
ifeq ($(PLATFORM),MSP432)
    CFLAGS += -mcpu=cortex-m4 -mthumb -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=nosys.specs
endif

# Build targets
.PHONY: all compile-all clean

all: build

build:
	@echo "Using compiler: $(CC)"
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLUDES) $(SOURCES) $(LDFLAGS) -o c1m2.out -Wl,-Map=c1m2.map
	@size c1m2.out
	@echo "Build complete. Output: c1m2.out"

compile-all: $(SOURCES:.c=.o)

clean:
	@rm -f *.o *.out *.asm *.i *.d c1m2.map
	@echo "Clean complete."

# Include dependencies
-include $(SOURCES:.c=.d)
