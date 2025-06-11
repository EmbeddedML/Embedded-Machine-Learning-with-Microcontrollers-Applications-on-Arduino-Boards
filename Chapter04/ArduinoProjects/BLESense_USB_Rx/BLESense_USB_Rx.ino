#include <string.h>

uint8_t buffer[10];

void setup() 
{
  Serial.begin(2000000);
  // Initialize LED and Turn OFF    
  pinMode(LEDR, OUTPUT);
  digitalWrite(LEDR, HIGH);
  // Wait USB connection
  while(!Serial);
}

void loop() 
{
  memset(buffer, '0', 10);
  Serial.readBytesUntil('\n', buffer, 10);
  if(strncmp("ON", (const char*)buffer, 2) == 0)
  {
    // Turn LED ON 
    digitalWrite(LEDR, LOW);
  } 
  else if(strncmp("OFF", (const char*)buffer, 3) == 0)
  {
    // Turn LED OFF
    digitalWrite(LEDR, HIGH);
  }
}
