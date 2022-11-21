/*
 * SPI_Priv.h
 *
 *  Created on: Nov 20, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef MCAL_SPI_SPI_PRIV_H_
#define MCAL_SPI_SPI_PRIV_H_

#define SPCR_REG    *((volatile u8 *) 0x2D)
#define SPR0        0
#define SPR1        1
#define MSTR        4
#define DORD        5
#define SPE         6

#define SPDR_REG    *((volatile u8 *) 0x2F)
#define SPIF        7

#define SPSR_REG    *((volatile u8 *) 0x2E)


////****** SPI MODES *******//
#define SPI_MASTER_MODE     1
#define SPI_SLAVE_MODE      2

////*****SPI Data Order *******//
#define  LSB_ORDER          1
#define  MSB_ORDER          2
#endif /* MCAL_SPI_SPI_PRIV_H_ */
