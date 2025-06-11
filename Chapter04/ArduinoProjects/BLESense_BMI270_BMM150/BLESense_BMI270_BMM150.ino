#include "Arduino_BMI270_BMM150.h"

float acc_x, acc_y, acc_z;
float gyro_x, gyro_y, gyro_z;
float mag_x, mag_y, mag_z;

void setup() 
{
  // Initialize the LEDs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  // Turn off the LEDs
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, HIGH);  
  // Initialize the IMU
  IMU.begin();
}

void loop() 
{
  if(IMU.accelerationAvailable())
  {
    IMU.readAcceleration(acc_x, acc_y, acc_z);
    if (abs(acc_x) > 0.5f)  digitalWrite(LEDR, LOW);
    else digitalWrite(LEDR, HIGH);
    if (abs(acc_y) > 0.5f)  digitalWrite(LEDG, LOW);
    else digitalWrite(LEDG, HIGH);
    if (abs(acc_z) > 0.5f)  digitalWrite(LEDB, LOW);
    else digitalWrite(LEDB, HIGH);
  }
  if(IMU.gyroscopeAvailable())
  {
    IMU.readGyroscope(gyro_x, gyro_y, gyro_z);
  }
  if(IMU.magneticFieldAvailable())
  {
    IMU.readMagneticField(mag_x, mag_y, mag_z);
  }
}
