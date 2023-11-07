#include <stdio.h>
#include <math.h>
#include <float.h>

u_int8_t compare(double x, double y) {
  return fabs(x - y) < DBL_EPSILON;
}

int main(void) {

  printf("%d\n", compare(28.0145, 28.0145));
  printf("%d\n", compare(28.01451, 28.0145));
  printf("%d\n", compare(28.0145000000000000000000000000000000000000000000001,
                         28.0145));
  double diff = 28.0145000000000000000000000000000000000000000000001 - 28.0145;
  printf("%.30lf, %.30lf\n", diff, DBL_EPSILON);

  return 0;
}
