//
// Test memset
//
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef u_int8_t u8;

int main(void) {

  u8 u8arr[4] = {4, 5, 2, 1};
  u8 u8arr2[4];
  memcpy(u8arr2, u8arr, 2);
  memset(u8arr, 1, 4);

  for (int i = 0 ; i < 4; ++i)
    printf("%d ", u8arr[i]);
  printf("\n");

  for (int i = 0 ; i < 4; ++i)
    printf("%d ", u8arr2[i]);
  printf("\n");

  u8 *mem = calloc(8, sizeof(mem));
//  u8 *mem = malloc(8 * sizeof(mem));
  for (int i = 0 ; i < 100; i ++)
    printf("%u ", mem[i]);
  printf("\n");
  printf("(mem == NULL) %u\n", mem == NULL);
  printf("mem %p\n", mem);
  free(mem);
  mem = NULL;
  printf("(mem == NULL) %u\n", mem == NULL);
  printf("mem %p\n", mem);

}
