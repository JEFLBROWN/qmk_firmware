
enum combos { // Combos to make a new one you need to change the COMBO COUNT in Config.h
  ZOOMI, // zoomin
  ZOOMO, // zoomout
  ZOOM0, // zoom to 100
  PALPC // private window and command palette for ST3
};

// Combo Functions
const uint16_t PROGMEM zoomin_combo[] = {KC_Z, KC_X, COMBO_END}; // zoom in
const uint16_t PROGMEM zoomout_combo[] = {KC_Z, KC_C, COMBO_END}; // zoom out
const uint16_t PROGMEM zoom100_combo[] = {KC_Z, KC_V, COMBO_END}; // zoom 100%
const uint16_t PROGMEM palpri_combo[] = {KC_Q, KC_P, COMBO_END};

combo_t key_combos[COMBO_COUNT] = { // Combo Functions - this is what the combo's listed above will do when struck.
  [ZOOMI] = COMBO(zoomin_combo, KC_ZOMI), // Zoom in
  [ZOOMO] = COMBO(zoomout_combo, KC_ZOMO), // Zoom out
  [ZOOM0] = COMBO(zoom100_combo, KC_ZOM0), // Zoom 100
  [PALPC] = COMBO(palpri_combo, PRVWIN), // Private Browser window and Command Palette
};
