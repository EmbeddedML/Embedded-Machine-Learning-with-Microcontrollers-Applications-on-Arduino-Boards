#include <Arduino_HTS221.h>

float temperature;
float humidity;

void setup() 
{
  // Init Blue and Red LED
  pinMode(LEDB, OUTPUT);
  pinMode(LEDR, OUTPUT);
  // Turn Off LEDs
  digitalWrite(LEDB, HIGH); 
  digitalWrite(LEDR, HIGH); 
  // Init HTS221
  HTS.begin();  
}

void loop() 
{
  humidity = HTS.readHumidity();
  temperature = HTS.readTemperature();
  if (temperature > 30)
  {
    // Turn On Red LED
    digitalWrite(LEDR, LOW);
  }
  else
  {
    // Turn Off Red LED
    digitalWrite(LEDR, HIGH); 
  }
  if (humidity > 70)
  {
    // Turn On Blue LED
    digitalWrite(LEDB, LOW);
  }
  else
  {
    // Turn Off Blue LED
    digitalWrite(LEDB, HIGH); 
  }
  delay(10);
}