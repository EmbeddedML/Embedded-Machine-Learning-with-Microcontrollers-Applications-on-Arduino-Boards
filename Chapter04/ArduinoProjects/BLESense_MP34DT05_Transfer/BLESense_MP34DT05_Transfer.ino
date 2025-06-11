#include <PDM.h>
#include "lib_serial.h"

#define BUFFER_SIZE   70000
#define TX_SIZE       BUFFER_SIZE - 6000
volatile int samplesRead;
volatile uint32_t sampleCount = 0;
uint16_t buffer[BUFFER_SIZE];

void setup() 
{
  //Init Communication
  Serial.begin(2000000);
  while (!Serial);
  // Init LED
  pinMode(LEDG, OUTPUT);
  // Turn off LED 
  digitalWrite(LEDG, HIGH);
  PDM.onReceive(onPDMdata);
  //Init PDM microphone
  if (!PDM.begin(1, 16000)) 
  {
    while (1);
  }

}

void loop() 
{

  if (sampleCount >= TX_SIZE) 
  {
    sampleCount = 0;
    digitalWrite(LEDG, LOW);
    LIB_SERIAL_Transmit(buffer, TX_SIZE, TYPE_S16);
    delay(2000);  
    digitalWrite(LEDG, HIGH);
  }
}

void onPDMdata() 
{
  // Query the number of available bytes
  int bytesAvailable = PDM.available();

  // Read into the sample buffer
  PDM.read(&buffer[sampleCount], bytesAvailable);

  // 16-bit, 2 bytes per sample
  samplesRead = bytesAvailable / 2;
  sampleCount += samplesRead;
}
