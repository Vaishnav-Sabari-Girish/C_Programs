#include <stdio.h>

// Literals vs constants
/*
 * A literal is a number, character or string that can be assigned to variables or constants.
 * Constants are the labels that represent a literal
*/ 

// Example
// There are 2 ways to define constants
// Using pre-processor #define
#define CONST 5

// Using cons keyword
const int i = 42;    // 42 is a literal and i is the constant
const char a = 'a';  // 'a' is a literal and a is the constant


int main(void)
{
  printf("Value of CONST : %d\n", CONST);
  printf("Value of i : %d\n", i);
  printf("Value of a : %c\n", a);
}
