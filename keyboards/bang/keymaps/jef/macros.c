enum custom_keycodes { // Custom Keycodes
  PASSKEY = SAFE_RANGE,
  GITHUB,
  EMAIL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case PASSKEY:
      if (record->event.pressed) {
        SEND_STRING("@j2610168b!");
      } else {
      }
      break;
}
  return true;
};