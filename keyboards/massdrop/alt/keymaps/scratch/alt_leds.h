#ifndef ALT_LEDS_H
#define ALT_LEDS_H

/////////////////
// Key LED IDs //
/////////////////
// LED names match the scancode for the default layer 0 layout, except for the FN key which is LEDM_FN

// Row 0
#define LEDM_ESC 0
#define LEDM_1   1
#define LEDM_2   2
#define LEDM_3   3
#define LEDM_4   4
#define LEDM_5   5
#define LEDM_6   6
#define LEDM_7   7
#define LEDM_8   8
#define LEDM_9   9
#define LEDM_0   10
#define LEDM_MINUS 11
#define LEDM_EQUAL 12
#define LEDM_BSPACE 13
#define LEDM_DEL 14

// Row 1
#define LEDM_TAB 15
#define LEDM_Q 16
#define LEDM_W 17
#define LEDM_E 18
#define LEDM_R 19
#define LEDM_T 20
#define LEDM_Y 21
#define LEDM_U 22
#define LEDM_I 23
#define LEDM_O 24
#define LEDM_P 25
#define LEDM_LBRC 26
#define LEDM_RBRC 27
#define LEDM_BSLS 28
#define LEDM_HOME 29

#define LEDM_CAPS 30
#define LEDM_A 31
#define LEDM_S 32
#define LEDM_D 33
#define LEDM_F 34
#define LEDM_G 35
#define LEDM_H 36
#define LEDM_J 37
#define LEDM_K 38
#define LEDM_L 39
#define LEDM_SCLN 40
#define LEDM_QUOT 41
#define LEDM_ENT 42
#define LEDM_PGUP 43

#define LEDM_LSFT 44
#define LEDM_Z 45
#define LEDM_X 46
#define LEDM_C 47
#define LEDM_V 48
#define LEDM_B 49
#define LEDM_N 50
#define LEDM_M 51
#define LEDM_COMM 52
#define LEDM_DOT 53
#define LEDM_SLSH 54
#define LEDM_RSFT 55
#define LEDM_UP 56
#define LEDM_PGDN 57

#define LEDM_LCTL 58
#define LEDM_LGUI 59
#define LEDM_LALT 60
#define LEDM_SPC 61
#define LEDM_RALT 62
#define LEDM_FN 63
#define LEDM_LEFT 64
#define LEDM_DOWN 65
#define LEDM_RGHT 66

///////////////
// Underglow //
///////////////
// Underglow LEDs start at the bottom left and continue clockwise around the board.
// To move left or down, subtract. To move right or up, add.
#define LEDM_U_BOT_L 67
#define LEDM_U_BOT_R 81
#define LEDM_U_TOP_R 86
#define LEDM_U_TOP_L 100

#endif
