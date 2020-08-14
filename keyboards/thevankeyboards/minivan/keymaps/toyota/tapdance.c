typedef struct {
  bool is_press_action;
  int state;
} tap;

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3
};

enum { // Tap Dance Keys
  LPBK = 0,
  RPBK,
  FLFO,
  UNFO,
  F111,
  F212,
  SFWK, // shift and walk
  GRUG,
  TBSP,
  CRPR, // Crouch tap and Prone hold
  REMO, // Weapon Reload & Fire Mode
  GDGT  // Gadget and Gear
};

int cur_dance (qk_tap_dance_state_t *state);

//Functions associated with individual tap dances

void crpr_finished (qk_tap_dance_state_t *state, void *user_data);
void crpr_reset (qk_tap_dance_state_t *state, void *user_data);

void remo_finished (qk_tap_dance_state_t *state, void *user_data);
void remo_reset (qk_tap_dance_state_t *state, void *user_data);

void gdgt_finished (qk_tap_dance_state_t *state, void *user_data);
void gdgt_reset (qk_tap_dance_state_t *state, void *user_data);

void tbsp_finished (qk_tap_dance_state_t *state, void *user_data);
void tbsp_reset (qk_tap_dance_state_t *state, void *user_data);



//Determine the current tap dance state
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->interrupted || !state->pressed)
    return SINGLE_TAP;
  else return SINGLE_HOLD;
};

//////////// CRPR /////////////////
static tap crpr_state = {
  .is_press_action = true,
  .state = 0
};

void crpr_finished (qk_tap_dance_state_t *state, void *user_data) {
  crpr_state.state = cur_dance(state);
  switch (crpr_state.state) {
    case SINGLE_TAP:  register_code(KC_C); break;
    case SINGLE_HOLD: register_code(KC_Z); break;
  }
}

void crpr_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (crpr_state.state) {
    case SINGLE_TAP:  unregister_code(KC_C); break;
    case SINGLE_HOLD: unregister_code(KC_Z); break;
  }
  crpr_state.state = 0;
}

//////////// REMO /////////////////
static tap remo_state = {
  .is_press_action = true,
  .state = 0
};

void remo_finished (qk_tap_dance_state_t *state, void *user_data) {
  remo_state.state = cur_dance(state);
  switch (remo_state.state) {
    case SINGLE_TAP: register_code(KC_R); break;
    case SINGLE_HOLD: register_code(KC_LBRC); break;
  }
}

void remo_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (remo_state.state) {
    case SINGLE_TAP:  unregister_code(KC_R); break;
    case SINGLE_HOLD: unregister_code(KC_LBRC); break;
  }
  remo_state.state = 0;
}

//////////// GDGT /////////////////
static tap gdgt_state = {
  .is_press_action = true,
  .state = 0
};

void gdgt_finished (qk_tap_dance_state_t *state, void *user_data) {
  gdgt_state.state = cur_dance(state);
  switch (gdgt_state.state) {
    case SINGLE_TAP: register_code(KC_X); break;
    case SINGLE_HOLD: register_code(KC_BSLS); break;
  }
}

void gdgt_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (gdgt_state.state) {
    case SINGLE_TAP:  unregister_code(KC_X); break;
    case SINGLE_HOLD: unregister_code(KC_BSLS); break;
  }
  gdgt_state.state = 0;
}

//////////// Tab Swap /////////////////
static tap tbsp_state = {
  .is_press_action = true,
  .state = 0
};

void tbsp_finished (qk_tap_dance_state_t *state, void *user_data) {
  tbsp_state.state = cur_dance(state);
  switch (tbsp_state.state) {
    case SINGLE_TAP: register_code(KC_COMM); break;
    case SINGLE_HOLD: register_code16(KC_TAB); break;
  }
}

void tbsp_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (tbsp_state.state) {
    case SINGLE_TAP:  unregister_code(KC_COMM); break;
    case SINGLE_HOLD: unregister_code16(KC_TAB); break;
  }
  tbsp_state.state = 0;
}

//////////// Shift Swap /////////////////
// static tap tbsp_state = {
//   .is_press_action = true,
//   .state = 0
// };

// void tbsp_finished (qk_tap_dance_state_t *state, void *user_data) {
//   tbsp_state.state = cur_dance(state);
//   switch (tbsp_state.state) {
//     case SINGLE_TAP: register_code(KC_COMM); break;
//     case SINGLE_HOLD: register_code16(KC_LSFT); break;
//   }
// }

// void tbsp_reset (qk_tap_dance_state_t *state, void *user_data) {
//   switch (tbsp_state.state) {
//     case SINGLE_TAP:  unregister_code(KC_COMM); break;
//     case SINGLE_HOLD: unregister_code16(KC_LSFT); break;
//   }
//   tbsp_state.state = 0;
// }

qk_tap_dance_action_t tap_dance_actions[] = {
  [LPBK] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_LCBR),
  [RPBK] = ACTION_TAP_DANCE_DOUBLE(KC_RPRN, KC_RCBR),
  [FLFO] = ACTION_TAP_DANCE_DOUBLE(FULL, FOCUS),
  [UNFO] = ACTION_TAP_DANCE_DOUBLE(UNFOLD, FOLD),
  [F111] = ACTION_TAP_DANCE_DOUBLE(KC_F1, KC_F11),
  [F212] = ACTION_TAP_DANCE_DOUBLE(KC_F2, KC_F12),
  [GRUG] = ACTION_TAP_DANCE_DOUBLE(GROUP, UNGROUP),// group/ungroup
  [CRPR] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, crpr_finished, crpr_reset,132),
  [TBSP] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, tbsp_finished, tbsp_reset,140),
  [REMO] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, remo_finished, remo_reset,148),
  // [SWAP] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, swap_finished, swap_reset,96),
  [GDGT] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, gdgt_finished, gdgt_reset,112)
};
