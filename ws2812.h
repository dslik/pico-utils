// ---------------------------------------------------------------------------------
// WS2812 Utility Routines - Header
// ---------------------------------------------------------------------------------
// Library routines to assist in programming with WS2812-style smart RGB LEDs.
// ---------------------------------------------------------------------------------
// SPDX-FileCopyrightText: Copyright 2023 David Slik (VE7FIM)
// SPDX-FileAttributionText: https://github.com/dslik/pico-utils/
// SPDX-License-Identifier: CERN-OHL-S-2.0
// ---------------------------------------------------------------------------------

#pragma once
#ifndef WS2812_H
#define WS2812_H

#include "hardware/pio.h"
#include "ws2812.pio.h"

extern void put_pixel(uint32_t pixel_grb);
extern uint32_t urgb_u32(uint8_t r, uint8_t g, uint8_t b);

#endif // WS2812_H