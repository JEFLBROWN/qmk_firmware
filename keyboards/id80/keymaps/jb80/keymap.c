#include QMK_KEYBOARD_H
#include "DEFINE.C"
#include "LEADER.C"
// #include "COMBOS.C"
#include "MACROS.C"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DF] = LAYOUT(
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,  KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  SPECIAL, KC_HOME,
  MEDIA,   KC_1,    KC_2,    KC_3,   KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC, KC_PGUP,
  KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
  FUNCTON, KC_A,    KC_S,    KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,  KC_DEL,           KC_UP,
  KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,                    UTILITY, KC_LEAD,           KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DCVAL01, ICVAL01, _______, _______,
  _______, TABLEFT, CLSETAB, TABRIGT, RELOAD,  _______, _______, _______, KC_UP,   _______, _______, DEINDNT, INDENT,  _______, _______,
  XXXXXXX, KC_LALT, DSKTOPL, DSKTOPR, FULLSCR, _______, KC_HOME, KC_LEFT, KC_END,  KC_RGHT, _______, _______, _______,
  _______, _______, KC_DEL,  KC_LCTL, _______, _______, NEWTABS, KC_DOWN, _______, _______, _______, DELLINE, LAYERUP,
  _______, _______, _______,                   FOCUSRL,                   _______, _______,          _______, LAYERDN, _______
  ),

  [_UT] = LAYOUT(
  _______, ONECOLU, TWOCOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  ACTYBAR, SIDEBAR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, OPENERS, _______, _______, _______, _______, _______,
  _______, _______, WINSNIP, _______, EXPLORE, _______, _______, _______, _______, JUMPERS, _______, _______, _______,
  _______, _______, DARKMOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,                   _______,                   XXXXXXX, PASSKEY,          _______, _______, _______
  ),

  [_ME] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,                   _______,                   _______, _______,          _______, _______, _______
  ),

  [_SP] = LAYOUT(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DISOVER, XXXXXXX, DISDEAF,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, CMB_TOG, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  RESET, _______, _______,                     _______,                   _______, _______,          _______, _______, _______
  )

// Design KEY MAP
// [_DSG] = LAYOUT(
//  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//  _______, _______, _______,                   _______,                   _______, _______,          _______, _______, _______

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// make id80:jb80
