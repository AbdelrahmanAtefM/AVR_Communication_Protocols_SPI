/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///********************* Application on  SPI ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{
//	///***************** SPI MASTER MODE **********//
//	///***************** Initialize SPI **********//
//	M_SPI_void_SPIInt();
//	///*** Initialize BLUE LED To check that Transceiver works well **********//
//
//
//
//	///*****************  SPI Transceiver  **********//
//	   // Local_u8Value is a Local variable to store data
//	   ////*** Transceiver takes 5 and return 2
//	u8 Local_u8Value = M_SPI_void_SPITransceiver(5);
//	////*** IF Transceiver  return 2 turn on led
//	if (Local_u8Value == 2 )
//	{
//		H_LED_Void_LedOn(BLUE_LED);
//	}
	H_LED_Void_LedInit(RED_LED);
	H_LED_Void_LedInit(BLUE_LED);
    while (1)
       {


    	H_LED_Void_LedOn(RED_LED);
    	H_LED_Void_LedOn(BLUE_LED);
    	_delay_ms(10000);
       }


}

