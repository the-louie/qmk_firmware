/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_swedish.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        KC_0,     KC_ESC,   KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,   KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  NO_ACUT,  KC_BSPC,  \
        KC_1,     KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,   KC_U,     KC_I,     KC_O,     KC_P,     SE_AA,    SE_CIRC,  KC_ENT, \
        KC_2,     KC_LCTL,  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,   KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  SE_ASTR,  XXX,    \
        KC_3,     KC_LSFT,  KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,   KC_M,     KC_COMM,  KC_DOT,   SE_MINS,  KC_PGUP,  KC_UP,    KC_PGDN, \
        KC_4,     KC_LCTL,  KC_LGUI,  KC_LALT,  KC_1,  KC_2,  MO(1), KC_1,   KC_SPC,   KC_2,     KC_RGUI,  KC_RALT,  KC_LEFT,  KC_DOWN,  KC_RIGHT
    ),
    /* extras */
    [1] = LAYOUT(
        KC_5,     KC_1,   KC_1,     KC_1,     KC_1,    KC_1,  KC_1,  KC_1,   KC_1,      KC_1,     KC_1,     KC_1,     KC_1,     KC_1,    KC_1,  \
        KC_6,     KC_1,   KC_1,     KC_1,     KC_1,    KC_1,  KC_1,  KC_1,   KC_PGUP,   KC_UP,    KC_PGDN,  KC_1,     KC_1,     KC_1,    KC_1, \
        KC_7,     KC_1,   KC_1,     KC_1,     KC_1,    KC_1,  KC_1,  KC_1,   KC_LEFT,   KC_DOWN,  KC_RIGHT, KC_1,     KC_1,     KC_1,    XXX,  \
        KC_8,     KC_1,   NO_LESS,  NO_GRTR,  NO_PIPE, KC_1,  KC_1,  KC_1,   KC_1,      KC_1,     KC_1,     KC_1,     KC_1,     KC_1,    KC_1, \
        KC_9,     KC_1,   KC_LBRC,  KC_RBRC,  NO_BSLS, KC_1,  KC_2,  KC_2,   KC_3,      KC_4,     KC_1,     KC_1,     KC_1,     KC_1,    KC_1
    )
};
