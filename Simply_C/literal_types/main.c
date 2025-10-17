// There are 4 types of literals
/*
 * Integers (0, 0xBEEF, 0b1001, -1023)
 * Floating Points (3.14159, 2.56e-5)
 * Characters ('a', '@, '\n', ' ')
 * Strings ("Name", "Hi !\n")
*/ 

#include <stdio.h>

int main(void)
{
  int integer_literal_1 = 25689;
  int integer_literal_2 = -2435;

  float floating_point_literal_1 = 2.568;
  float floating_point_literal_2 = 5.67e-8;

  char character_literal_1 = 'c';
  char character_literal_2 = '#';

  char string_literal_1[] = "Hello, World!";
  char string_literal_2[] = "!@#$%^12367";

  printf("Integer Literals : %d and %d\n", integer_literal_1, integer_literal_2);

  // Here %e prints the given scientific notation with the exponential constant 'e'
  printf("\nFloating point Literals : %e and %e\n", floating_point_literal_1, floating_point_literal_2);

  printf("\nCharacter Literals : %c and %c\n", character_literal_1, character_literal_2);
  printf("\nString Literals : %s and %s\n", string_literal_1, string_literal_2);
  
}
