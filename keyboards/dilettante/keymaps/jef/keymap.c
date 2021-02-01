#include "DEFINE.C"
// #include "LEADER.C"
// #include "COMBOS.C"
// #include "MACROS.C"
// #include "TAPDANCE.C"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _FN,
    _UT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_C_1x3_R(
          KC_ESC,  KC_1,    KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_10, KC_MINS, KC_EQL, KC_BSPC,
    PGUP,  KC_TAB,  KC_Q,    KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    PGDN, FUNCTON  KC_A,    KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    ENCDR, KC_ALT,  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COM, KC_DOT, KC_SLSH, KC_UP, SPECIAL,
           KC_LCTL, KC_LALT, KC_GUI,               KC_SPACE,               UTILITY, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FN] = LAYOUT_C_1x3_R(
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, ______,                 ______,                                 ______, ______, ______, ______
    ),

    [_UT] = LAYOUT_C_1x3_R(
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
            ______, ______, ______,                 ______,                                 ______, ______, ______, ______
    )
};


//RGB


// ENCODER
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
}
