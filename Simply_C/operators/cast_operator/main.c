// The cast operator is used to typecast something
// Basically to change the datatype of a variable (Type-Casting)


#include <stdio.h>

int main() {
  int a = 10;
  int b = 4;
  float c;

  c = (float)a / b;     // Temporarily change a from int to float

  printf("Output of %d/%d : %.3f\n", a, b, c);
  return 0;
}
