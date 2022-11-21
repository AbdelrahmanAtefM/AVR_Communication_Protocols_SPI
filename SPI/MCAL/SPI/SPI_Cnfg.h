/*
 * SPI_Cnfg.h
 *
 *  Created on: Nov 20, 2022
 *      Author: AbdelRahman Atef
 */

#ifndef MCAL_SPI_SPI_CNFG_H_
#define MCAL_SPI_SPI_CNFG_H_

/*
 * select SPI Mode :
 * SPI_MASTER_MODE
 * SPI_SLAVE_MODE
 */
#define  SPI_MODE   SPI_MASTER_MODE

/*
 * select SPI DATA ORDER :
 * LSB_ORDER
 * MSB_ORDER
 */
#define SPI_DATA_ORDER   LSB_ORDER

/*
 * select SPI PRECALER :
 * 4
 * 16
 * 64
 * 128
 */
#define SPI_PRECALER     128
#endif /* MCAL_SPI_SPI_CNFG_H_ */
