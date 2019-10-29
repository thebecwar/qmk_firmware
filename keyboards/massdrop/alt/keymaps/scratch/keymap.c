#include QMK_KEYBOARD_H
#include "alt_leds.h"

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    DBG_TOG,               //DEBUG Toggle On / Off
    DBG_MTRX,              //DEBUG Toggle Matrix Prints
    DBG_KBD,               //DEBUG Toggle Keyboard Prints
    DBG_MOU,               //DEBUG Toggle Mouse Prints
    MD_BOOT,               //Restart into bootloader after hold timeout
    U_COL_R,
    U_COL_G,
    U_COL_B
};

#define TG_NKRO MAGIC_TOGGLE_NKRO //Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

#define MAX_LAYER 5
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [1] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_MUTE, \
        RGB_M_P, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, U_T_AUTO,U_T_AGCR,_______, KC_PSCR, KC_SLCK, KC_PAUS, _______, KC_END, \
        _______, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______,          _______, KC_VOLU, \
        _______, RGB_TOG, U_COL_R, U_COL_G, U_COL_B, MD_BOOT, TG_NKRO, DBG_TOG, _______, _______, _______, TO(2),            KC_PGUP, KC_VOLD, \
        _______, _______, _______,                            _______,                            _______, _______, KC_HOME, KC_PGDN, KC_END  \
    ),
    [2] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, \
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(3),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [3] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_MUTE, \
        RGB_M_P, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, U_T_AUTO,U_T_AGCR,_______, KC_PSCR, KC_SLCK, KC_PAUS, KC_END,  _______, \
        KC_CAPS, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______,          _______, KC_VOLU, \
        _______, RGB_TOG, U_COL_R, U_COL_G, U_COL_B, MD_BOOT, TG_NKRO, DBG_TOG, _______, _______, _______, TO(4),            KC_MPLY, KC_VOLD, \
        _______, _______, _______,                            _______,                            _______, _______, KC_MPRV, KC_MSTP, KC_MNXT  \
    ),
    [4] = LAYOUT(
        _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_WH_R, KC_WH_L, \
        _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,          KC_BTN1, KC_WH_U, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MS_U, KC_WH_D, \
        KC_ACL0, KC_ACL1, KC_ACL2,                            KC_BTN1,                            KC_BTN2, MO(5),   KC_MS_L, KC_MS_D, KC_MS_R  \
    ),
    [5] = LAYOUT_65_ansi_blocker(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_MUTE, \
        RGB_M_P, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, _______, U_T_AUTO,U_T_AGCR,_______, KC_PSCR, KC_SLCK, KC_PAUS, KC_END,  _______, \
        KC_CAPS, RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, _______, _______, _______, _______, _______, _______,          _______, KC_VOLU, \
        _______, RGB_TOG, U_COL_R, U_COL_G, U_COL_B, MD_BOOT, TG_NKRO, DBG_TOG, _______, _______, _______, TO(0),            KC_MPLY, KC_VOLD, \
        _______, _______, _______,                            _______,                            _______, _______, KC_MPRV, KC_MSTP, KC_MNXT  \
    ),
    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    */
};
/*
 * KC_MS_ACCEL0 KC_ACL0 Set speed to 0
 * KC_MS_ACCEL1 KC_ACL1 Set speed to 1
 * KC_MS_ACCEL2 KC_ACL2 Set speed to 2
 */
// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
              switch (rgb_matrix_get_flags()) {
                case LED_FLAG_ALL: {
                    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_KEYLIGHT: {
                    rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_UNDERGLOW: {
                    rgb_matrix_set_flags(LED_FLAG_NONE);
                    rgb_matrix_disable_noeeprom();
                  }
                  break;
                default: {
                    rgb_matrix_set_flags(LED_FLAG_ALL);
                    rgb_matrix_enable_noeeprom();
                  }
                  break;
              }
            }
            return false;
        case U_COL_R:
            rgb_matrix_config.hsv.h = 0;
            return false;
        case U_COL_G:
            rgb_matrix_config.hsv.h = 85; // 120 degrees
            return false;
        case U_COL_B:
            rgb_matrix_config.hsv.h = 170; // 240 degrees
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}
bool user_matrix_indicators_run = false;
uint8_t currentLayer = 0;
uint8_t indicatorFade = 255;
#define INDICATOR_FADE_TICKS 50
uint16_t ticks = INDICATOR_FADE_TICKS;
uint8_t indicatorR = 0;
uint8_t indicatorG = 0;
uint8_t indicatorB = 0;

void setLayerIndicator(uint8_t layer, uint8_t r, uint8_t g, uint8_t b) {
    if (layer != currentLayer) {
        indicatorR = r;
        indicatorG = g;
        indicatorB = b;
        indicatorFade = 0;
        currentLayer = layer;
    }
}
uint8_t subtractWithClamp(uint8_t a, uint8_t b) {
    if (a > b) return a - b;
    else return 0;
}
void processIndicatorFade(int ledId) {
    if (rgb_matrix_get_flags() != LED_FLAG_NONE) {
        rgb_matrix_set_color(ledId, subtractWithClamp(indicatorR, indicatorFade), subtractWithClamp(indicatorG, indicatorFade), subtractWithClamp(indicatorB, indicatorFade));
    }
    else {
        rgb_matrix_set_color(ledId, 0, 0, 0);
    }
}
void processIndicatorTick(void) {
    if (indicatorFade < 255) {
        if (--ticks == 0) {
            ticks = INDICATOR_FADE_TICKS;
            indicatorFade++;
        }
        processIndicatorFade(LEDM_U_BOT_L);
        processIndicatorFade(LEDM_U_BOT_R);
    }
}

RGB layerColors[] = {
    { 255, 255, 255 },
    { 255, 0, 0 },
    { 0, 255, 0 },
    { 0, 0, 255 },
    { 0, 255, 255 },
    { 255, 0, 255 }
};

void rgb_matrix_indicators_user(void) {
    for (int8_t i = MAX_LAYER; i >= 0; i--) {
        if (IS_LAYER_ON(i)) {
            setLayerIndicator(i, layerColors[i].r, layerColors[i].g, layerColors[i].b);
            break;
        }
    }
    /*if (IS_LAYER_ON(3)) {
        setLayerIndicator(3, 0, 0, 255);
    }
    else if (IS_LAYER_ON(2)) {
        setLayerIndicator(2, 0, 255, 0);
    }
    else if (IS_LAYER_ON(1)) {
        setLayerIndicator(1, 255, 0, 0);
    }
    else {
        setLayerIndicator(0, 255, 255, 255);
    }*/
    processIndicatorTick();
    //void rgb_matrix_set_color(int index, uint8_t red, uint8_t green, uint8_t blue);
}
