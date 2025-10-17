// Relational operator compares the LHS and RHS. 
// The most commonly used one is the Double Equals (==)

#include <stdio.h>

int main() {
  int x = 10;
  //int y = 10;

  /*if(x == y) {
    printf("x equals y\n");
  } else {
    printf("x not equals y\n");
  }*/ 

  // The trick is to preven someone from using = instead of ==
  if (10 == x) {
    printf("x equals 10\n");
  } else {
    printf("x not equals 10\n");
  }

  /*
   * This code
   * if (10 = x) {
   }
   * gives an error but if x = 10 is used instead, it'll keep on running the program, causing an infinite loop
   */ 
  return 0;
}
