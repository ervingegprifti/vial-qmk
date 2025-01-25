// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,
        KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,
        KC_LCTL,  MO(2),  KC_LALT,  KC_MUTE,  MO(1),    KC_SPC,
		
		KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
		KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT,
		KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_UP,    KC_RWIN,
		KC_SPC,   MO(1),  KC_MUTE,  KC_LEFT,  KC_DOWN,  KC_RIGHT
    ),
	[1] = LAYOUT(
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
        KC_CAPS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		
        KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
        KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_TRNS,  KC_QUOT,  KC_TRNS,
        KC_MINS,  KC_EQL,   KC_SLSH,  KC_TRNS,  KC_PGUP,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_END
    ),
	[2] = LAYOUT(
        KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		
        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_TRNS,
        KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_END
    )
};

// https://docs.qmk.fm/features/encoders
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // This refers to the first encoder
        if (clockwise) {
            tap_code(KC_VOLU); // Volume up when turned clockwise
        } else {
            tap_code(KC_VOLD); // Volume down when turned counterclockwise
        }
    } else if (index == 1) { // This refers to the second encoder
        if (clockwise) {
            tap_code(KC_MS_WH_DOWN);
        } else {
            tap_code(KC_MS_WH_UP);
        }
    }
	return false;
}
#endif
