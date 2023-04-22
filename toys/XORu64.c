//
// Test XOR for u64
//
#include <stdio.h>

typedef unsigned long long  u64;
typedef unsigned char       u8;

int main(void) {

  u64 num1 = 10;          // 1010
  u64 num2 = 1;           // 0001
  u64 res  = num1 ^ num2; // 1011

  printf("1010^0101=%llu\n", res);
  u8 cnt = 0;
  while (res) {
    printf("%llu", res % 2);
    if(res % 2) cnt++;
    res >>= 1;
  }
  printf("\n");
  printf("cnt=%u\n", cnt);

}