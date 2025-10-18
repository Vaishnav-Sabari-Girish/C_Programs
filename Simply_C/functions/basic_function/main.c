// Functions are reusable blocks of code that perform a certain operation. 
// They can be called multiple times

#include <stdio.h>

void func1() {
  printf("This is function 1\n");
}

void func2() {
  printf("This is function 2 which also calls function 1\n");
  func1();
}

int main() {
  printf("Calling function 1\n");
  func1();

  printf("\n");

  printf("Calling function 2\n");
  func2();
  return 0;
}
