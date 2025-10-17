// Bitwise operators are similar to logical operators
// The only difference is that they do the same logical operations of AND, OR, NOT, etc bit-by-bit
/*
 * The bitwise operators are
 * Bitwise AND (&)
 * Bitwise OR (|)
 * Bitwise XOR (^)
 * Bitwise NOT (~)
 */

#include <stdio.h>

int main() {
  int x = 0b00110011;
  int y = 0b11011101;

  int z = x & y;    // Bitwise AND
  int a = x | y;    // Bitwise OR
  int b = x ^ y;    // Bitwise XOR
  int not_x = ~x;   // Bitwise NOT
  
  printf("Bitwise AND between %b and %b : %b\n", x, y, z);
  printf("Bitwise OR between %b and %b : %b\n", x, y, a);
  printf("Bitwise XOR between %b and %b : %b\n", x, y, b);
  printf("Bitwise NOT of %b : %b\n", x, not_x);
  return 0;
}
