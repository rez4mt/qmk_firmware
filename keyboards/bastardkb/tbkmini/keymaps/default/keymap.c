/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BACKSLASH,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        LT(1,KC_ENT), KC_LGUI, MT(MOD_LALT,KC_TAB),     KC_RALT, MO(2), KC_SPC
        //`--------------------------'                   `--------------------------'

        ),

    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
        KC_TRNS, KC_SPC, _______,       MO(3), KC_ENT, KC_RALT
        //`--------------------------'  `--------------------------'
        ),

    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                              ,-----------------------------------------------------.
           KC_ESC  ,KC_ASTR,  KC_MINS,  KC_LCBR, KC_RCBR, KC_DLR,                               KC_EXLM, KC_AT, KC_HASH, KC_PERC, KC_BSPC, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                              |--------+--------+--------+--------+--------+--------|
           KC_LSFT ,KC_PIPE,  KC_EQUAL, KC_LPRN, KC_RPRN, KC_GT,                                KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------|                              |--------+--------+--------+--------+--------+--------|
           KC_LCTL ,KC_CIRC,  KC_UNDS,  KC_LBRC, KC_RBRC, KC_AMPR,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //|--------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
        LGUI(KC_ENT), KC_LALT, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS
        //`--------------------------'  `--------------------------'
        )
};
