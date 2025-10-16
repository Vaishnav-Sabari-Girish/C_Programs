#include <stdio.h>

// Create your own type using typedef keyword
// For eg

typedef unsigned int unsigned16bit;

int main(void)
{
  unsigned16bit a = 10;

  // The above is same as 
  unsigned int b = 14;

  printf("Using custom datatype : %d\n", a);
  printf("Using in-built datatype: %d\n", b);
}
