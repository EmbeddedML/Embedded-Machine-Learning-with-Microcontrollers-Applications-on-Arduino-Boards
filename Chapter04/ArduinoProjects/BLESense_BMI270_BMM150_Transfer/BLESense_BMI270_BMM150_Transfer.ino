#include "Arduino_BMI270_BMM150.h"
#include "lib_serial.h"
typedef struct
{
	float accel[3];
	float gyro[3];
	float mag[3];
}IMU_F32DataTypeDef;
IMU_F32DataTypeDef imuData = {0};

void setup() 
{
  Serial.begin(2000000);
  IMU.begin();
}

void loop() 
{
  if(IMU.accelerationAvailable() && IMU.gyroscopeAvailable() && IMU.magneticFieldAvailable())
  {
    IMU.readAcceleration(imuData.accel[0], imuData.accel[1], imuData.accel[2]);
    IMU.readGyroscope(imuData.gyro[0], imuData.gyro[1], imuData.gyro[2]);
    IMU.readMagneticField(imuData.mag[0], imuData.mag[1], imuData.mag[2]);
    LIB_SERIAL_Transmit(&imuData, 9, TYPE_F32);
  }
  delay(1000);
}
