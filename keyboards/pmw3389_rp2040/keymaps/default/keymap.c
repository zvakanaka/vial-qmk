#include QMK_KEYBOARD_H
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_NO)  // Dummy key, matrix disabled
};

void keyboard_post_init_user(void) {
    // Enable debug output
    debug_enable = true;
    debug_mouse = true;
    uprintf("PMW3389 keyboard initialized\n");
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    // Invert X direction
    mouse_report.x = -mouse_report.x;

    // Log every pointing device report
    if (mouse_report.x != 0 || mouse_report.y != 0) {
        uprintf("Mouse: x=%d y=%d\n", mouse_report.x, mouse_report.y);
    }
    return mouse_report;
}
