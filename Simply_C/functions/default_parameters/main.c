// Functions can have default parameters too.
// When we give the values to those parameters the function is executed with those parameters

#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int a = 10, b = 65;
  int out = sum(a, b);

  printf("Sum of %d and %d is %d\n", a, b, out);
  return 0;
}
