#include QMK_KEYBOARD_H

enum layers {
    QWERTY,
    SYM,
    NAV,
    GAME,
}; 

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_split_3x6_3(    
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ESC,
                                      KC_LGUI,  MO(SYM),  KC_ENT,   KC_SPC,   MO(NAV),  KC_RALT),

    [SYM] = LAYOUT_split_3x6_3(    
        KC_TAB,   KC_EXLM,  KC_AT,    KC_RBRC,  KC_LBRC,  KC_PIPE,  KC_EQL,   KC_7,     KC_8,     KC_9,     KC_PLUS,  KC_MINS,
        KC_LCTL,  KC_HASH,  KC_DLR,   KC_RPRN,  KC_LPRN,  KC_GRV,   KC_0,     KC_4,     KC_5,     KC_6,     KC_ASTR,  KC_SLSH,
        KC_LSFT,  KC_PRC,   KC_CIRC,  KC_RCBR,  KC_LCBR,  KC_TILD,  KC_DOT,   KC_1,     KC_2,     KC_3,     KC_LT,    KC_GT,
                                      KC_LGUI,  MO(SYM),  KC_ENT,   KC_SPC,   MO(NAV),  KC_RALT),

    [NAV] = LAYOUT_split_3x6_3(    
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ESC,
                                      KC_LGUI,  MO(SYM),  KC_ENT,   KC_SPC,   MO(NAV),  KC_RALT),

    [GAME] = LAYOUT_split_3x6_3(    
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ESC,
                                      KC_LGUI,  MO(SYM),  KC_ENT,   KC_SPC,   MO(NAV),  KC_RALT),
};
