#if !defined(NUMBER)
#define NUMBER

unsigned int pop(unsigned int num)
{
  return num / 10;
}

unsigned int length(unsigned int num)
{
  unsigned int result = 0;
  unsigned int current = num;
  while (current)
  {
    ++result;
    current = pop(current);
  }
  return result;
}

unsigned int get0(unsigned int num)
{
  return num % 10;
}

unsigned int get1(unsigned int num)
{
  return num / 10 % 10;
}

#endif // NUMBER
