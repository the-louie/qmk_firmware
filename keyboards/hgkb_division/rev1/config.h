/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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
#define VENDOR_ID       0x1336
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    hgkb
#define PRODUCT         division

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 14

// wiring of each half
// #define MATRIX_ROW_PINS { D7, E6, B4, B5 }
// #define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 } //uncomment this line and comment line above if you need to reverse left-to-right key order
#define MATRIX_ROW_PINS_RIGHT \
    { F1, F4, B4, D6, D7 }
#define MATRIX_COL_PINS_RIGHT \
    { F0, F7, C7, C6, B6, B5, D4 }

#define MATRIX_ROW_PINS \
    { C7, D7, C6, D3, D2 }
#define MATRIX_COL_PINS \
    { B4, B6, F7, F6, F5, F4, B5 }


// #define DIODE_DIRECTION COL2ROW
#define DIODE_DIRECTION ROW2COL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5


#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define EE_HANDS

/* serial.c configuration for split keyboard */
// #define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
// #define RGB_DI_PIN D3

// #define RGBLED_NUM 12    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
