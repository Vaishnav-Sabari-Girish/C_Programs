#include <stdio.h>

int x = 5, y = 2;
float z = 9.0;
float ans;

int main() {
  ans = x / y;

  printf("Output : %.2f\n", ans);   // x and y are temporarily converted into float

  ans = z / x;
  printf("Output : %.2f\n", ans);   // x is temporarily converted into float

  return 0;
}
