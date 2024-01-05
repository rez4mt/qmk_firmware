// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,  KC_I,    KC_O,   LT(3, KC_P),
    LSFT_T(KC_A), KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,  KC_K,    KC_L,   RSFT_T(KC_SCLN),
    LCTL_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,  KC_COMM, KC_DOT, RCTL_T(KC_SLSH),
                           KC_TAB,  LT(2,KC_ENT),             MT(KC_RGUI,KC_SPC), LT(1, KC_GRV)
  ),

  [1] = LAYOUT(
    KC_ASTR, KC_MINS, KC_LBRC, KC_RBRC, KC_DOLLAR,       KC_EXLM, KC_AT,   KC_HASH,  KC_PERC,  KC_BSPC,
    KC_PIPE, KC_EQL,  KC_LPRN, KC_RPRN, KC_GT,           KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT,  KC_QUOT,
    KC_CIRC, KC_UNDS, KC_LBRC, KC_RBRC, KC_AMPR,         KC_QUES, KC_DQT,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                               KC_ESC,  KC_TRNS,         KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_UNDS, KC_PLUS, KC_TRNS, KC_TRNS, QK_BOOT,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  ),

  [3] = LAYOUT(
    KC_ESC , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_RALT, KC_LGUI,           KC_RGUI, KC_LALT
  ),
};
