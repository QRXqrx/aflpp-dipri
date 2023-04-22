//
// Locate the alignment in get_map_size()
//
#include <stdio.h>

typedef u_int32_t u32;

u32 align(u32 map_size) {

  if (map_size % 64) map_size = (((map_size >> 6) + 1) << 6);

  return map_size;

}

int main(void) {

  u32 real_map  = 29563; // showmap readelf-2.4.0;
  u32 align_map = align(real_map);

  printf("real_map=%u, aligned_map=%u\n", real_map, align_map);

}
