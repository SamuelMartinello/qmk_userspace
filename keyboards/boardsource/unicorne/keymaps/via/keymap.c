#include QMK_KEYBOARD_H

enum layers {
    DEF,
    SYM,
    NAV,
    GME,
}; 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEF] = LAYOUT_split_3x6_3(    
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ESC,
                                      KC_LGUI,  MO(SYM),  KC_ENT,   KC_SPC,   MO(NAV),  KC_RALT),

    [SYM] = LAYOUT_split_3x6_3(    
        _______,  KC_EXLM,  KC_AT,    KC_RBRC,  KC_LBRC,  KC_PIPE,  KC_EQL,   KC_7,     KC_8,     KC_9,     KC_PLUS,  KC_MINS,
        _______,  KC_HASH,  KC_DLR,   KC_RPRN,  KC_LPRN,  KC_TLDE,  KC_0,     KC_4,     KC_5,     KC_6,     KC_ASTR,  KC_SLSH,
        _______,  KC_PRC,   KC_CIRC,  KC_RCBR,  KC_LCBR,  KC_AMPR,  KC_DOT,   KC_1,     KC_2,     KC_3,     KC_LT,    KC_GT,
                                      _______,  _______,  _______,  _______,  _______,  _______),

    [NAV] = LAYOUT_split_3x6_3(    
        DF(GME),  _______,  _______,  KC_UP,    _______,  _______,  KC_F12,   KC_F7,    KC_F8,    KC_F9,     _______,  QK_RBT,
        _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  KC_F11,   KC_F4,    KC_F5,    KC_F6,     _______,  EE_CLR,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_F10,   KC_F1,    KC_F2,    KC_F3,     _______,  _______,
                                      _______,  _______,  _______,  _______,  _______,  _______),

    [GME] = LAYOUT_split_3x6_3(    
        KC_1,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     _______,  _______,  _______,  _______,   _______,  _______,
        KC_2,     KC_LSFT,  KC_A,     KC_D,     KC_S,     KC_F,     _______,  _______,  _______,  _______,   _______,  _______,
        KC_3,     KC_LCTL,  KC_Z,     KC_X,     KC_C,     KC_V,     _______,  _______,  _______,  _______,   _______,  _______,
                                      KC_ESC,   KC_4,     KC_SPC,   _______,  _______,  _______),
};