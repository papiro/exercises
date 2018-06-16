#include <stdio.h>

int main () {
  int c;

  printf("Ctrl+c to quit\n\n");

  while((c = fgetc(stdin))) {
    printf("Char | Num\n");
    if (c == '\n')
      printf("  \\n");
    else if (c == 27)
      printf(" ESC");
    else 
      printf("%4c", c);
    printf("   %3d\n", c);
  }
}

