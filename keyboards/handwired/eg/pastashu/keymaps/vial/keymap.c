// ...\vial-qmk\keyboards\handwired\eg\pastashu\keymaps\vial\keymap.c

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬──────┬──────┐
     * │Mute  │ Vol- │ Vol+ │
     * └──────┴──────┴──────┘
     */
    [0] = LAYOUT( KC_MUTE,  KC_VOLD,  KC_VOLU ),
	 /*
     * ┌───────┬───────┬───────┐
     * │       │       │       │
     * └───────┴───────┴───────┘
     */
	[1] = LAYOUT( KC_TRNS,  KC_TRNS,  KC_TRNS ),
	 /*
     * ┌───────┬───────┬───────┐
     * │       │       │       │
     * └───────┴───────┴───────┘
     */
	[2] = LAYOUT( KC_TRNS,  KC_TRNS,  KC_TRNS )
};
