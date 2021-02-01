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
#define PRODUCT Dilettante
#define DESCRIPTION  Board for all trades

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* key matrix assignment */

#define MATRIX_ROW_PINS { B2, B8, B3, B9, B14, B15 }
#define MATRIX_COL_PINS { A15, A8, A7, A6, B0, B1, B4, B5, B12, B11, B10, B13, A0, A1, A2 }

/* Encoder assignment */
#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B7 }

/* how many pulses the encoder registers between each detent */
#define ENCODER_RESOLUTION 4

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

// RGB
#define RGB_DI_PIN A9
#define RGBLED_NUM 16
#define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// #define DRIVER_LED_TOTAL 1
// #ifdef RGB_DI_PIN
// #    define RGBLIGHT_HUE_STEP 8
// #    define RGBLIGHT_SAT_STEP 8
// #    define RGBLIGHT_VAL_STEP 100
// #    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */

// #    define RGBLIGHT_EFFECT_BREATHING
/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//#    define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
//#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
//#endif

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

