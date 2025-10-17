// Assignment operators are are also known as Compound operators
// Used to assign a literal to a constant or variable

#include <stdio.h>

short x = 10;
unsigned int y;

int main() {
  y = x;              // = is the assignment operator 
  x = x + y;          // = is the assignment operator 
  x += y;             // Same as previous line (+= is the assignment operator)

  printf("%hd\n", x); // %hd is used to print short values
  printf("%u\n", y);
  return 0;
}
