// The operators have a precedence
// I foollows the BODMAS Rule for arithmetic operators
// BODMAS - Brackets of Division -> Multiplication -> Addition -> Subtraction

#include <stdio.h>

char x = 0b00000101;    // x = 5
char y = 0b11111010;    // y = -6
char z = 0;

char a = 0b00000100;    // a = 4
char b = 0b11111101;    // b = -6
char c = 2;


int main() {
  printf("=== PRECEDENCE ===\n");
  z = x - y * z;       // Here * happens first and then -

  printf("Value of z = x - y * z (z = 0 initially) : %d\n", z);

  z = x + ++y;          // Here ++y happens first and then x is added to it

  printf("Value of z = x + ++y : %d\n", z);

  printf("\n=== ASSOCIATIVITY ===\n");
  c = a / b % c;       // L to R (a / b) % c

  printf("Value of c = a / b %% c : %d \n", c);   // The extra % is to make sure that it prints % and not a format specifier
  return 0;
}
