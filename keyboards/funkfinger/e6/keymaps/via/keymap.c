#include "kb.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_3x2(
        KC_A, KC_B,   KC_C,
        KC_D, KC_E,   MO(1)
    ),

    [1] = LAYOUT_ortho_3x2(
        RESET, KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS,   KC_TRNS
    ),

    [2] = LAYOUT_ortho_3x2(
        KC_TRNS, KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS,   KC_TRNS
    ),

    [3] = LAYOUT_ortho_3x2(
        KC_TRNS, KC_TRNS,   KC_TRNS,
        KC_TRNS, KC_TRNS,   KC_TRNS
    )

};

