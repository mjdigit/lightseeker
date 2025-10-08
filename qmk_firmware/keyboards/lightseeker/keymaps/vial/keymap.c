#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
    LGUI_T(KC_ESC), KC_Q   , KC_W   , KC_E   , KC_R   , KC_T                               , KC_Y  , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
    LCTL_T(KC_TAB), KC_A   , KC_S   , KC_D   , KC_F   , KC_G                               , KC_H  , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
    KC_LSFT       , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B                               , KC_N  , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
    KC_LCTL       , MO(3)  , KC_LGUI, KC_LALT  ,LT(1,KC_LNG2), KC_SPC   , KC_BTN1, KC_BTN2  ,LT(2,KC_LNG1), KC_APP   , KC_NO  , MO(3)  , KC_RCTL
  ),
  [1] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6                             , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_1   , KC_2   , KC_3   , KC_4   , KC_5                              , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_BSPC, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT                           , KC_GRV , KC_QUOT, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS  , KC_TRNS    , KC_TRNS    , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO                             , KC_HOME, KC_PGUP, KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO                             , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_BSPC, KC_NO, 
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO                             , KC_END , KC_PGDN, KC_DEL , KC_NO  , KC_INS , KC_TRNS,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|-------- 
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS  , LALT(KC_GRAVE), KC_WH_D , KC_WH_U  , KC_TRNS  , KC_BTN3  , KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_7   , KC_8   , KC_9   , KC_NO                             , KC_NO  , KC_7   , KC_8   , KC_9   , KC_NO  , KC_TRNS,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_4   , KC_5   , KC_6   , KC_NO                             , KC_NO  , KC_4   , KC_5   , KC_6   , KC_NO  , KC_TRNS,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_1   , KC_2   , KC_3   , KC_NO                             , KC_NO  , KC_1   , KC_2   , KC_3   , KC_NO  , KC_TRNS,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
           KC_TRNS, KC_TRNS, KC_0   , KC_DOT   , KC_ENT   , KC_BSPC   , KC_TAB      , KC_BSPC  , KC_0     , KC_DOT   , KC_ENT , KC_TRNS, KC_TRNS
  ),
  // MAC OS, iOS Layers
  [4] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
    LGUI_T(KC_ESC), KC_Q   , KC_W   , KC_E   , KC_R   , KC_T                               , KC_Y  , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
    LCTL_T(KC_TAB), KC_A   , KC_S   , KC_D   , KC_F   , KC_G                               , KC_H  , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
    KC_LSFT       , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B                               , KC_N  , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
    KC_LCTL       , MO(7)  , KC_LALT, KC_LGUI  ,LT(5,KC_LNG2), KC_SPC   , KC_BTN1, KC_BTN2  ,LT(6,KC_LNG1), KC_RGUI  , KC_APP , MO(7)  , KC_RCTL
  ),
  [5] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6                             , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_1   , KC_2   , KC_3   , KC_4   , KC_5                              , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_BSPC, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT                           , KC_GRV , KC_QUOT, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS  , KC_TRNS    , KC_TRNS    , KC_TRNS  , KC_TRNS  , KC_TRNS  , KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [6] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO                             , KC_HOME, KC_PGUP, KC_PSCR, KC_SCRL, KC_PAUS, KC_NO,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO                             , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_BSPC, KC_NO, 
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO                             , KC_END , KC_PGDN, KC_DEL , KC_NO  , KC_INS , KC_TRNS,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  , KC_TRNS  , LCTL(KC_SPC), KC_WH_D   , KC_WH_U  , KC_TRNS  , KC_BTN3  , KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [7] = LAYOUT(
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_7   , KC_8   , KC_9   , KC_NO                             , KC_NO  , KC_7   , KC_8   , KC_9   , KC_NO  , KC_TRNS,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_4   , KC_5   , KC_6   , KC_NO                             , KC_NO  , KC_4   , KC_5   , KC_6   , KC_NO  , KC_TRNS,
    //    --------|--------|--------|--------|--------|--------                            --------|--------|--------|--------|--------|--------
           KC_TRNS, KC_NO  , KC_1   , KC_2   , KC_3   , KC_NO                             , KC_NO  , KC_1   , KC_2   , KC_3   , KC_NO  , KC_TRNS,
    //    --------|--------|--------|----------|----------|----------                ----------|----------|----------|--------|--------|--------
           KC_TRNS, KC_TRNS, KC_0   , KC_DOT   , KC_ENT   , KC_BSPC   , KC_TAB      , KC_BSPC  , KC_0     , KC_DOT   , KC_ENT , KC_TRNS, KC_TRNS
  ),
};

void keyboard_post_init_user(void) {
#if OS_DETECTION_ENABLE
    wait_ms(400);

    switch (detected_host_os()) {
    case OS_MACOS:
    case OS_IOS:
        layer_move(4);
        break;
    default:
        layer_move(0);
        break;
    }
#endif
}