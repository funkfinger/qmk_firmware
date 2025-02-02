/* Copyright 2021 funkfinger
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define _BL 0
#define _FN 1
#define _L0 2
#define _L1 3

// // Defines names for use in layer keycodes and the keymap
// enum layer_names {
//     _BL,
//     _FN
// };

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT_numpad_5x4(
    /* Base Layer: Number Pad
     * ,---------------.
     * |FN | / | * | - |
     * |---+---+---|---|
     * | 7 | 8 | 9 |   |
     * |---+---+---| + |
     * | 4 | 5 | 6 |   |
     * |---+---+---|---|
     * | 1 | 2 | 3 |   |
     * |---+---+---|Ent|
     * |   0   | . |   |
     * `---------------'
     */
    MO(_FN), KC_PSLS, KC_PAST, KC_PMNS, \
    KC_P7,   KC_P8,   KC_P9,   KC_PPLS, \
    KC_P4,   KC_P5,   KC_P6,    \
    KC_P1,   KC_P2,   KC_P3, KC_PENT, \
    KC_P0,            KC_PDOT
  ),
    /* Function Layer: RGB Controls and Numlock
     * ,---------------.
     * |FN |TOG|M+ |M- | Mode
     * |---+---+---|---|
     * |   |H- |H+ |   | Hue
     * |---+---+---|   |
     * |   |S- |S+ |   | Saturation
     * |---+---+---|---|
     * |   |B- |B+ |NUM| Brightness
     * |---+---+---|   |
     * |       |   |LCK|
     * `---------------'
     */
  [_FN] = LAYOUT_numpad_5x4(
    KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD, \
    KC_NO,   RGB_HUD, RGB_HUI,   \
    KC_NO,   RGB_SAD, RGB_SAI, KC_NO, \
    KC_NO,   RGB_VAD, RGB_VAI, \
    KC_NO,            KC_NO,   KC_NLCK
  ),

  [_L0] = LAYOUT_numpad_5x4(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS,   KC_TRNS, KC_TRNS,   \
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS,   KC_TRNS, KC_TRNS, \
    KC_TRNS,            KC_TRNS,   KC_TRNS
  ),

  [_L1] = LAYOUT_numpad_5x4(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS,   KC_TRNS, KC_TRNS,   \
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS,   KC_TRNS, KC_TRNS, \
    KC_TRNS,            KC_TRNS,   KC_TRNS
  ),


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
