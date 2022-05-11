#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY_WIN 0
#define _QWERTY_MAC 1
#define _LOWER 3
#define _RAISE 4
#define _NUM 5
#define _ADJUST 16

enum custom_keycodes {
  QWERTY_WIN = SAFE_RANGE,
  QWERTY_MAC,
  LOWER,
  RAISE,
  NUM,
  ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define NUM    MO(_NUM)
#define ADJUST MO(_ADJUST)

#define ______ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY_WIN] = LAYOUT(
        KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5,                KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A,
  KC_BACKSPACE,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_A,    KC_A, KC_H, KC_J, KC_K, KC_L, KC_A, KC_A,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_A,    KC_A, KC_N, KC_M, KC_A, KC_A, KC_SLSH, KC_ENTER,
          KC_LWIN, KC_LALT, KC_LCTL, KC_SPACE, RAISE,   KC_LCTL, LOWER, NUM, KC_A, ADJUST
    )
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//     case COLEMAK:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_COLEMAK);
//       }
//       return false;
//     case DVORAK:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_DVORAK);
//       }
//       return false;
//   }
//   return true;
// }
