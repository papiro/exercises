#include <string.h>
#include <stdio.h>
#include <math.h>

unsigned short has_hexheader (const char[]);
unsigned short isvalid_hexchar (const char);
int htoi (const char h[]);
unsigned short htoi_char (const char);

int htoi (const char h[]) {
  unsigned short i = 0; 
  const unsigned short len = strlen(h);
  unsigned int ret = 0;

  if (has_hexheader(h))
    i = 2; // throw away the hex header

  for (; i < len; i++) {
    if (!isvalid_hexchar(h[i]))
      return -1;
    else {
      const unsigned short val = htoi_char(h[i]);
      const unsigned short base = len - i - 1;
      ret += (val*pow(16.0, (double)(base)));
    }
  }
  return ret;
}

// "0x" || "0X"
unsigned short has_hexheader (const char x[]) {
  return x[0] == '0' && (x[1] == 'x' || x[1] == 'X');
}
unsigned short isvalid_hexchar (const char x) {
  return (x >= '0' && x <= '9') || (x >= 'A' && x <= 'F') || (x >= 'a' && x <= 'f');
}

unsigned short htoi_char (const char h) {
  unsigned short ret;
  switch (h) {
    case 'a': 
    case 'A': 
      ret = 10;
      break;
    case 'b': 
    case 'B': 
      ret = 11;
      break;
    case 'c': 
    case 'C': 
      ret = 12;
      break;
    case 'd': 
    case 'D': 
      ret = 13;
      break;
    case 'e': 
    case 'E': 
      ret = 14;
      break;
    case 'f': 
    case 'F': 
      ret = 15;
      break;
    default:
      ret = h - '0';
  } 
  //printf("\n char %c is %d in tens-base\n", h, ret);
  return ret;
}
