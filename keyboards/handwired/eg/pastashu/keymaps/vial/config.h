/* SPDX-License-Identifier: GPL-2.0-or-later */

// https://get.vial.today/docs/porting-to-vial.html

#pragma once

// Run in vial-qmk root: ...vial-qmk>python3 util/vial_generate_keyboard_uid.py
#define VIAL_KEYBOARD_UID {0xC0, 0x8D, 0xA3, 0x62, 0x17, 0x76, 0xFD, 0x86}

// Vial unlock combo. Two keys that must be pressed at the same time.
#define VIAL_UNLOCK_COMBO_ROWS {0, 0} // Contains the row numbers of each unlock key.
#define VIAL_UNLOCK_COMBO_COLS {0, 2} // Contains the column numbers of each unlock key.

// Squeezing the most out of AVR
// https://get.vial.today/docs/firmware-size.html
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
