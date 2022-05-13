#include QMK_KEYBOARD_H

#define _QWERTY 2
#define _MAC 1
#define _RAISE 2
#define _LOWER 3
#define _MACLOWER 4
#define _FN 5
#define _ADJUST 6

#define QWERTY DF(_QWERTY)
#define LOWER MO(_LOWER)
#define MACLOWER MO(_MACLOWER)
#define RAISE MO(_RAISE)
#define FN MO(_FN)
#define ADJUST MO(_ADJUST)

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define ALTG(kc) (kc | QK_RCTL | QK_RALT)

#define HR_A KC_A
#define HR_S KC_S
#define HR_D KC_D
#define HR_F KC_F

#define HR_J KC_J
#define HR_K KC_K
#define HR_L KC_L
#define HR_SC KC_SCLN

#define HR_LCBR ALTG(KC_7)      // {
#define HR_RCBR ALTG(KC_0)      // }
#define HR_LSBR ALTG(KC_8)      // [
#define HR_RSBR ALTG(KC_9)      // ]
#define HR_LT   KC_NUBS         // <
#define HR_GT   LSFT(KC_NUBS)   // >

#define HR_EXCL LSFT(KC_1)      // !
#define HR_QUOT LSFT(KC_2)      // "
#define HR_HASH LSFT(KC_3)      // #
#define HR_CURR LSFT(KC_4)      // ¤
#define HR_PERC LSFT(KC_5)      // %
#define HR_AMP  LSFT(KC_6)      // &
#define HR_SLSH LSFT(KC_7)      // /
#define HR_LPBR LSFT(KC_8)      // (
#define HR_RPBR LSFT(KC_9)      // )
#define HR_EQL  LSFT(KC_0)      // =

#define HR_PIPE RALT(HR_LT)     // |
#define HR_BSLS RALT(KC_MINS)   // backslash
#define HR_AT   RALT(KC_2)      // @
#define HR_DOLL RALT(KC_4)      // $
#define HR_QSTN LSFT(KC_MINS)   // ?

#define MR_LT   KC_GRV                // <
#define MR_GT   LSFT(MR_LT)           // >
#define MR_PIPE LALT(KC_7)            // |
#define MR_BSLS LSFT(LALT(KC_7))      // backslash
#define MR_AT   LALT(KC_2)            // @
#define MR_DOLL LALT(KC_4)            // $
#define MR_QSTN LSFT(KC_MINS)         // ?

bool lmb = false;
bool mmb = false;
bool rmb = false;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // PC
	LAYOUT(
		KC_ESC,  KC_1,      KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,     KC_7,     KC_8,     KC_9,    KC_0,    KC_MINS,
		KC_TAB,  KC_Q,      KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,    KC_LBRC,
		KC_BSPC, HR_A,      HR_S,    HR_D,    HR_F,    KC_G,    KC_EQL,       KC_NUHS, KC_H,     HR_J,     HR_K,     HR_L,    HR_SC,   KC_QUOT,
		KC_LSFT, KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,    KC_EQL,       KC_NUHS, KC_N,     KC_M,     KC_COMM,  KC_DOT,  KC_SLSH, KC_ENT,
		                    KC_LGUI, KC_LALT, KC_LCTL, KC_SPC,  RAISE,        KC_LCTL, LOWER,    RAISE,    KC_RALT,  FN
  ),

	// MAC
	LAYOUT(
        KC_ESC,  KC_1,      KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,     KC_7,     KC_8,     KC_9,    KC_0,    KC_MINS,
		KC_TAB,  KC_Q,      KC_W,    KC_E,    KC_R,    KC_T,                           KC_Y,     KC_U,     KC_I,     KC_O,    KC_P,    KC_LBRC,
		KC_BSPC, KC_A,      KC_S,    KC_D,    KC_F,    KC_G,   KC_EQL,        KC_NUHS, KC_H,     KC_J,     KC_K,     KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,   KC_EQL,        KC_NUHS, KC_N,     KC_M,     KC_COMM,  KC_DOT,  KC_SLSH, KC_ENT,
		                    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, RAISE,         KC_LGUI, MACLOWER, RAISE,    KC_RALT,  FN
  ),

	// RAISE - left thumb
	LAYOUT(
		_______, _______, _______, _______, _______, _______,                          _______, _______,   _______,  _______, _______, _______,
        KC_LBRC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                             HR_AT,    KC_7,     KC_8,     KC_9,    KC_0,    KC_MINS,
		KC_DEL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,         _______,HR_DOLL,  KC_4,     KC_5,     KC_6,    _______, _______,
		_______, _______, _______, _______, _______, _______, _______,        HR_QSTN, HR_QSTN,  KC_1,     KC_2,     KC_3,    _______, _______,
		                  _______, _______, _______, _______, _______,        _______, KC_0,     KC_DOT,   KC_COMM,  _______
  ),

	// LOWER - right thumb
	LAYOUT(
		_______, _______, _______, _______, _______, _______,                          _______, _______,   _______,  _______, _______, _______,
		_______, HR_EXCL, HR_QUOT, HR_HASH, HR_CURR, HR_PERC,                          HR_LSBR,  KC_HOME,  KC_UP,    KC_END,  HR_RSBR, KC_SLSH,
		KC_DEL,  _______, KC_ESC,  KC_TAB,  KC_BSPC, KC_DEL,  _______,        _______, HR_LCBR,  KC_LEFT,  KC_DOWN,  KC_RGHT, HR_RCBR, KC_NUHS,
		_______, _______, _______, HR_PIPE, HR_BSLS, KC_MINS, _______,        _______, HR_LPBR,  HR_EQL,   HR_LT,    KC_NUHS, HR_RPBR, _______,
		                  _______, _______, _______, _______, _______,        _______, KC_BSPC,  _______,  _______,  _______
  ),

	// MAC LOWER
	LAYOUT(
		_______, _______, _______, _______, _______, _______,                             _______,          _______,       _______, _______,        _______,          _______,
		_______, HR_EXCL, HR_QUOT, HR_HASH, HR_CURR, HR_PERC,                             LALT(KC_8),       LGUI(KC_LEFT), KC_UP,   LGUI(KC_RIGHT), LALT(KC_9),       KC_SLSH,
		KC_DEL,  _______, KC_ESC,  KC_TAB,  KC_BSPC, KC_DEL,  _______,           _______, RSFT(RALT(KC_8)), KC_LEFT,       KC_DOWN, KC_RGHT,        RSFT(RALT(KC_9)), KC_NUHS,
		_______, _______, _______, MR_PIPE, MR_BSLS, KC_MINS, _______,           _______, LSFT(KC_8),       LSFT(KC_0),    MR_LT,   KC_NUHS,        LSFT(KC_9),       _______,
		                  _______, _______, _______, _______, _______,           _______, _______,          _______,       _______, _______
  ),

	// FN
	LAYOUT(
        _______, _______, _______, _______, _______, _______,                             _______,     _______,     _______,      _______,      _______,      _______,
		RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,        KC_7,        KC_8,         KC_9,         KC_0,         KC_MINS,
		KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,       _______,     KC_F6,       KC_F7,       KC_F8,        KC_F9,        KC_F10,       KC_F11,
		RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,       _______,     _______,     _______,     _______,      _______,      DF(_MAC),     DF(_QWERTY),
		                  _______, _______, _______, _______, _______,       LCTL(KC_F7), LCTL(KC_F8), LCTL(KC_F9), LCTL(KC_F10), _______
  ),

};
