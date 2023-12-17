TARGET = tpl_app
######################################
# directories
######################################
ROOT_DIR  = $(shell pwd)
PROJ_DIR  = $(ROOT_DIR)/codebase
BUILD_DIR = $(ROOT_DIR)/build
SDK_PATH  = $(ROOT_DIR)/../../output/rpi_4

######################################s
# sources
######################################
C_SOURCES =  \
$(wildcard $(PROJ_DIR)/*.c) 

C_INCLUDES   = \
-I$(PROJ_DIR)/Inc

#####################################
# binaries
#######################################
SDK_CC  = $(SDK_PATH)/host/bin/aarch64-buildroot-linux-gnu-

CC = $(SDK_CC)gcc
CP = $(SDK_CC)objcopy
SZ = $(SDK_CC)size

#######################################
# CFLAGS
#######################################

OPT = -Og

# C defines
C_DEFS =  \
-DEBUG

CFLAGS = $(C_DEFS) $(C_INCLUDES) $(OPT) -Wall

# default action: build all
all: $(BUILD_DIR)/$(TARGET)

#######################################
# build the application
#######################################

# list of objects
OBJECTS = $(addprefix $(BUILD_DIR)/,$(notdir $(C_SOURCES:.c=.o)))
vpath %.c $(sort $(dir $(C_SOURCES)))

$(BUILD_DIR)/%.o: %.c Makefile | $(BUILD_DIR) 
	$(CC) -c $(CFLAGS) -Wa,-a,-ad,-alms=$(BUILD_DIR)/$(notdir $(<:.c=.lst)) $< -o $@

$(BUILD_DIR)/$(TARGET): $(OBJECTS) Makefile
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

$(BUILD_DIR):
	mkdir $@		

#######################################
# clean up
#######################################
clean:
	-rm -fR $(BUILD_DIR)
  
#######################################
# dependencies
#######################################
-include $(wildcard $(BUILD_DIR)/*.d)

# *** EOF ***