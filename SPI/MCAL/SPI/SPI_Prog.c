/*
 * SPI_Prog.c
 *
 *  Created on: Nov 20, 2022
 *      Author: AbdelRahman Atef
 *       SPI is:
 *      -Serial
 *      -Wired
 *      -Synchronous
 *      -Full_Dublex
 *      -Single Master Multi
 */
///***************** Includes **********//
#include "SPI_Int.h"
///***************** Functions **********//
///***************** Function to initialize SPI **********//
void M_SPI_void_SPIInt(void)
{
#if     SPI_MODE == SPI_MASTER_MODE
	///*** To select SPI MASTER MODE set MSTR bit in SPCR_REG
	SetBit( SPCR_REG , MSTR);

	////**** Set PINs direction *****//
	 // *** set SS pin to OUTPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN4, OUTPUT);
	// *** set MOSI pin to OUTPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN5, OUTPUT);
	// *** set MISO pin to INPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN6, INPUT );
	// *** set SCK pin to OUTPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN7, OUTPUT);

#elif   SPI_MODE == SPI_SLAVE_MODE
	///*** To select SPI SLAVE MODE clear MSTR bit in SPCR_REG
	ClrBit( SPCR_REG , MSTR);
	////**** Set PINs direction *****//
	 // *** set SS pin to INPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN4, INPUT );
	// *** set MOSI pin to INPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN5, INPUT );
	// *** set MISO pin to OUTPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN6, OUTPUT);
	// *** set SCK pin to INPUT
	M_DIO_void_SetPinDirection(PORTB_ID, PIN7, INPUT );
#endif

	///******* Select  SPI Data Order *******//
#if SPI_DATA_ORDER  == LSB_ORDER
	///*** To select LSB order set DORD bit in SPCR_REG
	   SetBit(SPCR_REG , DORD);

#elif SPI_DATA_ORDER  == MSB_ORDER
	///*** To select LSB order clear DORD bit in SPCR_REG
	   ClrBit(SPCR_REG , DORD);

#endif

	   ///******* Select SPI PRECALER*******//
#if    SPI_PRECALER   ==  4
///*** To select SPI PRECALER F_osc / 4   clear (SPR1 , SPR0) bits   in SPCR_REG
	   ClrBit(SPCR_REG , SPR0);
	   ClrBit(SPCR_REG , SPR1);

#elif  SPI_PRECALER   ==  16
///*** To select SPI PRECALER F_osc / 16  clear SPR1 set  SPR0       in SPCR_REG
	   SetBit(SPCR_REG , SPR0);
	   ClrBit(SPCR_REG , SPR1);

#elif  SPI_PRECALER   ==  64
///*** To select SPI PRECALER F_osc / 64  set   SPR1 clear SPR0      in SPCR_REG
	   ClrBit(SPCR_REG , SPR0);
	   SetBit(SPCR_REG , SPR1);

#elif  SPI_PRECALER   ==  128
///*** To select SPI PRECALER F_osc / 128 Set   (SPR1 , SPR0) bits   in SPCR_REG
	   SetBit(SPCR_REG , SPR0);
	   SetBit(SPCR_REG , SPR1);
#endif

	///****** To enable SPI set SPE bit in SPCR_REG  **********//
      SetBit(SPCR_REG , SPE);
}
///*****************  SPI Transceiver Function  **********//
u8 M_SPI_void_SPITransceiver(u8 Local_u8Data)
{

	SPDR_REG = Local_u8Data ;
	while(GetBit(SPSR_REG , SPIF ) == 0);
	return SPDR_REG ;
}

