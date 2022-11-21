/*
 * PushBotton_int.h
 *
 *  Created on: Sep 30, 2022
 *     Author: AbdelRahman Atef
 */

#ifndef HAL_PUSHBUTTON_PUSHBUTTON_INT_H_
#define HAL_PUSHBUTTON_PUSHBUTTON_INT_H_
/*********INCLUDES ************/
#include "PushButton_cnfg.h"
#include "DIO_Int.h"
#include "STD_TYPS.h"
#include <util/delay.h>
/*********Macros ************/

/*****************_PUSHBUTTONS Numbers *****************/
#define PUSHBUTTON1    1    ///PUSHBUTTON1
#define PUSHBUTTON2    2    ///PUSHBUTTON2
#define PUSHBUTTON3    3    ///PUSHBUTTON3
#define PUSHBUTTON4    4    ///PUSHBUTTON4

/***********_PushButton Status_******************/

#define  ACTIVE_HIGH  1
#define  ACTIVE_LOW   2

#if PUSHBUTTON_MODE ==   ACTIVE_LOW
#define PRESSED    0
#define RELEASED   1

#elif PUSHBUTTON_MODE ==  ACTIVE_HIGH
#define PRESSED    1
#define RELEASED   0

#endif

/*********Prototypes************/
void H_PushButton_void_PushButtonInt(u8);
u8 H_PushButton_u8_PushButtonRead(u8);

#endif /* HAL_PUSHBUTTON_PUSHBUTTON_INT_H_ */
