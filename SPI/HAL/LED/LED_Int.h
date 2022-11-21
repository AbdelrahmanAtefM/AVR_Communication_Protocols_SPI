/*
 * LED_Int.h
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef HAL_LED_LED_INT_H_
#define HAL_LED_LED_INT_H_

////*********Includes***********///


#include "LED_Cnfg.h"
#include "LED_Priv.h"
#include "DIO_Int.h"
#include <util/delay.h>
#include "STD_TYPS.h"

////*********Macros***********///



/***************select_LED*********/
#define RED_LED      1
#define BLUE_LED     2
#define GRN_LED      3
#define YELLOW_LED   4

//////*********Prototypes***********///
void H_LED_Void_LedInit(u8);
void H_LED_Void_LedOn(u8);
void H_LED_Void_LedOff(u8);
void H_LED_Void_LedTogg(u8);
void H_LED_Void_LedBlink(u8);


#endif /* HAL_LED_LED_INT_H_ */
