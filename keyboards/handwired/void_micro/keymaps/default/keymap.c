/* Copyright 2021 Victor Lucachi
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,--------------------------.
 * |   1  |   2  |   3  |  4  |
 * `--------------------------'
 */
[_BASE] = LAYOUT(
    KC_MPLY,    KC_1,  KC_2,    KC_3
),

/* FN
 * ,--------------------------.
 * |   1  |   2  |   3  |  4  |
 * `--------------------------'
 */
[_FN1] = LAYOUT(
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
),

/* FN
 * ,--------------------------.
 * |   1  |   2  |   3  |  4  |
 * `--------------------------'
 */
[_FN2] = LAYOUT(
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
),

/* FN
 * ,--------------------------.
 * |   1  |   2  |   3  |  4  |
 * `--------------------------'
 */
[_FN3] = LAYOUT(
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
)
};

/*
 * ROTARY ENCODER
 */

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
      if (clockwise) {
        tap_code(KC_VOLU);
      } else {
        tap_code(KC_VOLD);
      }
  }
}
