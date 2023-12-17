TARGET = tpl_core_module
######################################
# directories
######################################
ROOT_DIR  = $(shell pwd)
SDK_PATH  = $(ROOT_DIR)/../../output/rpi_4
BUILD_DIR = $(ROOT_DIR)/build

#####################################
# binaries
#######################################
SDK_CC  = $(SDK_PATH)/host/bin/aarch64-buildroot-linux-gnu-
SDK_LINUX = $(SDK_PATH)/build/linux-custom

obj-m := $(TARGET).o

all:
	$(MAKE) ARCH=arm64 CROSS_COMPILE=$(SDK_CC) -C $(SDK_LINUX) M=$(PWD) modules

clean: 
	$(MAKE) ARCH=arm64 CROSS_COMPILE=$(SDK_CC) -C $(SDK_LINUX) M=$(PWD) clean