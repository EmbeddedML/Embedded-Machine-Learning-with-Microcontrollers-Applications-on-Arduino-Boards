#include "mbed.h"
mbed::Ticker ticker;
uint8_t LedStatus = 0;
void TICKER_Callback()
{
  if(LedStatus == 0)
  {
    digitalWrite(LED_RED, LOW);
    LedStatus = 1;
  }
  else
  {
    digitalWrite(LED_RED, HIGH);
    LedStatus = 0;
  }
}
void setup() 
{
  pinMode(LED_RED, OUTPUT);
  digitalWrite(LED_RED, HIGH);
  ticker.attach(&TICKER_Callback, 1.0);
}
void loop() 
{

}
