/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xB00B
#define PRODUCT_ID      0x4F60 // "O" 60
#define DEVICE_VER      0x0002
#define MANUFACTURER Louie
#define PRODUCT Ortho60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

//#define MATRIX_COL_PINS { B11, B10, B1, B0, A7, A6, A5, A4, A3, A2, A1, A0 }
//#define MATRIX_ROW_PINS { B3, B4, B5, B6, B7 }

//  louie           ROW   1   2   3   4   5
#define MATRIX_ROW_PINS { C1, C5, B5, D1, D0 }
#define MATRIX_COL_PINS { C0, D4, C4, B4, C7, D5, F6, D7, C6, D3, F7, D6, B6, B7 }
//               COLUMN   0   1   2   3   4   5   6   7   8   9   10  11  12  13

#define DIODE_DIRECTION ROW2COL

// #define BACKLIGHT_PIN A8
// #define BACKLIGHT_PWM_DRIVER PWMD1
// #define BACKLIGHT_PWM_CHANNEL 1
// #define BACKLIGHT_LEVELS 6
// #define BACKLIGHT_BREATHING
// #define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/*
#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN E6
#define RGBLED_NUM 69
#define WS2812_SPI SPID2
*/


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
