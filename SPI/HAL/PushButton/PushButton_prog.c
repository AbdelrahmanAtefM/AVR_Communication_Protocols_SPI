/*
 * PushBotton_prog.c
 *
 *  Created on: Sep 30, 2022
 *     Author: AbdelRahman Atef
 */

#ifndef HAL_PUSHBUTTON_PUSHBUTTON_PROG_C_
#define HAL_PUSHBUTTON_PUSHBUTTON_PROG_C_

/*********INCLUDes ************/
#include "PushButton_int.h"
/*********Macros ************/

/********************************_FUNCTION _****************************/
///************_H_PushButton_void_PushButtonInt to set pin direction  _***********//
void H_PushButton_void_PushButtonInt(u8 Local_u8_PushButton)
{
	///************_SWITCH to loop on PushButton _***********//
	switch(Local_u8_PushButton){
	///************_ case PushButton1 _***********//
	case PUSHBUTTON1 :
		///************_ Set PUSHBUTTON1_PIN value to INPUT  _***********//
		M_DIO_void_SetPinDirection(PUSHBUTTON1_PORT_ID,PUSHBUTTON1_PIN , INPUT);
		break;
		///************_ case PushButton2 _***********//
	case PUSHBUTTON2 :
		///************_ Set PUSHBUTTON2_PIN value to INPUT  _***********//
		M_DIO_void_SetPinDirection(PUSHBUTTON2_PORT_ID, PUSHBUTTON2_PIN, INPUT);
		break;
		///************_ case PushButton3 _***********//
	case PUSHBUTTON3 :
		///************_ Set PUSHBUTTON3_PIN value to INPUT  _***********//
		M_DIO_void_SetPinDirection(PUSHBUTTON3_PORT_ID, PUSHBUTTON3_PIN, INPUT);
		break;
		///************_ case PushButton4 _***********//
	case PUSHBUTTON4 :
		///************_ Set PUSHBUTTON4_PIN value to INPUT  _***********//
		M_DIO_void_SetPinDirection(PUSHBUTTON4_PORT_ID, PUSHBUTTON4_PIN, INPUT);
		break;

	default :   /********do nothing******/ break;
	///************_ End of switch(Local_u8_PushButton)_********//
	}

}
///************_H_PushButton_u8_PushButtonRead to Read pin value  _***********//
u8 H_PushButton_u8_PushButtonRead (u8 Local_u8_PushButton)
{
	u8 Local_u8_PushButtonValue = 0;
	///************_SWITCH to loop on PushButton _***********//
	switch(Local_u8_PushButton){
	///************_ case PushButton1 _***********//
	case PUSHBUTTON1 :
		///************_ Read PUSHBUTTON1_PIN value  _***********//
		Local_u8_PushButtonValue = M_DIO_U8_PinRead(PUSHBUTTON1_PORT_ID,PUSHBUTTON1_PIN );
		///********************_DEBOUNCING _ PUSHBUTTON1 _ ************//
		if(Local_u8_PushButtonValue == PRESSED) ///check if button is pressed
		{
			_delay_ms(PUSHBUTTONS_DEBOUNCING_TIME);      /// delay for 60 Ms
			 ////check  M_DIO_U8_PinRead value
			if(M_DIO_U8_PinRead(PUSHBUTTON1_PORT_ID,PUSHBUTTON1_PIN ) == PRESSED)
			{
	   ///while loop to stop repeated actions when PRESSED then take an action when released
			while (M_DIO_U8_PinRead(PUSHBUTTON1_PORT_ID,PUSHBUTTON1_PIN ) == PRESSED);
			    //// if while is  true  Local_u8_PushButtonValue ==  PRESSED
				Local_u8_PushButtonValue = PRESSED;
			}
		}
		///********************_END OF _DEBOUNCING _ PUSHBUTTON1 _ ************//
		break;
		///*****************************break case PUSHBUTTON1 **************************///

		///************_ case PushButton2 _***********//
	case PUSHBUTTON2 :
		///************_ Read PUSHBUTTON2_PIN value   _***********//
		Local_u8_PushButtonValue = M_DIO_U8_PinRead(PUSHBUTTON2_PORT_ID, PUSHBUTTON2_PIN);
		///********************_DEBOUNCING _ PUSHBUTTON2_ ************//
		if(Local_u8_PushButtonValue == PRESSED)    ///check if button is pressed
		{
			_delay_ms(PUSHBUTTONS_DEBOUNCING_TIME);        /// delay for 60 Ms
			 ////check  M_DIO_U8_PinRead value
			if(M_DIO_U8_PinRead(PUSHBUTTON2_PORT_ID,PUSHBUTTON2_PIN ) == PRESSED)
			{
		 ///while loop to stop repeated actions when PRESSED then take an action when released
				while (M_DIO_U8_PinRead(PUSHBUTTON2_PORT_ID,PUSHBUTTON2_PIN ) == PRESSED);
					//// if while is  true  Local_u8_PushButtonValue ==  PRESSED
						Local_u8_PushButtonValue = PRESSED;
			}
		}
		///********************_END OF _DEBOUNCING _ PUSHBUTTON2 _ ************//

		break;
		///*****************************break case PUSHBUTTON2 **************************///

		///************_ case PushButton3 _***********//
	case PUSHBUTTON3 :
		///************_ Read PUSHBUTTON3_PIN value   _***********//
		Local_u8_PushButtonValue =	M_DIO_U8_PinRead(PUSHBUTTON3_PORT_ID, PUSHBUTTON3_PIN);
		///********************_DEBOUNCING _ PUSHBUTTON3 _ ************//
		if(Local_u8_PushButtonValue == PRESSED)     ///check if button is pressed
		{
			_delay_ms(PUSHBUTTONS_DEBOUNCING_TIME);          /// delay for 60 Ms
			 ////check  M_DIO_U8_PinRead value
			if(M_DIO_U8_PinRead(PUSHBUTTON3_PORT_ID,PUSHBUTTON3_PIN ) == PRESSED)
			{
		///while loop to stop repeated actions when PRESSED then take an action when released
			while (M_DIO_U8_PinRead(PUSHBUTTON3_PORT_ID,PUSHBUTTON3_PIN ) == PRESSED);
				//// if while is  true  Local_u8_PushButtonValue ==  PRESSED
					Local_u8_PushButtonValue = PRESSED;
			}
		}
		///********************_END OF _DEBOUNCING _ PUSHBUTTON3 _ ************//
		break;
	///*****************************break case PUSHBUTTON3 **************************///

		///************_ case PushButton4 _***********//
	case PUSHBUTTON4 :
		///************_ Read PUSHBUTTON4_PIN value   _***********//
		Local_u8_PushButtonValue = M_DIO_U8_PinRead(PUSHBUTTON4_PORT_ID, PUSHBUTTON4_PIN);
		///********************_DEBOUNCING _ PUSHBUTTON4 _ ************//
		if(Local_u8_PushButtonValue == PRESSED)      ///check if button is pressed
		{
			_delay_ms(PUSHBUTTONS_DEBOUNCING_TIME);         /// delay for 60 Ms
			 ////check  M_DIO_U8_PinRead value
			if(M_DIO_U8_PinRead(PUSHBUTTON4_PORT_ID,PUSHBUTTON4_PIN ) == PRESSED)
			{
		 ///while loop to stop repeated actions when PRESSED then take an action when released
			while (M_DIO_U8_PinRead(PUSHBUTTON4_PORT_ID,PUSHBUTTON4_PIN ) == PRESSED);
				 //// if while is  true  Local_u8_PushButtonValue ==  PRESSED
					  Local_u8_PushButtonValue = PRESSED;
			}
		}
		///********************_END OF _DEBOUNCING _ PUSHBUTTON4 _ ************//
		break;
	///*****************************break case PUSHBUTTON4 **************************///

	default :   /********do nothing******/ break;
	///************_ End of switch(Local_u8_PushButton)_********//
	}

	return Local_u8_PushButtonValue  ;
}

#endif /* HAL_PUSHBUTTON_PUSHBUTTON_PROG_C_ */
