// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum my_layers {
    _BASE,
    _RGBL,
    _333,
    _444,
    _555,
    _666,
    _777,
    _888
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_PGUP, KC_UP, KC_PGDN, C(KC_C),
        KC_LEFT, KC_DOWN, KC_RIGHT, C(KC_V),
        MO(1), KC_LCTL, KC_LALT, KC_LGUI,
        KC_SPC, C(KC_P0), TO(0), KC_MUTE   // Bottom, Center, Left, Right
    ),

    [_RGBL] = LAYOUT(
        KC_HOME, KC_UNDO, KC_END,  KC_DEL,
        KC_CUT, KC_COPY, KC_PASTE, KC_INS,
        _______, QK_BOOT, UG_TOGG, KC_SPC,
        _______, _______, _______, _______
    ),

    [_333] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),

    [_444] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),


    [_555] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),


    [_666] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),


    [_777] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),

    [_888] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // Encoders: Bottom, Center, Left, Right
    [_BASE] = {
        ENCODER_CCW_CW(KC_UP, KC_DOWN),
        ENCODER_CCW_CW(C(KC_MINUS), C(KC_PLUS)),
        ENCODER_CCW_CW(TO(7), TO(1)),
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
    },
    [_RGBL] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(RM_VALD, RM_VALU),
        ENCODER_CCW_CW(TO(0), TO(2)),
        ENCODER_CCW_CW(RM_SPDD, RM_SPDU),
    },
    [_333] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(TO(1),TO(3)),
        ENCODER_CCW_CW(_______, _______),
    },
    [_444] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(TO(2),TO(4)),
        ENCODER_CCW_CW(_______, _______),
    },
    [_555] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(TO(3),TO(5)),
        ENCODER_CCW_CW(_______, _______),
    },
    [_666] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(TO(4),TO(6)),
        ENCODER_CCW_CW(_______, _______),
    },
    [_777] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(TO(5),TO(7)),
        ENCODER_CCW_CW(_______, _______),
    },
    [_888] = {
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(_______, _______),
        ENCODER_CCW_CW(TO(6),TO(0)),
        ENCODER_CCW_CW(_______, _______),
    },

};
#endif

#ifndef MAGIC_ENABLE
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

uint8_t mod_config(uint8_t mod) {
    return mod;
}
#endif

#ifdef RGB_MATRIX_ENABLE

layer_state_t layer_state_set_user(layer_state_t state) {
    // Check the highest active layer whenever a key is pressed/released
    switch (get_highest_layer(state)) {
        case 0:
            // Layer 0: Native QMK Breathing in Clean White
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(0, 0, rgb_matrix_config.hsv.v);
            break;
        case 1:
            // Layer 1: Native QMK Breathing in Pastel Blue (Hue 140, Sat 160)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(140, 160, rgb_matrix_config.hsv.v);
            break;
        case 2:
            // Layer 2: Native QMK Breathing in Soft Mint Green (Hue 85, Sat 140)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(85, 140, rgb_matrix_config.hsv.v);
            break;
        case 3:
            // Layer 3: Native QMK Breathing in Warm Amber / Gold (Hue 25, Sat 220)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(25, 220, rgb_matrix_config.hsv.v);
            break;
        case 4:
            // Layer 4: Native QMK Breathing in Deep Lavender Purple (Hue 195, Sat 180)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(195, 180, rgb_matrix_config.hsv.v);
            break;
        case 5:
            // Layer 5: Native QMK Breathing in Coral Salmon (Hue 5, Sat 170)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(5, 170, rgb_matrix_config.hsv.v);
            break;
        case 6:
            // Layer 6: Native QMK Breathing in Bright Teal / Cyan (Hue 128, Sat 255)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(128, 255, rgb_matrix_config.hsv.v);
            break;
        case 7:
            // Layer 7: Native QMK Breathing in Electric Rose Pink (Hue 230, Sat 200)
            rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
            rgb_matrix_sethsv_noeeprom(230, 200, rgb_matrix_config.hsv.v);
            break;
        default:
            break;
    }
    return state;
}

#endif
