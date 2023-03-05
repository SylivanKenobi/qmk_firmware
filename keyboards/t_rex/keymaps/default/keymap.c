#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, \
                          KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, \
                          KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, \
                          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, \
                          KC_LCTL, KC_LALT, KC_LGUI, KC_RALT, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

	[1] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, \
                          KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_DEL, \
                          KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, \
                          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, \
                          BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

	[2] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, \
                          KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_DEL, \
                          KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, \
                          KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_ENT, \
                          BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_SPC, MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),

	[3] = LAYOUT_ortho_5x12(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, \
                          KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, \
                          KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_EQL, KC_LCBR, RALT(KC_BSLS), RALT(KC_7), \
                          KC_TRNS, KC_F7, RALT_T(KC_EQL), KC_BSLS, LSFT_T(KC_NUHS), RALT(KC_LBRC), RALT(KC_RBRC), RALT(KC_QUOT), RALT(KC_BSLS), KC_HOME, KC_END, KC_TRNS, \
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

	[4] = LAYOUT_ortho_5x12(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, \
                          KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, \
                          KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, \
                          KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, KC_TRNS, \
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),

	[5] = LAYOUT_ortho_5x12(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, \
                          KC_TRNS, QK_BOOT, DB_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, \
                          KC_TRNS, KC_TRNS, MU_NEXT, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), KC_TRNS, KC_TRNS, \
                          KC_TRNS, AU_PREV, AU_NEXT, MU_ON, MU_OFF, MI_ON, MI_OFF, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

