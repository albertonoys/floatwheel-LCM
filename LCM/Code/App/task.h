#ifndef __TASK_H
#define __TASK_H

#include "flag_bit.h"
#include "key.h"
#include "led.h"
#include "vesc_uasrt.h"
#include "ws2812.h"

typedef enum {
    P42A,
    DG40
} CELL_TYPE;

#define GTV
#define CELL_TYPE P42A  // Cell configuration to use for voltage display (P42A, DG40)
#define FULL_VOLTAGE 82
#define CHARGING_VOLTAGE 40
#ifdef GTV
#define BATTERY_STRING 18
#else
#define BATTERY_STRING 20
#endif
#define SHUTDOWN_TIME 20
#define VESC_RPM 1000
#define VESC_BOOT_TIME 5000
#define VESC_SHUTDOWN_TIME 1000
#define DUTY_CYCLE 0.9
#define VOLTAGE_RECEIPT 0.02
// frequency of notifying the float package of current charge state
#define CHARGE_COMMAND_TIME 1000

/*******************************************************************************/
#define VESC_RPM_WIDTH -200
#define WS2812_1_BRIGHTNESS 20
#define WS2812_2_BRIGHTNESS 10
#define WS2812_3_BRIGHTNESS 5
#define CHARGE_CURRENT 0.12
#define DETECTION_SWITCH_TIME 500
#define CHARGER_DETECTION_DELAY 1000
#define NUM_LEDS 10
#define DEFAULT_IDLE_MODE 0

void LED_Task(void);
void KEY1_Task(void);
void WS2812_Task(void);
void Power_Task(void);
void Charge_Task(void);
void Headlights_Task(void);
void Buzzer_Task(void);
void Usart_Task(void);
void ADC_Task(void);
void VESC_State_Task(void);
void Flashlight_Detection(void);

#endif
