/* Copyright 2020 Victor Lucachi
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

/* Base
 * ,--------------------.
 * |   7  |   8  |   9  |
 * |------+------+------|
 * |   4  |   5  |   6  |
 * |------+------+------|
 * |   1  |   2  |   3  |
 * `--------------------'
 */
[_BASE] = LAYOUT_ortho_3x3(
    KC_7,       KC_8,       KC_9,
    KC_4,       KC_5,       KC_6,
    KC_1,       KC_2,       KC_3
),

/* FN1
 * ,--------------------.
 * |   7  |   8  |   9  |
 * |------+------+------|
 * |   4  |   5  |   6  |
 * |------+------+------|
 * |   1  |   2  |   3  |
 * `--------------------'
 */
[_FN1] = LAYOUT_ortho_3x3(
    KC_7,       KC_8,       KC_9,
    KC_4,       KC_5,       KC_6,
    KC_1,       KC_2,       KC_3
),

/* FN2
 * ,--------------------.
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * `--------------------'
 */
[_FN2] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
),

/* FN3
 * ,--------------------.
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * |------+------+------|
 * |      |      |      |
 * `--------------------'
 */
[_FN3] = LAYOUT_ortho_3x3(
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS,
    KC_TRNS,       KC_TRNS,       KC_TRNS
)
};

/*
 * ROTARY ENCODER
 */

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),   ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_FN1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),               ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_FN2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),               ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [_FN3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),               ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif
