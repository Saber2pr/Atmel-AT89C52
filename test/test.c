#include <stdio.h>
#include "../lib/dectobin.h"

void main()
{
  unsigned int res = 201;
  printf("%d", res / 100 % 10);
}