//  Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KEY:
      if (record->event.pressed) {
        SEND_STRING("@j2610168b!");
      } else {
      }
      break;

    case EMAIL:
      if (record->event.pressed) {
        SEND_STRING("hello@jefbrown.com");
      } else {
      }
      break;

    case GITHUB:
      if (record->event.pressed) {
        SEND_STRING("RXj64TzjNGNMcgTxrAsm");
      } else {
      }
      break;
}
  return true;
};