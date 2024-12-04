// Copyright 2024 Bilaal Bare (@Bilaal Bare)
// SPDX-License-Identifier: GPL-2.0-or-later


#pragma once
#define MATRIX_ROWS 4
#define MATRIX_COLS 3
#define OLED_DISPLAY_128X64

#define I2C1_SDA_PIN GP0
#define I2C1_SCL_PIN GP1
#define I2C_DRIVER I2CD0

#define ENCODERS_PAD_A { GP20 ,  GP4 ,  GP5 }
#define ENCODERS_PAD_B { GP21 ,  GP3 ,  GP6 }

#define DIRECT_PINS {{ GP8 ,  GP9 ,  GP10 },{ GP11 ,  GP12 ,  GP13 },{ GP14 ,  GP15 ,  GP18 }, { GP19 , GP2 ,  GP7 }}

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
