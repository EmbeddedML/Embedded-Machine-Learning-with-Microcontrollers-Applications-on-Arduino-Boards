/*
 * lib_serial.cpp
 *
 *  Created on: May 7, 2023
 *      Author: Eren Atmaca
 */
#include "lib_serial.h"
#include <Arduino.h>

/**
  * @brief Transmits the data with its data type information in packets
  * @param pData   	Pointer to data buffer of any type
  * @param length	Number of data in quantity (not bytes!)
  * @param type 	Choose from SERIAL_DataTypeDef enum
  * @retval 0 if successfully transmitted
  */
int8_t LIB_SERIAL_Transmit(void *pData, uint32_t length, SERIAL_DataTypeDef type)
{
  uint8_t __header[3] = {'S','T','W'}, __count = 0;
	uint8_t * __pData = (uint8_t*) pData;
	if ((type == TYPE_S8) || (type == TYPE_U8))
	{
		length = length;
	}
	else if ((type == TYPE_S16) || (type == TYPE_U16))
	{
		length = length * 2;
	}
	else if ((type == TYPE_S32) || (type == TYPE_U32) || (type == TYPE_F32))
	{
		length = length * 4;
	}
	else
	{
		return SERIAL_ERROR;
	}

	Serial.write(__header, 3);
	Serial.write((uint8_t*)&type, 1);
	Serial.write((uint8_t*)&length, 4);
  delay(1);
  
  if(Serial.write(__pData, length) != length)
  {
    return SERIAL_ERROR;
  }
	return SERIAL_OK;
}




/**
  * @brief Receives the data in packets
  * @param pData   	Pointer to data buffer of any type
  * @param length	Number of data in quantity (not bytes!)
  * @param type 	Choose from SERIAL_DataTypeDef enum
  * @retval 0 if successfully received
  */
int8_t LIB_SERIAL_Receive(void *pData, uint32_t length, SERIAL_DataTypeDef type)
{
	uint8_t __header[3] = {'S','T','R'};
	uint8_t * __pData = (uint8_t*) pData;
  uint32_t __tick = 0; 
	if ((type == TYPE_S8) || (type == TYPE_U8))
	{
		length = length;
	}
	else if ((type == TYPE_S16) || (type == TYPE_U16))
	{
		length = length * 2;
	}
	else if ((type == TYPE_S32) || (type == TYPE_U32) || (type == TYPE_F32))
	{
		length = length * 4;
	}
	else
	{
		return SERIAL_ERROR;
	}

	Serial.write(__header, 3);
	Serial.write((uint8_t*)&type, 1);
	Serial.write((uint8_t*)&length, 4);
	delay(1);

  __tick = millis();
  while (Serial.available() == 0)
  {
    if ((millis() - __tick) > 10000) 
    {
      return SERIAL_ERROR;
    }
  }
      
  if (Serial.readBytes(__pData, length) != length)
  {
    return SERIAL_ERROR;
  }

	return SERIAL_OK;
}


