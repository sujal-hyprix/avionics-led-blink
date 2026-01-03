/**
 * @file main.c
 * @brief Application entry point
 */

#include <Arduino.h>
#include "led.h"

/**
 * @brief Arduino setup function
 */
void setup(void)
{
    led_init(13);  // Built-in LED
}

/**
 * @brief Arduino loop function
 */
void loop(void)
{
    led_on();
    delay(500);
    led_off();
    delay(500);
}
