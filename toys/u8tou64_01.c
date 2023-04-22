//
// Transform trace_bits into u64 0101
//
#include <stdio.h>

typedef unsigned char u8;
typedef u_int64_t     u64;

int main() {

  u8  u8arr[4] = {1, 0, 1, 0};
  u64 num = 0;

  for (int i = 0 ; i < 4 ; i++) {
    num <<= 1; // left shift == *2
    if (u8arr[i]) num += 1;
  }

  printf("num=%llu\n", num); // 5: 0101, 10: 1010

}

