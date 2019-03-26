/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:54:56 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-03-26 22:15:50
 */
#include "../lib/REG51.H"
#include "../lib/nixie-code.h"
#include "../lib/select138.h"
#include "../lib/delay.h"

#define LEN 8

unsigned char NL_list[LEN] = {NL_0, NL_1, NL_0, NL_5, NL_4, NL_2, NL_2, NL_1};

void display(unsigned int current)
{
  NixieLight = OFF;
  delay(100);
  NixieLight = NL_list[current];
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
