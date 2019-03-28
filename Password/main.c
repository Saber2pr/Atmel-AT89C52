/*
 * @Author: saber2pr 
 * @Date: 2019-03-28 18:19:54 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-28 18:19:54 
 */
#include "../lib/REG51.H"
#include "../lib/nixie-code.h"
#include "../lib/keyboard.h"

void main()
{
  unsigned int current = 0;
  while (1)
  {
    current = KeyDown();
    NixieLight = NL_list[current];
  };
}