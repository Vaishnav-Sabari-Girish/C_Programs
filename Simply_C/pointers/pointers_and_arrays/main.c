#include <stdio.h>

// Array elements occupy consecutive memory locations

int main() {
  int x[5] = {11, 22, 33, 44, 55};
  int *p = x;                     // Pointer to first element of array (Default). No & here
  int *end = x + +5;              // Pointer to last element of array

  printf("The value the pointer points to : %d\n", *p);

  // Looping over the array using pointers
  while (p < end) {
    printf("%d\n", *p);
    p++;                          // Move to the next element
  }

  return 0;
}
