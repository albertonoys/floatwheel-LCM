#ifndef __WS2812_H
#define __WS2812_H

#include "hk32f030m.h"
#include "io_ws2812.h"
#include "spi.h"

#define WS2812_N 10  // Number of WS2812 LEDs
#define WS2812_0 0xE0  // 0 bit
#define WS2812_1 0xFF  // 1 bit
#define WS2812_R 0x00  // Red

extern uint16_t WS2812_Counter;
extern uint8_t WS2812_Buff[WS2812_N][24];

void WS2812_Init(void);
void WS2812_Set_AllColours(uint8_t start, uint8_t end, uint8_t red, uint8_t green, uint8_t blue);
void WS2812_Set_Colour(uint8_t num, uint8_t red, uint8_t green, uint8_t blue);
void WS2812_Task(void);
void WS2812_Refresh(void);

#endif
