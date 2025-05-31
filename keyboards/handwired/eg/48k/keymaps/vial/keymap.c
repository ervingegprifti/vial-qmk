// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *  ┌───┬───┬───┬───┐
     *  │Esc│ Q │ 9 │ / │
     *  ├───┼───┼───┼───┤
     *  │ 4 │ 5 │ 6 │ * │
     *  ├───┼───┼───┼───┤
     *  │ 1 │ 2 │ 3 │ - │
     * ┌┴──┬┴────┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,
        KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,
        KC_LCTL,  KC_LWIN,  KC_LALT,  MO(1),   KC_LSFT,   KC_SPC,
		
		KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
		KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT,
		KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_UP,    MO(2),
		KC_SPC,   KC_RSFT,  MO(1),    KC_LEFT,  KC_DOWN,  KC_RIGHT
    ),
	[1] = LAYOUT(
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
        KC_CAPS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		
        KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
        KC_TRNS,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_QUOT,  KC_TRNS,
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
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_VOLU,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_VOLD,  KC_MNXT
    )
};
