/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:55:06 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-26 21:55:06 
 */
#include "../lib/REG51.H"
#include "../lib/delay.h"
#include "../lib/INTRINS.H"

void main()
{
  P2 = 0x7f;
  while (1)
  {
    P2 = _cror_(P2, 1);
    delay(10000);
  };
}