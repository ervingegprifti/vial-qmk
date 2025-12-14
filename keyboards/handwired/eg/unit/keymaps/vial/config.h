// ...\vial-qmk\keyboards\handwired\eg\unit\keymaps\vial\config.h

/* SPDX-License-Identifier: GPL-2.0-or-later */

// https://get.vial.today/docs/porting-to-vial.html

#pragma once

// Run in vial-qmk root: ...vial-qmk>python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0x31, 0x68, 0x09, 0x1B, 0x18, 0xBB, 0x34, 0xEE}

// Vial unlock combo. Two keys that must be pressed at the same time.
// Locked forever since we just have only one key in unit.
#define VIAL_UNLOCK_COMBO_ROWS {0, 0} // Contains the row numbers of each unlock key.
#define VIAL_UNLOCK_COMBO_COLS {0, 1} // Contains the column numbers of each unlock key.

// Squeezing the most out of AVR
// https://get.vial.today/docs/firmware-size.html
#define DYNAMIC_KEYMAP_LAYER_COUNT 3

#define COMBO_MUST_HOLD_MODS    // Allow combos with modifiers.
#define COMBO_ALLOW_ACTION_KEYS // Allow complex keycodes inside combos.
