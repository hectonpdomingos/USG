/*
 * upstream_interface_def.h
 *
 *  Created on: 24/07/2015
 *      Author: Robert Fisk
 */

#ifndef INC_UPSTREAM_INTERFACE_DEF_H_
#define INC_UPSTREAM_INTERFACE_DEF_H_


//***************
// Attention!
// Keep this file synchronised with downstream_interface_def.h
// in the Upstream project.
//***************



#define COMMAND_CLASS_DATA_FLAG		0x80
#define COMMAND_CLASS_MASK			((uint8_t)(~COMMAND_CLASS_DATA_FLAG))


typedef enum
{
	COMMAND_CLASS_INTERFACE		= 0,
	COMMAND_CLASS_MASS_STORAGE	= 1,
	COMMAND_CLASS_MAX 			= 2,
}
InterfaceCommandClassTypeDef;


typedef enum
{
	COMMAND_MSC_TEST_UNIT_READY			= 0,	//Returns HAL_StatusTypeDef result
	COMMAND_MSC_GET_CAPACITY			= 2,	//Returns uint32_t blk_nbr, uint32_t blk_size
	COMMAND_MSC_BEGIN_READ				= 3,	//Returns HAL_StatusTypeDef result, then data stream
	COMMAND_MSC_BEGIN_WRITE				= 4,	//Returns HAL_OK, HAL_ERROR if medium not present, HAL_BUSY if write-protected result, then waits for data stream
	COMMAND_MSC_MAX						= 5,
}
InterfaceCommandMscTypeDef;



#endif /* INC_UPSTREAM_INTERFACE_DEF_H_ */
