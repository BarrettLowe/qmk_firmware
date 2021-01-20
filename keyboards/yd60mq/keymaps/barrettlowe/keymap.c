#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_DOUBLE_F5,
    TD_DOUBLE_F7
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_DOUBLE_F5] = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_F5),
    [TD_DOUBLE_F7] = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_F7),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
        KC_GESC,          KC_1,    KC_2,    KC_3,    KC_4,    TD(TD_DOUBLE_F5),    KC_6,    TD(TD_DOUBLE_F7),    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC, KC_BSPC,
        KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        LCTL_T(KC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,         KC_ENT,  KC_ENT,
        KC_APP,  LSFT_T(KC_LPRN), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_RPRN), KC_UP,   KC_DEL,
        KC_LCTL,         LT(1,KC_LGUI), KC_LALT,                   KC_SPC,   KC_SPC,  KC_SPC,                      TT(2),           KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

	[1] = LAYOUT_all(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  TG(0), TG(0),
        _______, _______, _______, _______, _______, _______, _______, KC_P7, KC_P8, KC_P9, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_P4, KC_P5, KC_P6, _______, _______, KC_ENT, KC_ENT,
        _______, KC_LSFT, _______, _______, _______, _______, _______,  _______, KC_P1, KC_P2, KC_P3, _______, _______, KC_PGUP, _______,
        KC_TRNS, KC_TRNS, _______,                   _______, _______, _______,                   _______, _______, KC_HOME, KC_PGDN, KC_END
    ),

    [2] = LAYOUT_all(
        RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN,   RGB_M_K,   RGB_M_X,   RGB_M_G,   RGB_M_T,   _______,  _______,  _______,  TG(0), TG(0),
        RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        RGB_RMOD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, RGB_HUI, RGB_VAI, RGB_SAI,
        KC_TRNS, KC_TRNS, _______,                   _______, _______, _______,                   KC_TRNS, _______, RGB_HUD, RGB_VAD, RGB_SAD
    )

};
