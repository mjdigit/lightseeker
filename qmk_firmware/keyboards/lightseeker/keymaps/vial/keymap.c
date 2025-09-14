#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

void keyboard_post_init_user(void) {
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
}