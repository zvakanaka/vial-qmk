// Copyright 2023 ZiTe (@ZiTe)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// SPI0 configuration for PMW3389 trackball (right side only)
#define SPI_DRIVER SPID0
#define PMW33XX_CS_PIN GP5
#define SPI_SCK_PIN GP2
#define SPI_MISO_PIN GP0
#define SPI_MOSI_PIN GP7

/* PMW3389 sensor settings */
#define PMW33XX_CPI 2000  // PMW3389 range is 50-16000, in increments of 50. Defaults to 2000 CPI.
#define PMW33XX_CLOCK_SPEED 2000000 // Sets the clock speed that the sensor runs at. Defaults to 2000000
#define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127.
#define POINTING_DEVICE_TASK_THROTTLE_MS 10
// Rotation handled dynamically in keymap.c

/* Split keyboard configuration */
#define SPLIT_POINTING_ENABLE
#ifdef TRACKBALL_LEFT
#    define POINTING_DEVICE_LEFT
#else
#    define POINTING_DEVICE_RIGHT
#endif
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE

/* RP2040 Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

// #define POINTING_DEVICE_DEBUG
/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
