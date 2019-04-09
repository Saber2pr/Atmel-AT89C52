#include "../lib/REG51.H"
#include "../lib/select138.h"
#include "../lib/nixie-code.h"
#include "../lib/delay.h"
#include "../lib/number.h"
#include "../lib/keyboard.h"

#define LEN 8
// 09-10-02

// 显示时间帧
void displayTime(unsigned int hour, unsigned int min, unsigned int sec)
{
  // 按位查询字符
  unsigned char sec_0 = NL_list[get0(sec)];
  unsigned char sec_1 = NL_list[get1(sec)];
  unsigned char min_0 = NL_list[get0(min)];
  unsigned char min_1 = NL_list[get1(min)];
  unsigned char hour_0 = NL_list[get0(hour)];
  unsigned char hour_1 = NL_list[get1(hour)];

  // 遍历数码管显示字符
  unsigned int current = 0;
  for (; current < 8; current++)
  {
    // 138位选
    select(current);
    // 模式匹配
    switch (current)
    {
    case 0:
      NixieLight = sec_0;
      break;
    case 1:
      NixieLight = sec_1;
      break;
    case 2:
      NixieLight = NL__;
      break;
    case 3:
      NixieLight = min_0;
      break;
    case 4:
      NixieLight = min_1;
      break;
    case 5:
      NixieLight = NL__;
      break;
    case 6:
      NixieLight = hour_0;
      break;
    case 7:
      NixieLight = hour_1;
      break;
    default:
      break;
    }
  }
}

void main()
{
  unsigned int hour = 0;
  unsigned int min = 0;
  unsigned int sec = 0;
  unsigned int cur = 0;
  unsigned int delta = 1;

  unsigned currentSel = 0;

  while (1)
  {
    // 计数器，100个指令周期
    if (cur > 100)
    {
      cur = 0;
      sec++;
    }
    if (sec == 60)
    {
      sec = 0;
      min++;
    }
    if (min == 60)
    {
      min = 0;
      hour++;
    }
    if (hour == 60)
    {
      hour = 0;
    }
    cur += delta;

    // 暂停
    if (KeyDown() == 10)
    {
      delta = 0;
    }
    // 恢复
    if (KeyDown() == 11)
    {
      delta = 1;
    }

    // 如果没有暂停
    if (delta == 1)
    {
      displayTime(hour, min, sec);
    }

    // 如果暂停
    if (delta == 0)
    {
      /*   */
    }
  }
}
