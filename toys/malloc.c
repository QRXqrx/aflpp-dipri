//
// Created by 钱瑞祥 on 2023/11/15.
//
#include <stdlib.h>
#include <stdio.h>

typedef unsigned char u8;

int main(void) {

  int *arr;
  int len = 8;

  arr = (int *) malloc(len);

  for (int i = 0 ; i < len * 2; ++i) {
    printf("%d\n", arr[i]);
  }

  // Better use sizeof, but it is ok for char type.
  printf("sizeof(u8)=%ld, sizeof(u8)=%ld\n", sizeof(u8), sizeof(int));

  return 0;
}
