/*
* Characters are a specified within single quotes ''
* Strings are specified within double quotes "" (Array of Characters)
*/ 

#include <stdio.h>
#include <string.h>

int main() {
  char ch = 'v';   // Character literal
  char str[10] = "Hi there";   // String Literal
  
  printf("Character Literal : %c\n", ch);
  puts(str);

  return 0;
}
