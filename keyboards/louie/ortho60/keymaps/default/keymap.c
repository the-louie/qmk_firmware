/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_0,     KC_ESC,   KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,   KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  NO_ACUT,  KC_BSPC,  \
        KC_1,     KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,   KC_U,     KC_I,     KC_O,     KC_P,     SE_AA,    SE_CIRC,  KC_ENT, \
        KC_2,     KC_LCTL,  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,   KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  SE_ASTR,  XXX,    \
        KC_3,     KC_LSFT,  KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,   KC_M,     KC_COMM,  KC_DOT,   SE_MINS,  KC_PGUP,  KC_UP,    KC_PGDN, \
        KC_4,     KC_LCTL,  KC_LGUI,  KC_LALT,  KC_1,  KC_2,  MO(1), KC_1,   KC_SPC,   KC_2,     KC_RGUI,  KC_RALT,  KC_LEFT,  KC_DOWN,  KC_RIGHT
    ),
    /* extras */
    [_FN] = LAYOUT(
        KC_5,     KC_1,   KC_1,     KC_1,     KC_1,    KC_1,  KC_1,  KC_1,   KC_1,      KC_1,     KC_1,     KC_1,     KC_1,     KC_1,    KC_1,  \
        KC_6,     KC_1,   KC_1,     KC_1,     KC_1,    KC_1,  KC_1,  KC_1,   KC_PGUP,   KC_UP,    KC_PGDN,  KC_1,     KC_1,     KC_1,    KC_1, \
        KC_7,     KC_1,   KC_1,     KC_1,     KC_1,    KC_1,  KC_1,  KC_1,   KC_LEFT,   KC_DOWN,  KC_RIGHT, KC_1,     KC_1,     KC_1,    XXX,  \
        KC_8,     KC_1,   NO_LESS,  NO_GRTR,  NO_PIPE, KC_1,  KC_1,  KC_1,   KC_1,      KC_1,     KC_1,     KC_1,     KC_1,     KC_1,    KC_1, \
        KC_9,     KC_1,   KC_LBRC,  KC_RBRC,  NO_BSLS, KC_1,  KC_2,  KC_2,   KC_3,      KC_4,     KC_1,     KC_1,     KC_1,     KC_1,    KC_1
    )
};
