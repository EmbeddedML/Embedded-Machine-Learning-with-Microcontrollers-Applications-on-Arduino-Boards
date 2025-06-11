/*
 * lib_serialimage.c
 *
 *  Created on: 29 Oca 2023
 *      Author: Eren Atmaca
 */

#include "lib_serialimage.h"
#include <Arduino.h>



/* |'S'|'T'|'W'|HEIGHT0|HEIGHT1|WIDTH0||WIDTH1|FORMAT|... DATA ...| */
/*
int8_t LIB_SERIAL_IMG_Transmit(IMAGE_HandleTypeDef * img)
{
	uint8_t __header[3] = {'S','T','W'};
	uint8_t * __pData = img->pData;
  uint32_t __size = img->size;
  
	Serial.write(__header, 3);
	Serial.write((uint8_t*)&img->height, 2);
	Serial.write((uint8_t*)&img->width,  2);
	Serial.write((uint8_t*)&img->format, 1);
	delay(1);

  if(Serial.write(__pData, __size) != __size)
  {
    return SERIAL_ERROR;
  }
  Serial.flush();
	return SERIAL_OK;
}
*/

int8_t LIB_SERIAL_IMG_Transmit(IMAGE_HandleTypeDef * img)
{
	uint8_t __header[3] = {0xAA,0x55,'W'}, __count = 0;
	uint16_t __quotient = 0, __remainder = 0;
	uint16_t divisor = UINT16_MAX;
	uint8_t * __pData = img->pData;

	__quotient 	= img->size / divisor;
	__remainder = img->size % divisor;

  Serial.write(__header, 3);
  delay(1);
	Serial.write((uint8_t*)&img->height, 2);
	Serial.write((uint8_t*)&img->width,  2);
	Serial.write((uint8_t*)&img->format, 1);
	delay(10);
  while(__count < __quotient)
	{
		Serial.write(__pData, UINT16_MAX);
    Serial.flush();
		__count++;
		__pData += UINT16_MAX;
	}
	if (__remainder)
	{
		Serial.write(__pData, __remainder);
	}
	delay(1);
	return SERIAL_OK;
}



int8_t LIB_SERIAL_IMG_Receive(IMAGE_HandleTypeDef * img)
{
	uint8_t __header[3] = {0xAA,0x55,'R'};
	uint8_t * __pData = img->pData;
  uint32_t __size = img->size;
  uint32_t __tick = 0;
  
  Serial.write(__header, 3);
	Serial.write((uint8_t*)&img->height, 2);
	Serial.write((uint8_t*)&img->width,  2);
	Serial.write((uint8_t*)&img->format, 1);
	delay(1);

  __tick = millis();
  while (Serial.available() == 0)
  {
    if ((millis() - __tick) > 10000) 
    {
      return SERIAL_ERROR;
    }
  }
  if (Serial.readBytes(__pData, __size) != __size)
  {
    return SERIAL_ERROR;
  }
	return SERIAL_OK;
}

