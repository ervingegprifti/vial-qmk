/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x8A, 0xB0, 0x36, 0x3A, 0x7A, 0x0B, 0xF0, 0x78}
#define VIAL_UNLOCK_COMBO_ROWS {0, 5}
#define VIAL_UNLOCK_COMBO_COLS {0, 5}

// https://docs.qmk.fm/features/auto_shift
#define AUTO_SHIFT_TIMEOUT 191

// Squeezing the most out of AVR
// https://get.vial.today/docs/firmware-size.html
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
