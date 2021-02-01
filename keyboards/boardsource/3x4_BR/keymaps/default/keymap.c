#include QMK_KEYBOARD_H

enum layers {
    _MAIN,
    _RAISE,
    _LOWER,
};

// Readability keycodes
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  RAISE,   KC_RBRC, KC_LBRC, KC_DEL,
  KC_R,    KC_6,    KC_5, KC_4,
  KC_PAUS, KC_3,    KC_2, KC_1
  ),

  [_RAISE] = LAYOUT(
    _______, A(KC_F4),   KC_GRV, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______
  )





};
