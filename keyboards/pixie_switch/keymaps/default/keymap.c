/* Copyright 2018 JEF BROWN (Hello@jefbrown.com)
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

#define BASE 0
#define LV1  1
#define ______ KC_TRNS

// Tap Dance Defined
enum {
  TD_SOMETHING = 0,
  TD_ELSE,
  TD_ANOTHER
};

// Tap Dances
qk_tap_dance_action_t tap_dance_actions[] = {
  //example
  // [TD_SOMETHING] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_B),
  // [TD_ELSE] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_B),
  // [TD_ANOTHER] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_B)
  // Other declarations would go here, separated by commas, if you have them
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT ( /* Base */
  KC_A, KC_B, KC_SPC, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, TO(LV1), \
  KC_Q, KC_R, KC_SPC, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, TO(LV1), \
  KC_X, KC_Y, KC_SPC, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, TO(LV1) \
),

[LV1] = LAYOUT ( /* Level 1 */
  KC_1, KC_2, KC_SPC, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, TO(BASE), \
  KC_4, KC_5, KC_SPC, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, TO(BASE), \
  KC_7, KC_8, KC_SPC, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, TO(BASE) \
)

};

const uint16_t PROGMEM fn_actions[] = {

};


// void matrix_init_user(void) {
//
// }
//
// void matrix_scan_user(void) {
//
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {
}

// Encoder
static uint8_t encoder_state = 0;
static int8_t encoder_value = 0;
// static int8_t encoder_LUT[] = { 0, -1, 1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0 };

void matrix_init_user(void) {
    encoder_state = PIND & 0x3;
}

void matrix_scan_user(void) {
    encoder_state <<= 2;
    encoder_state |= (PIND & 0x3);
    encoder_value += encoder_LUT[encoder_state & 0xF];
    if (encoder_value >= 4) {
        register_code(KC_PGUP);
        unregister_code(KC_PGUP);
    }
    if (encoder_value <= -4) {
        register_code(KC_PGDN);
        unregister_code(KC_PGDN);
    }
    encoder_value %= 4;
}
