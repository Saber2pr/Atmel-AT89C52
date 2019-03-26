/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:55:20 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-26 21:55:20 
 */
#if !defined(DELAY)
#define DELAY

#define SECOND 100000

void delay(unsigned int times)
{
  while (times--)
    ;
}

#endif // DELAY
