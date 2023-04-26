//
// Test different measure flavours
//
#include <stdio.h>
#include <math.h>

typedef u_int8_t    u8;
typedef u_int32_t   u32;

double euclidean(u32 len, u8 vec1[], u8 vec2[]) {
  double  res = 0;
  u32     hit_diff;
  for (u32 i = 0; i < len; ++i) {
    hit_diff = vec1[i] - vec2[i];
    res += (hit_diff * hit_diff);
    printf("hit_diff=%d\n", hit_diff);
    printf("res=%lf\n", res);
  }
  return sqrt(res) / len;
}

double hamming(u32 len, u8 vec1[], u8 vec2[]) {
  double res = 0;
  for (u32 i = 0; i < len; ++i)
    res += (vec1[i] ^ vec2[i]);
  return res / len;
}

double jaccard(u32 len, u8 vec1[], u8 vec2[]) {
  double uset = 0;  // Union set
  double iset = 0;  // Intersection set
  for (u32 i = 0; i < len; ++i) {
    uset += (vec1[i] | vec2[i]);
    iset += (vec1[i] & vec2[i]);
  }
  return (uset - iset) / uset;
}

#define LEN 4

u8 vec1[LEN] = {1, 0, 1, 0};
u8 vec2[LEN] = {0, 1, 0, 1};
u8 vec3[LEN] = {255, 255, 0 , 0};
u8 vec4[LEN] = {0, 0, 255, 255};

int main(void) {

  double j = jaccard(LEN, vec1, vec2);
  double h = hamming(LEN, vec1, vec2);
  double e = euclidean(LEN, vec3, vec4);

  printf("jaccard=%lf\n", j);
  printf("hamming=%lf\n", h);
  printf("euclidean=%lf\n", e);

}
