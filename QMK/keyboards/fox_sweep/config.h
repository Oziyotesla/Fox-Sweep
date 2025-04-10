// Copyright 2023 Daniel Reibl (@riblee)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// If the pin is high, then the controller assumes it is the left hand, and if it’s low, it’s assumed to be the right side.
#define SPLIT_HAND_PIN B10

#define SERIAL_USART_HALF_DUPLEX
#define SERIAL_USART_TX_PIN A9
#define SERIAL_USART_DRIVER SD1

//ps2 mouse support add pins
#define PS2_CLOCK_PIN B13
#define PS2_DATA_PIN  B14

/* Enable the scrollwheel or scroll gesture on your mouse or touchpad */
#define PS2_MOUSE_ENABLE_SCROLLING

//scroll button mask
#define PS2_MOUSE_SCROLL_BTN_MASK (1<<PS2_MOUSE_BTN_MIDDLE) /* Default */

#define PS2_MOUSE_BTN_LEFT      0
#define PS2_MOUSE_BTN_RIGHT     1
#define PS2_MOUSE_BTN_MIDDLE    2

//#define PS2_MOUSE_ROTATE 270 /* Compensate for East-facing device orientation. */
//#define PS2_MOUSE_ROTATE 180 /* Compensate for South-facing device orientation. */
#define PS2_MOUSE_ROTATE 90 /* Compensate for West-facing device orientation. */

#define MK_3_SPEED
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 500