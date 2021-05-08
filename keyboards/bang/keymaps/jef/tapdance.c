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
  FNCD = 0, // function tap for ctrl+k
};

int cur_dance (qk_tap_dance_state_t *state);

//Functions associated with individual tap dances

void fncd_finished (qk_tap_dance_state_t *state, void *user_data);
void fncd_reset (qk_tap_dance_state_t *state, void *user_data);

//Determine the current tap dance state
int cur_dance (qk_tap_dance_state_t *state) {
  if (state->interrupted || !state->pressed)
    return SINGLE_TAP;
  else return SINGLE_HOLD;
};

//////////// FNCD /////////////////
static tap fncd_state = {
  .is_press_action = true,
  .state = 0
};

void fncd_finished (qk_tap_dance_state_t *state, void *user_data) {
  fncd_state.state = cur_dance(state);
  switch (fncd_state.state) {
    case SINGLE_TAP:  register_code(C(KC_K)); break;
    case SINGLE_HOLD: register_code(MO(_FN)); break;
  }
}

void fncd_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (fncd_state.state) {
    case SINGLE_TAP:  unregister_code(C(KC_K)); break;
    case SINGLE_HOLD: unregister_code(MO(_FN)); break;
  }
  fncd_state.state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [FNCD] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(NULL, fncd_finished, fncd_reset,132),
};
