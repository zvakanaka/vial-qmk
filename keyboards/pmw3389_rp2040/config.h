// Copyright 2023 ZiTe (@ZiTe)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #define SPI_SCK_PIN GP22
// #define SPI_MOSI_PIN GP23
// #define SPI_MISO_PIN GP20
// #define PMW33XX_CS_PIN GP21 // SPI CS pin.

#define SPI_DRIVER SPID0
#define PMW33XX_CS_PIN GP5 // can be 1 or 5
#define SPI_SCK_PIN GP2 // can be 2 or 6
#define SPI_MISO_PIN GP0 // can be 0 or 4
#define SPI_MOSI_PIN GP7 // can be 3 or 7
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE

/* Optional. */
// #define POINTING_DEVICE_MOTION_PIN GP6
// #define POINTING_DEVICE_MOTION_PIN_ACTIVE_LOW
#define PMW33XX_CPI 2000  // PMW3389 range is 50-16000, in increments of 50. Defaults to 2000 CPI.
#define PMW33XX_CLOCK_SPEED 2000000 // Sets the clock speed that the sensor runs at. Defaults to 2000000
#define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127.
// Throttle adds necessary delays between sensor reads
#define POINTING_DEVICE_TASK_THROTTLE_MS 10
// Rotate sensor data 30 degrees counter-clockwise
#define ROTATIONAL_TRANSFORM_ANGLE 30

/* RP2040 Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#define POINTING_DEVICE_DEBUG
/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
