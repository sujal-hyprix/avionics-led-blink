/**
 * @file led.h
 * @brief LED control interface
 *
 * @details
 * Provides basic initialization and control for a GPIO-connected LED.
 */

#ifndef LED_H
#define LED_H

#include <stdint.h>

/**
 * @brief Initialize LED GPIO
 *
 * @param[in] pin Arduino digital pin number
 */
void led_init(uint8_t pin);

/**
 * @brief Turn LED ON
 */
void led_on(void);

/**
 * @brief Turn LED OFF
 */
void led_off(void);

#endif

