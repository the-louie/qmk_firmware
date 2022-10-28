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

// N.B
// First column is not connected on lou:1e v1.0
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        XXX,     KC_ESC,   KC_1,     KC_2,     KC_3,   KC_4,   KC_5,   KC_6,  KC_7, KC_8,     KC_9,     KC_0,     KC_MINS,   NO_ACUT,   KC_BSPC,  \
        XXX,     KC_TAB,   KC_Q,     KC_W,     KC_E,   KC_R,   KC_T,   KC_Y,  KC_U, KC_I,     KC_O,     KC_P,     SE_ARNG,   SE_DIAE,   XXX, \
        XXX,     MO(2),    KC_A,     KC_S,     KC_D,   KC_F,   KC_G,   KC_H,  KC_J, KC_K,     KC_L,     SE_ODIA,  SE_ADIA,   SE_QUOT,   KC_ENT,    \
        XXX,     KC_LSFT,  KC_Z,     KC_X,     KC_C,   KC_V,   KC_B,   KC_N,  KC_M, SE_COMM,  SE_DOT,   SE_MINS,  KC_PGUP,   KC_UP,     KC_PGDN, \
        XXX,     KC_LCTL,  KC_LGUI,  KC_LALT,  XXX,    KC_SPC, XXX,    MO(1), XXX,  KC_SPC,   XXX,      KC_RALT,  KC_LEFT,   KC_DOWN,   KC_RIGHT
    ),
    /* extras */
    [1] = LAYOUT(
        XXX,     XXX,       KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,  \
        XXX,     XXX,       XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        KC_PGUP,    KC_UP,      KC_PGDN,    XXX,        XXX,        XXX,        XXX, \
        XXX,     KC_CAPS,   XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        KC_LEFT,    KC_DOWN,    KC_RIGHT,   XXX,        XXX,        XXX,        KC_PSCR,  \
        XXX,     XXX,       KC_NUBS,    LSFT(KC_NUBS),    RALT(KC_7),    XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        XXX, \
        XXX,     KC_LCTL,   KC_LGUI,    KC_LALT,    XXX,        XXX,        XXX,        XXX,        XXX,        XXX,        KC_RALT,    XXX,        KC_HOME,    XXX,        KC_END
    ),
    /* RGB */
    [2] = LAYOUT(
        XXX,     RGB_TOG,  RGB_M_P,  RGB_M_B,  RGB_M_R,  RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X,  RGB_M_G,    RGB_M_T,    XXX,   XXX,     XXX,   XXX,  \
        XXX,     RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_VAI,  RGB_VAD,  XXX,      XXX,     XXX,      XXX,        XXX,        XXX,   XXX,     XXX,   XXX, \
        XXX,     XXX,      XXX,      XXX,      XXX,      XXX,      XXX,      XXX,     XXX,      XXX,        XXX,        XXX,   XXX,     XXX,   XXX,  \
        XXX,     XXX,      XXX,      XXX,      XXX,      XXX,      XXX,      XXX,     XXX,      XXX,        XXX,        XXX,   XXX,     XXX,   XXX, \
        XXX,     XXX,      XXX,      XXX,      XXX,      XXX,      XXX,      XXX,     XXX,      XXX,        XXX,        XXX,   XXX,     XXX,   XXX
    )
};
