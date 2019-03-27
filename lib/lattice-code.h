/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 22:20:28 
 * @Last Modified by:   saber2pr 
 * @Last Modified time: 2019-03-26 22:20:28 
 */
#if !defined(LATTICE)
#define LATTICE

#define LatticeLight P0

#define LL_WIDTH 8
#define LL_HEIGHT 8
#define LL_ON 0x18
#define LL_OF 0x24

unsigned char LL_0[LL_WIDTH] = {LL_OF, LL_ON, LL_OF, LL_ON, LL_ON, LL_ON, LL_ON, LL_OF};

#endif // LATTICE
