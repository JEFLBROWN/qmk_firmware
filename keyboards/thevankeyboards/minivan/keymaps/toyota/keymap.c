#include QMK_KEYBOARD_H
#include "DEFINE.C"
#include "TAPDANCE.C"
#include "COMBOS.C"
#include "MACROS.C"

enum custom_keycodes { // Custom Keycodes
  KEY = SAFE_RANGE,
  GITHUB,
  EMAIL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DF] = LAYOUT_arrow( /* Default */
    EXTRAS,  KC_Q,     KC_W,      KC_E,     KC_R,    KC_T,    KC_Y,     KC_U,   KC_I,     KC_O,    KC_P,     KC_BSPC,
    NUMBER,  KC_A,     KC_S,      KC_D,     KC_F,    KC_G,    KC_H,     KC_J,   KC_K,     KC_L,    KC_SCLN,  KC_QUOT,
    KC_LSFT, KC_Z,     KC_X,      KC_C,     KC_V,    KC_B,    KC_N,     KC_M,   KC_COMM,  KC_DOT,  KC_UP,    KC_SLSH,
    KC_LCTL, KC_LALT,  KC_LGUI,             SYMBOL,  KC_SPC,           FUNCTN,   KC_LEFT, KC_DOWN,  KC_RIGHT
  ),

  [_GM] = LAYOUT_arrow( /* Game */
    EXTRAS,   KC_Q,     KC_W,      KC_E,   TD(REMO), KC_T,    KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_BSPC,
    KC_TAB,   KC_A,     KC_S,      KC_D,   KC_F,     KC_G,    KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_ENT,
    KC_LSFT,  KC_Z,     TD(GDGT),  KC_C,   KC_V,     KC_B,    KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_UP,    KC_SLSH,
    KC_LCTL,  KC_LALT,  KC_LGUI,           KC_SPC,  KC_SPC,          FUNCTN,   KC_LEFT,  KC_DOWN,  KC_RIGHT
  ),

  [_SY] = LAYOUT_arrow( /* Symbols & SUBLIME */  
    KC_GRV,  KC_EXLM,  KC_AT,   KC_HASH,  KC_DLR,   _______,  _______, KC_CIRC,  KC_ASTR, _______, KC_PERC, KC_DEL,
    _______, KC_AMPR,  KC_DLR,  KC_TILD,  TD(LPBK), _______,  _______, TD(RPBK), KC_MINS, KC_LBRC, KC_RBRC, KC_EQL,
    _______, _______,  _______, _______,  _______,  _______,  KC_UNDS, _______,  _______, _______, LINEU,   KC_BSLS,
    _______, _______,  _______,           XXXXXXX,  _______,           _______, DEIND,   LINED,   INDEN
  ),

  [_NM] = LAYOUT_arrow( /* Numbers */
    _______, CLSETAB, TBLEFT, TBRIGHT,  RELOAD,  _______, _______, KC_7,  KC_8,  KC_9,   _______, KC_MINS,
    XXXXXXX, _______, DESKSL,  DESKSR,  TD(FLFO),_______, _______, KC_4,  KC_5,  KC_6,   _______, KC_PLUS,
    _______, _______, _______, _______, _______, _______, NEWTAB,  KC_1,  KC_2,  KC_3,    LINEU,  KC_PENT,
    _______, _______, _______,          _______, KC_SPC,         KC_0,  _______, LINED, _______
  ),
 
  [_FN] = LAYOUT_arrow( /* Function */
    KC_GRV, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, KC_DEL,
    _______, _______, _______, _______, TD(UNFO), GRUG,   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, SETTING, _______, LAYUP,  _______,
    _______, _______, _______,          _______, GAMES,            _______, _______, LAYDN,  _______ 
),

  [_UT] = LAYOUT_arrow( /* Utility */
    SIDEBAR, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    SBSELCT, BKSELCT, _______, _______, _______, _______, _______, _______, DELLINE, _______, _______, _______,
    _______, _______, DARKMOD, _______, _______, _______, _______, LAYOUT1, LAYOUT2, _______, _______, _______,
    EMAIL,   GITHUB,  KEY,              _______, _______,          RGB_TOG, VIEW01,  _______, VIEW02
  ),  

  [_XT] = LAYOUT_arrow( /* Extra Utility */
    XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, KC_F7,   KC_F8,    KC_F9, _______, _______,
    _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, KC_F4,   KC_F5,    KC_F6, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, TD(F111),TD(F212), KC_F3, _______, _______,
    RESET, _______, _______,          _______, _______,          _______, _______, _______, _______
  )

  // [_TP] = LAYOUT_arrow( /* TEMPLATE */
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //   _______, _______, _______,          _______, _______,          _______, _______, _______, _______
  // )
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// cd /c/Users/jefbr/Documents/GitHub/qmk_firmware
// make thevankeyboards/minivan:toyota

