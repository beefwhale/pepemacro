// Copyright 2024 Yongqing (@beefwhale)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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


// #define RGBLIGHT_LAYERS
#undef WS2812_DI_PIN
#define WS2812_DI_PIN GP28
#undef RGBLED_NUM
#define RGBLED_NUM 9