/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:54:56 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-26 21:54:56 
 */
#include "../lib/REG51.H"
#include "../lib/led-code.h"
#include "../lib/select138.h"
#include "../lib/delay.h"

#define LEN 8

unsigned char led[LEN] = {Led_0, Led_1, Led_0, Led_5, Led_4, Led_2, Led_2, Led_1};

void display(unsigned int current)
{
  NixieLight = OFF;
  delay(100);
  NixieLight = led[current];
}

void main()
{
  unsigned int current = 0;

  while (1)
  {
    if (current == LEN)
    {
      current = 0;
    }

    select(current);
    display(LEN - 1 - current);
    ++current;

    delay(100);
  }
}
