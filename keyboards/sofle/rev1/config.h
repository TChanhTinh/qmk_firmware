#pragma once

// USB Device descriptor parameter
#define VENDOR_ID    0xFC32
#define PRODUCT_ID   0x1287
#define DEVICE_VER   0x0002
#define MANUFACTURER Keyhive
#define PRODUCT      Sofle

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, NO_PIN }
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* encoder support */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTIONS       { 4 }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }  // Left encoder seems to have double-output issue but right does not.

// #define ENCODER_RESOLUTIONS_RIGHT 4

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D2
