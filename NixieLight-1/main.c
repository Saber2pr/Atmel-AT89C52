/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:54:50 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-03-26 22:15:09
 */
#include "../lib/REG51.H"
#include "../lib/delay.h"
#include "../lib/nixie-code.h"

#define LEN 10

unsigned char NL_list[LEN] = {NL_1, NL_6, NL_0, NL_1, NL_0, NL_5, NL_4, NL_2, NL_2, NL_1};

void main()
{
  unsigned int current = 0;
  while (1)
  {
    if (current == LEN)
    {
      current = 0;
    }

    NixieLight = NL_OF;
    delay(SECOND);
    NixieLight = NL_list[current];

    ++current;

    delay(SECOND);
  }
}
