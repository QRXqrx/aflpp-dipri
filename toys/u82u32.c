//
// Test u8 to u32
//
#include <stdio.h>

typedef u_int8_t  u8;
typedef u_int32_t u32;
typedef u_int64_t u64;

int main(void) {

  u8    u8arr[4]  = {255, 0, 0, 0};
  u8   *u8ptr     = u8arr;
  u32  *u32ptr    = (u32*) u8ptr;
  printf("(u8){255, 0, 0, 0}=%u\n", *u32ptr);
  printf("0x000000ffU=%u\n", 0x000000ffU); // 11111111

  u8arr[0] = 0;
  u8arr[1] = 255;
  printf("(u8){0, 255, 0, 0}=%u\n", *u32ptr);
  printf("0x0000ff00U=%u\n", 0x0000ff00U); // 11111111

  u8arr[1] = 0;
  u8arr[2] = 255;
  printf("(u8){0, 0, 255, 0}=%u\n", *u32ptr);
  printf("0x00ff0000U=%u\n", 0x00ff0000U); // 11111111

  u8arr[2] = 0;
  u8arr[3] = 255;
  printf("(u8){0, 0, 0, 255}=%u\n", *u32ptr);
  printf("0xff000000U=%u\n", 0xff000000U); // 11111111

  u8arr[0] = 128;
  printf("0x000000ffU&=(u8){128, 0, 0, 255}=%u\n", 0x000000ffU & *u32ptr);

  printf("0xff0000000000U&=%lu\n", 0xff00000000000000U);

}
