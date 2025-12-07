POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3389
SPI_DRIVER_REQUIRED = yes

# Trackball side configuration
# Set to 'left' or 'right' (default: right)
TRACKBALL_SIDE ?= right

ifeq ($(TRACKBALL_SIDE),left)
    OPT_DEFS += -DTRACKBALL_LEFT
endif
