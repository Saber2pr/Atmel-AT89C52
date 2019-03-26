/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:55:31 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-26 21:55:31 
 */
#if !defined(SELECT138)
#define SELECT138
#include "./dectobin.h"
#include "./REG51.H"
#include "./port.h"

void select(unsigned int index_dec)
{
  unsigned int index_bin = dectobin(index_dec);
  P2_4 = index_bin / 100 % 10;
  P2_3 = index_bin / 10 % 10;
  P2_2 = index_bin / 1 % 10;
}

#endif // SELECT138
