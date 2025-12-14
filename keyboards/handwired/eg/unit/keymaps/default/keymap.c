// ...\vial-qmk\keyboards\handwired\eg\unit\keymaps\default\keymap.c

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┐
     * │Mute  │
     * └──────┘
     */
    [0] = LAYOUT( KC_MUTE ),
	 /*
     * ┌──────┐
     * │      │
     * └──────┘
     */
	[1] = LAYOUT( KC_TRNS ),
	 /*
     * ┌───────┐
     * │       │
     * └───────┘
     */
	[2] = LAYOUT( KC_TRNS )
};
