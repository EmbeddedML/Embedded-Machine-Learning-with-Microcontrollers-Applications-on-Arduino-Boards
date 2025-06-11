#include <algorithm>
#include <PDM.h>

#define BUFFER_SIZE 16000
volatile int samplesRead;
volatile uint32_t sampleCount = 0;
int16_t buffer[BUFFER_SIZE];

void setup() 
{
  // Initialize LEDs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  // Turn Off LEDs
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH);
  //Register Callback
  PDM.onReceive(onPDMdata);
  // Init PDM peripheral
  if (!PDM.begin(1, 16000)) 
  {
    digitalWrite(LEDR, LOW);
    while (1);
  }
}

void loop() 
{
  if (sampleCount >= BUFFER_SIZE/2) 
  {
    sampleCount = 0;
    int16_t max = *std::max_element(buffer, buffer + BUFFER_SIZE);
    int16_t min = *std::min_element(buffer, buffer + BUFFER_SIZE);
    int32_t diff = ((int32_t)max - (int32_t)min);
    if (diff > (int32_t)500) 
    {
      digitalWrite(LEDG, LOW);
    }
    else 
    {
      digitalWrite(LEDG, HIGH);
    }
  }
}

void onPDMdata() 
{
  int bytesAvailable = PDM.available();
  
  PDM.read(&buffer[sampleCount], bytesAvailable);

  samplesRead = bytesAvailable / 2;
  sampleCount += samplesRead;
}