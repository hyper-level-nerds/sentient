# for including from embedded system projects in C

SENTIENT_C_CURRENT_DIR = $(dir $(abspath $(firstword $(MAKEFILE_LIST))))

SENTIENT_C_OUTPUT_DIR := $(SENTIENT_CURRENT_DIR)/c_build
SENTIENT_C_TEST_DIR := $(SENTIENT_CURRENT_DIR)/c/src/lib

SENTIENT_C_INCLUDE_DIR := $(SENTIENT_CURRENT_DIR)/c/include
SENTIENT_C_SOURCE_DIR := $(SENTIENT_CURRENT_DIR)/c/src/lib
SENTIENT_C_SOURCES := 

SENTIENT_C_CC := $(CC)
SENTIENT_C_CC_CPU := $(CPU)
SENTIENT_C_CC_FPU := $(FPU)

SENTIENT_C_CFLAGS := $(CFLAGS)
SENTIENT_C_LDFLAGS := $(LDFLAGS)
SENTIENT_C_DEFS := 

sentient: 
	$(CC) -c $(SENTIENT_C_CFLAGS)

clean:
	rm -rf $(SENTIENT_C_OUTPUT_DIR)