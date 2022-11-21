/*
 * PushBotton_cnfg.h
 *
 *  Created on: Sep 30, 2022
 *       Author: AbdelRahman Atef
 */

#ifndef HAL_PUSHBUTTON_PUSHBUTTON_CNFG_H_
#define HAL_PUSHBUTTON_PUSHBUTTON_CNFG_H_



/******************************_ Macros _ ****************************/

/*****************_ Select PUSHBUTTONS_MODE *****************/
/***
 * options :
 *   ACTIVE_LOW
 *      OR
 *   ACTIVE_HIGH
 */
#define  PUSHBUTTON_MODE   ACTIVE_LOW

/*****************_ Select PUSHBUTTONS_DEBOUNCING_TIME *****************/
///TIME  IN  MILLI_SECONDS
#define PUSHBUTTONS_DEBOUNCING_TIME       60

/*****************_PUSHBUTTONS PINS *****************/
#define PUSHBUTTON1_PIN    PIN2    ///PUSHBUTTON1_PIN
#define PUSHBUTTON2_PIN    PIN3    ///PUSHBUTTON2_PIN
#define PUSHBUTTON3_PIN    PIN4    ///PUSHBUTTON3_PIN
#define PUSHBUTTON4_PIN    PIN5    ///PUSHBUTTON4_PIN

/*****************_PUSHBUTTONS PORT_ID *****************/
#define PUSHBUTTON1_PORT_ID    PORTD_ID    ///PUSHBUTTON1_PORT_ID
#define PUSHBUTTON2_PORT_ID    PORTD_ID    ///PUSHBUTTON2_PORT_ID
#define PUSHBUTTON3_PORT_ID    PORTD_ID    ///PUSHBUTTON3_PORT_ID
#define PUSHBUTTON4_PORT_ID    PORTD_ID    ///PUSHBUTTON4_PORT_ID




#endif /* HAL_PUSHBUTTON_PUSHBUTTON_CNFG_H_ */
