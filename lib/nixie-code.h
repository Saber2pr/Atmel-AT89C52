/*
 * @Author: saber2pr 
 * @Date: 2019-03-26 21:55:24 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-03-26 22:13:44
 */
#if !defined(NIXIELIGHT)
#define NIXIELIGHT

#define NixieLight P0

// 共阴极
#define NL_OF 0x00
#define NL_0 0x3F
#define NL_1 0x06
#define NL_2 0x5B
#define NL_3 0x4F
#define NL_4 0x66
#define NL_5 0x6D
#define NL_6 0x7D
#define NL_7 0x07
#define NL_8 0x7F
#define NL_9 0x6F
#define NL_A 0x77
#define NL_B 0x7C
#define NL_C 0x39
#define NL_D 0x5E
#define NL_E 0x79
#define NL_F 0x71
#define NL_H 0x76
#define NL_L 0x38
#define NL_P 0x73
#define NL_R 0x31
#define NL_U 0x3E
#define NL_Y 0x6E
#define NL__ 0x40
#define NL_ 0x80

unsigned char NL_list[] = {NL_0, NL_1, NL_2, NL_3, NL_4, NL_5, NL_6, NL_7, NL_8, NL_9, NL_A, NL_B, NL_C, NL_D, NL_E, NL_F, NL_H, NL_L, NL_P, NL_R, NL_U, NL_Y};

#endif // NIXIELIGHT
