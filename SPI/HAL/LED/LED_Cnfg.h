/*
 * LED_Cnfg.h
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef HAL_LED_LED_CNFG_H_
#define HAL_LED_LED_CNFG_H_

#include "LED_Int.h"

/***************select_delay_time*********/

#define  LED_DELAY_TIME   100000

/*******Select_led_Pin******/
/*
 * choose:
 * PORT -> PORTA_ID, PORTB_ID, PORTC_ID, PORTD_ID
 * PIN  -> PIN0 .... PIN7
 *
 */
#define RED_LED_PORT     PORTC_ID
#define RED_LED_PIN      PIN0

#define GRN_LED_PORT     PORTC_ID
#define GRN_LED_PIN      PIN1


#define BLUE_LED_PORT    PORTC_ID
#define BLUE_LED_PIN     PIN2

#define YELLOW_LED_PORT  PORTC_ID
#define YELLOW_LED_PIN   PIN3



#endif /* HAL_LED_LED_CNFG_H_ */
