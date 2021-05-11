/*
Copyright 2020 JEF BROWN

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

//Specifies that the compiler includes the header file only once, when compiling a source code file.
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID   0xFEED
#define PRODUCT_ID  0x1985
#define DEVICE_VER  0x0001
#define MANUFACTURER JEF_BROWN
#define PRODUCT BANG!
#define DESCRIPTION  Built by Jef for Mase and Troy

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix assignment */

#define MATRIX_ROW_PINS { B2, B1, B3, B4, B5,}
#define MATRIX_COL_PINS { A2, A6, A15, A8, A7, B0, A1, A0, B8, B13, B15, B9, B10, B11, B12 }

/* Encoder assignment */
#define ENCODERS_PAD_A { B7 }
#define ENCODERS_PAD_B { B6 }
#define TAP_CODE_DELAY 25

/* how many pulses the encoder registers between each detent */
#define ENCODER_RESOLUTION 2

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

// RGB
#define RGB_DI_PIN A9
#define RGBLED_NUM 1
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define DRIVER_LED_TOTAL 1
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
#define RGBLIGHT_DEFAULT_HUE 128
#define RGBLIGHT_DEFAULT_SAT 10
#define RGBLIGHT_DEFAULT_VAL 50
#define RGBLIGHT_LAYERS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

