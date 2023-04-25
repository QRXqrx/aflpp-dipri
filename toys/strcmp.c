//
// Test strcmp, strcasecmp
//
#include <string.h>
#include <stdio.h>

int main(void) {

  char *str = "V";

  printf("%u\n", strcasecmp(str, "v"));
  printf("%u\n", strcasecmp(str, "V"));

}
