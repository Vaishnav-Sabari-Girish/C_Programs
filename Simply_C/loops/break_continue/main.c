// Break statement is used to exit a loop
// Continue statement is used to skip an iteration and go to the next iteration of the loop

#include <stdio.h>

int main() {
  int i = 0;
  int j = 0;
  int x = 5;
  int y = 5;

  while (i < 10) {
    i++;
    printf("Loop %d : x = %d\n", i, x);
    if (i == 5) {
      printf("Broken at i = 5\n");
      break;
    }

    x += i;
  }

  printf("\n");

  while (j < 10) {
    j++;
    printf("Loop %d : y = %d\n", j, y);
    if (j == 5) {
      printf("Skipped j = 5 (Not evaluated)\n");
      continue;
    }

    y += j;
  }

  return 0;
}
