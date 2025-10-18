// There are 2 variable types 
// Global : Variables that are valid throughtout a program (Declared outside functions)
// Local : Variables that are valid within a specific function only

#include <stdio.h>

int a = 10, b = 25;   // Global Variables

int add(int, int); 

int main() {
  int global_out = add(a, b);
  printf("Global Variables : a = %d and b = %d and global_out = %d \n", a, b, global_out);
  printf("\n");

  int x = 10;
  int y = 90;
  int out = add(x, y);
  printf("Local variables : x = %d and y = %d and out = %d\n", x, y, out);
}

int add(int x, int y) {
  return x + y;   // x and y are local variables
}
