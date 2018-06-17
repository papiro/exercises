#include "htoi.h"
#include <stdio.h>

int main () {
  printf("invoke 0X000\n");
  printf("%d\n", htoi("0X000"));

  printf("invoke 0X001\n");
  printf("%d\n", htoi("0X001"));

  printf("invoke 0X00F\n");
  printf("%d\n", htoi("0X00F"));

  printf("invoke 0x10\n");
  printf("%d should be 16\n", htoi("0x10"));

  printf("invoke 0x21\n");
  printf("%d should be 33\n", htoi("0x21"));

  printf("invoke 0X0FF\n");
  printf("%d\n", htoi("0X0Ff"));

  printf("invoke 0X100\n");
  printf("%d\n", htoi("0X100"));

  printf("invoke 0Xfff\n");
  printf("%d\n", htoi("0Xfff"));
}
