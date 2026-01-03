/**
 * @file led.c
 * @brief LED control implementation
 */

#include "led.h"
#include <Arduino.h>

static uint8_t led_pin;

/**
 * @brief Initialize LED hardware
 */
void led_init(uint8_t pin)
{
    led_pin = pin;
    pinMode(led_pin, OUTPUT);
    digitalWrite(led_pin, LOW);
}

void led_on(void)
{
    digitalWrite(led_pin, HIGH);
}

void led_off(void)
{
    digitalWrite(led_pin, LOW);
}
