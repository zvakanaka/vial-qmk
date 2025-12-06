#include QMK_KEYBOARD_H
#include "print.h"
#include "pointing_device.h"
#include <math.h>

// Forward declarations
void pmw33xx_set_cpi(uint8_t sensor, uint16_t cpi);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_NO)  // Dummy key, matrix disabled
};

// Runtime adjustable settings
static int16_t rotation_angle = 30;  // degrees
static uint16_t current_cpi = 2000;

void keyboard_post_init_user(void) {
    pmw33xx_set_cpi(0, current_cpi);
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // Invert X direction
    int16_t x = -mouse_report.x;
    int16_t y = mouse_report.y;

    // Apply rotation
    if (rotation_angle != 0) {
        float rad = (float)rotation_angle * 3.14159f / 180.0f;
        float cos_a = cosf(rad);
        float sin_a = sinf(rad);

        int16_t x_rot = (int16_t)(x * cos_a - y * sin_a);
        int16_t y_rot = (int16_t)(x * sin_a + y * cos_a);

        x = x_rot;
        y = y_rot;
    }

    mouse_report.x = x;
    mouse_report.y = y;

    return mouse_report;
}
