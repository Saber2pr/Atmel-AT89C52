#include "../lib/REG51.H"
#include "../lib/delay.h"

sbit P2_0 = P2 ^ 0;

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