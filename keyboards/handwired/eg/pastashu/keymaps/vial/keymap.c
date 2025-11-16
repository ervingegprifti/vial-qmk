// ...\vial-qmk\keyboards\handwired\eg\pastashu\keymaps\vial\keymap.c

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬──────┬──────┐
     * │Fn   │ Vol- │ Vol+ │
     * └─────┴──────┴──────┘
     */
    [0] = LAYOUT( MO(1),  KC_VOLD,  KC_VOLU ),
	 /*
     * ┌───────┬───────┬───────┐
     * │       │ Copy  │ Paste │
     * └───────┴───────┴───────┘
     */
	[1] = LAYOUT( KC_TRNS,  LCTL(KC_C),  LCTL(KC_V) )
};
