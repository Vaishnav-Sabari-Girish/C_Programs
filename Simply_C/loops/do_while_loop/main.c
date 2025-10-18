// Do-While loops are similar to while loops
// The only difference is that the loop first executes the statement and then looks into the logic

#include <stdio.h>

int main() {
  int i = 0;
  do {
    printf("%d\n", i);
    i++;
  } while (i == 0);    // Executes the do section first then checks the while section
  return 0;
}
