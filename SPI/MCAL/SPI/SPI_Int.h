/*
 * SPI_Int.h
 *
 *  Created on: Nov 20, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef MCAL_SPI_SPI_INT_H_
#define MCAL_SPI_SPI_INT_H_


///***************** INCLUDES **********//

#include "SPI_Cnfg.h"
#include "SPI_Priv.h"
#include "DIO_Int.h"
#include "STD_TYPS.h"
#include "BIT_MATH.h"

///***************** PROTOTYPES **********//
///***************** Function to initialize SPI **********//
void M_SPI_void_SPIInt(void);
///*****************  SPI Transceiver Function  **********//
u8 M_SPI_void_SPITransceiver(u8);

#endif /* MCAL_SPI_SPI_INT_H_ */
