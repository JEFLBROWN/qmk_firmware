#define TRANS ______
#define SPIN  KC_MUTE // The encoder Push button

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */

    [0] = LAYOUT_C_1x4_R(
          KC_ESC,  KC_1,    KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,   KC_10,  KC_MINS, KC_EQL,  KC_BSPC,
    KC_1  KC_TAB,  KC_Q,    KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS,
    KC_2, LT(),    KC_A,    KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,   KC_SCLN,KC_QUOT, KC_ENT,
    KC_3, KC_ALT,  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COM, KC_DOT, KC_SLSH, KC_UP, TG(),
    SPIN, KC_LCTL, KC_LALT, KC_GUI,               KC_SPACE,                 MO(),     KC_LEFT, KC_DOWN, KC_RGHT
    ),


    [1] = LAYOUT_C_1x4_R(
            ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______, ______, ______, ______,                 ______,                                 ______, ______, ______, ______
    )
};

//RGB light


// Encoder
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {        // Spin it clockwise, Volume Up
            tap_code(KC_VOLU);
        } else {                // counter-clockwise, turn the volume down
            tap_code(KC_VOLD);
        }
}
