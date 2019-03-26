#if !defined(DECTOBIN)
#define DECTOBIN

unsigned int dectobin(unsigned int n)
{
  unsigned int result = 0, k = 1, i, temp;
  temp = n;
  while (temp)
  {
    i = temp % 2;
    result = k * i + result;
    k = k * 10;
    temp = temp / 2;
  }
  return result;
}

#endif // DECTOBIN
