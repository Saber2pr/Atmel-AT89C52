#if !defined(KEYBOARD)
#define KEYBOARD
#include "../lib/REG51.H"
#include "./delay.h"

#define GPIO_DIG P0
#define GPIO_KEY P1

unsigned int KeyDown(void)
{
  unsigned int KeyValue;
  char a = 0;
  GPIO_KEY = 0x0f;
  if (GPIO_KEY != 0x0f)
  {
    delay(1000);
    if (GPIO_KEY != 0x0f)
    {
      GPIO_KEY = 0X0F;
      switch (GPIO_KEY)
      {
      case (0X07):
        KeyValue = 0;
        break;
      case (0X0b):
        KeyValue = 1;
        break;
      case (0X0d):
        KeyValue = 2;
        break;
      case (0X0e):
        KeyValue = 3;
        break;
      }
      GPIO_KEY = 0XF0;
      switch (GPIO_KEY)
      {
      case (0X70):
        KeyValue = KeyValue;
        break;
      case (0Xb0):
        KeyValue = KeyValue + 4;
        break;
      case (0Xd0):
        KeyValue = KeyValue + 8;
        break;
      case (0Xe0):
        KeyValue = KeyValue + 12;
        break;
      }
      while ((a < 50) && (GPIO_KEY != 0xf0))
      {
        delay(1000);
        a++;
      }
    }
  };
  return KeyValue;
}

#endif // KEYBOARD
