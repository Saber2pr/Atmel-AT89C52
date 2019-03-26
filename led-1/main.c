#include "../lib/REG51.H"
#include "../lib/delay.h"
#include "../lib/led-code.h"

#define LEN 10
#define Target P0

void main()
{
  unsigned char led[LEN] = {Led_1, Led_6, Led_0, Led_1, Led_0, Led_5, Led_4, Led_2, Led_2, Led_1};
  unsigned int current = 0;
  while (1)
  {
    if (current == LEN)
    {
      current = 0;
    }

    Target = OFF;

    delay(SECOND);

    Target = led[current];

    ++current;

    delay(SECOND);
  }
}
