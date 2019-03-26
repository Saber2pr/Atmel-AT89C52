#include "../lib/REG51.H"
#include "../lib/led-code.h"
#include "../lib/select138.h"
#include "../lib/delay.h"

#define LEN 8
#define Target P0

unsigned char led[LEN] = {Led_0, Led_1, Led_0, Led_5, Led_4, Led_2, Led_2, Led_1};

void display(unsigned int current)
{
  select(current);
  Target = led[current];
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

    display(current);
    ++current;

    delay(SECOND);
  }
}
