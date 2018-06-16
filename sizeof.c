#include <stdio.h>
#define FULL ~(1L&0)

int main () {
  short s;
  char c;
  int i;
  long l, full = ~(l&0);
  double d;
  float f;

  printf("\n8: %hhu\n", FULL);
  printf("16: %hu\n", ~(l&0));
  printf("32: %lu\n",  (1UL<<32)-1);
  //printf("64: %lu\n",  (1UL<<64)-1);

  printf("\nsizeof char: %d\n\n", sizeof c);

  printf("sizeof short: %d\n", sizeof s);
  printf("sizeof int: %d\n", sizeof i);
  printf("sizeof long: %d\n\n", sizeof l);

  printf("sizeof float: %d\n", sizeof f);
  printf("sizeof double: %d\n", sizeof d);

  printf("\n");
}
