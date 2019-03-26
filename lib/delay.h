#if !defined(UTILS)
#define UTILS

#define SECOND 100000

void delay(unsigned int times)
{
  while (times--)
    ;
}

#endif // UTILS
