/*
 * LED_Prog.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */
#include "LED_Int.h"
#include "LED_Priv.h"

///******************_Initialization Function to Set Pins direction_***********///
void H_LED_Void_LedInit(u8 Local_u8_ledId)
{
	///***switch case to loop on LEDs****//
	switch(Local_u8_ledId)
	{
	///******_Setting RED_LED Pin direction to OUTPUT _***********///
	case RED_LED:
		M_DIO_void_SetPinDirection(RED_LED_PORT, RED_LED_PIN, OUTPUT);
		break;
	///******_Setting GRN_LED Pin direction to OUTPUT _***********///
	case GRN_LED :
		M_DIO_void_SetPinDirection(GRN_LED_PORT ,GRN_LED_PIN , OUTPUT);
		break;
   ///******_Setting BLUE_LED Pin direction to OUTPUT _***********///
	case BLUE_LED:
		M_DIO_void_SetPinDirection(BLUE_LED_PORT,BLUE_LED_PIN ,OUTPUT);
		break;
   ///******_Setting YELLOW_LED Pin direction to OUTPUT _***********///
	case YELLOW_LED:
			M_DIO_void_SetPinDirection(YELLOW_LED_PORT,YELLOW_LED_PIN ,OUTPUT);
			break;
	default :               /*****error*****/                      break;
	}

}
void H_LED_Void_LedOn(u8 Local_u8_led)
{
	///***switch case to loop on LEDs****//
	switch(Local_u8_led)
		{
	    ///******_Setting RED_LED Pin Value to HIGH to Light it_***********///
		case RED_LED:
             M_DIO_void_SetPinValue(RED_LED_PORT, RED_LED_PIN, HIGH);
		break;
		///******_Setting GRN_LED Pin Value to HIGH to Light it_***********///
		case GRN_LED :
             M_DIO_void_SetPinValue(GRN_LED_PORT, GRN_LED_PIN, HIGH);
        break;
        ///******_Setting BLUE_LED Pin Value to HIGH to Light it_***********///
		case BLUE_LED :
             M_DIO_void_SetPinValue(BLUE_LED_PORT,BLUE_LED_PIN, HIGH);
   		break;
   		///******_Setting YELLOW_LED Pin Value to HIGH to Light it_***********///
		case YELLOW_LED :
		             M_DIO_void_SetPinValue(YELLOW_LED_PORT,YELLOW_LED_PIN, HIGH);
		   		break;
		default :          /*****error*****/         break;
		}

}
void H_LED_Void_LedOff(u8 Local_u8_led)
{
	///***switch case to loop on LEDs****//
	switch(Local_u8_led)
			{
			///******_Setting BLUE_LED Pin Value to LOW to Turn it OFF_***********///
			case BLUE_LED:
				M_DIO_void_SetPinValue(BLUE_LED_PORT, BLUE_LED_PIN, LOW);
			break;
			///******_Setting RED_LED Pin Value to LOW to Turn it OFF_***********///
			case RED_LED :
				M_DIO_void_SetPinValue(RED_LED_PORT ,RED_LED_PIN, LOW);
			break;
			///******_Setting GRN_LED Pin Value to LOW to Turn it OFF_***********///
			case GRN_LED :
				M_DIO_void_SetPinValue(GRN_LED_PORT,GRN_LED_PIN, LOW);
			break;
			///******_Setting YELLOW_LED Pin Value to LOW to Turn it OFF_***********///
			case YELLOW_LED :
			    M_DIO_void_SetPinValue(YELLOW_LED_PORT,YELLOW_LED_PIN, LOW);
					   		break;
			default :           /*****error*****/         break;
			}

}
void H_LED_Void_LedTogg(u8 Local_u8_led)
{
	///***switch case to loop on LEDs****//
	switch(Local_u8_led)
		{
		  ///******_ Toggle  BLUE_LED Pin Value _***********///
		  case BLUE_LED:
			  M_DIO_void_PinTog(BLUE_LED_PORT, BLUE_LED_PIN);
		  break;
		  ///******_ Toggle  RED_LED Pin Value _******************///
		  case RED_LED :
			  M_DIO_void_PinTog(RED_LED_PORT, RED_LED_PIN);
		  break;
		  ///******_ Toggle  GRN_LED Pin Value _******************///
		  case GRN_LED :
			  M_DIO_void_PinTog(GRN_LED_PORT, GRN_LED_PIN);
		  break;
		  ///******_ Toggle  YELLOW_LED Pin Value _******************///
		  case YELLOW_LED :
			  M_DIO_void_PinTog(YELLOW_LED_PORT,YELLOW_LED_PIN);
		  break;

		  default :   /*****error*****/          break;
		}

}
void H_LED_Void_LedBlink(u8 Local_u8_led)
{
	///***switch case to loop on LEDs****//
     switch(Local_u8_led)
	 	{
        ///******_ Blink  BLUE_LED Pin Value _******************///
	 	case BLUE_LED:
	 		///******_Setting BLUE_LED Pin Value to HIGH to Light it_***********///
	 		M_DIO_void_SetPinValue(BLUE_LED_PORT,BLUE_LED_PIN, HIGH);
	 		_delay_ms(LED_DELAY_TIME);  //delay for 10000ms
	 		///******_Setting BLUE_LED Pin Value to LOW to Turn it OFF_***********///
	 		M_DIO_void_SetPinValue(BLUE_LED_PORT,BLUE_LED_PIN, LOW);
	 	break;
	    ///******_ Blink  RED_LED Pin Value _******************///
		case RED_LED :
			///******_Setting RED_LED Pin Value to HIGH to Light it_***********///
			M_DIO_void_SetPinValue( RED_LED_PORT,RED_LED_PIN, HIGH);
			_delay_ms(LED_DELAY_TIME); //delay for 10000ms
			///******_Setting RED_LED Pin Value to LOW to Turn it OFF_***********///
			M_DIO_void_SetPinValue( RED_LED_PORT,RED_LED_PIN, LOW);
		break;
		///******_ Blink  GRN_LED Pin Value _******************///
     	case GRN_LED :
     		///******_Setting GRN_LED Pin Value to HIGH to Light it_***********///
     		M_DIO_void_SetPinValue(GRN_LED_PORT,GRN_LED_PIN, HIGH);
     		_delay_ms(LED_DELAY_TIME);  //delay for 10000ms
     		///******_Setting GRN_LED Pin Value to LOW to Turn it OFF_***********///
     		M_DIO_void_SetPinValue(GRN_LED_PORT,GRN_LED_PIN, LOW);
     	break;

     	///******_ Blink  YELLOW_LED Pin Value _******************///
     	case YELLOW_LED :
		///******_Setting YELLOW_LED Pin Value to HIGH to Light it_***********///
     		M_DIO_void_SetPinValue(YELLOW_LED_PORT,YELLOW_LED_PIN, HIGH);
			_delay_ms(LED_DELAY_TIME);  //delay for 10000ms
		///******_Setting YELLOW_LED Pin Value to LOW to Turn it OFF_***********///
		    M_DIO_void_SetPinValue(YELLOW_LED_PORT,YELLOW_LED_PIN, LOW);
		break;


		default :   /*****error*****/    break;

}    	}
