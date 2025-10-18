// Static variables have 3 attributes
/*
 * 1. They have permanent address and memory
 * 2. They exist for the entire life of the program
 * 3. Global variables are static
 */ 

char x = 1;      //Static by default
char i = 0;

#include <stdio.h>

void foo(char y) {
  char a = 2;
  static char v = 0;          // Exists until the life of the function
  v = a + y;
}

int main() {
  char j = 5;
  i = i + x;
  foo(i);
  printf("i = %d, j = %d\n", i, j);
  return 0;
}
