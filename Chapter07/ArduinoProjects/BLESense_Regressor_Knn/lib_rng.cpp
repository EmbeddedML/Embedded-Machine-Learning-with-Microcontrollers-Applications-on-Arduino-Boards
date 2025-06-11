/*
 * lib_rng.cpp
 *
 *  Created on: Sept 27, 2023
 *      Author: Eren Atmaca
 */
#include "lib_rng.h"
#include "nrf52840.h"

/**
  * @brief Generates a random 32-bit number
  * @retval 32-bit random number
  */
uint32_t LIB_RNG_GetRandomNumber(void)
{
  uint32_t val = 0;
  NRF_RNG->CONFIG = 1;
  NRF_RNG->TASKS_START = 1;
  for (uint8_t i = 0; i < 4; i++)
  {
    while(NRF_RNG->EVENTS_VALRDY == 0);
    NRF_RNG->EVENTS_VALRDY = 0;
    val = (val << 8) | NRF_RNG->VALUE;
  }
  NRF_RNG->TASKS_STOP = 1;
  return val;
}