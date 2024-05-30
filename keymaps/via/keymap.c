// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x4(
        RGB_TOG,   RGB_MOD,   RGB_VAI,   KC_0,
        KC_5,   KC_6,   KC_7,   KC_8,
        KC_9,   KC_1,   KC_0,   KC_3
    )
};

void keyboard_post_init_user(void) {
    // Initialize RGB to static black
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(HSV_BLACK);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
void housekeeping_task_user(void) {
    rgblight_setrgb_at(RGB_RED, 0);
}

