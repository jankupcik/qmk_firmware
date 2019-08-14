/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

/* We need to use the sarial communication since we used a cable to carry the data signal for the LED strip */
#define USE_SERIAL

/* Select hand configuration: you need to use as master the hand that drives the LED strip */
#define MASTER_LEFT
// #define MASTER_RIGHT

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

// Let's say the keyboard definition contains LSFT_T(KC_I), i.e. short press = "i", long press = "SHIFT".
//   w/o IGNORE_MOD_TAP_INTERRUPT: quick typing "it" leads to "T"
//   w/  IGNORE_MOD_TAP_INTERRUPT: "it" is written correctly
#define IGNORE_MOD_TAP_INTERRUPT

