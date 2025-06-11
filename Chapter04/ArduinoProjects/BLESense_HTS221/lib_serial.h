#ifndef __LIB_SERIAL
#define __LIB_SERIAL


#include <stdint.h>

typedef enum
{
	TYPE_U8 	= 1,
	TYPE_S8 	= 2,
	TYPE_U16 	= 3,
	TYPE_S16 	= 4,
	TYPE_U32 	= 5,
	TYPE_S32 	= 6,
	TYPE_F32 	= 7,
}SERIAL_DataTypeDef;

#define SERIAL_OK				((int8_t)0)
#define SERIAL_ERROR			((int8_t)-1)

#define SERIAL_BAUDRATE			2000000UL

int8_t LIB_SERIAL_Transmit(void *pData, uint32_t length, SERIAL_DataTypeDef type);
int8_t LIB_SERIAL_Receive(void *pData, uint32_t length, SERIAL_DataTypeDef type);


#endif __LIB_SERIAL