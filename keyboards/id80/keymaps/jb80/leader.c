// Leader key
LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_F) {
      // Anything you can do in a macro.
      SEND_STRING("QMK is awesome.");
    }

    // Email
    SEQ_TWO_KEYS(KC_J, KC_B) {
      SEND_STRING("hello@jefbrown.com");
    }
    // Focus Outline chord
    SEQ_TWO_KEYS(KC_O, KC_L) {
      register_code(KC_LCTL);
      register_code(KC_K);
      unregister_code(KC_K);
      unregister_code(KC_LCTL);
      register_code(KC_L);
      unregister_code(KC_L);
    }

    //Win V Desktops
    SEQ_ONE_KEY(KC_TAB){
      register_code(KC_LGUI);
      register_code(KC_TAB);
      unregister_code(KC_TAB);
      unregister_code(KC_LGUI);
    }

    //1pw
    SEQ_ONE_KEY(KC_DOT) {
      register_code(KC_LCTL);
      register_code(KC_DOT);
      unregister_code(KC_DOT);
      unregister_code(KC_LCTL);
      SEND_STRING("@j2610168b!");
      register_code(KC_ENT);
      unregister_code(KC_ENT);
    }

    // SLEEP
    SEQ_FIVE_KEYS(KC_S, KC_L, KC_E, KC_E, KC_P) {
    register_code(KC_SLEP);
    }

    // Save
    SEQ_ONE_KEY(KC_S) {
      register_code(KC_LCTL);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LCTL);
    }

// VS Code
    // show explorer ctrl+Shift+e
    // Zen Mode
    // delete everything before the cursor (unknown)

  }
}

