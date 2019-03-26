/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:55:06 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-26 21:55:06 
 */
#include "../lib/REG51.H"
#include "../lib/delay.h"
#include "../lib/port.h"

void main()
{
  while (1)
  {
    P2_0 = 0;
    delay(10000);
    P2_0 = 1;
    delay(10000);
  };
}