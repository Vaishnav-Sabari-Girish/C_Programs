#include <stdio.h>


int main() {
  int i = 0;
  int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int len = sizeof(a) / sizeof(a[0]);

  printf("Original Array : \n\n");

  for (int j = 0; j < len; j++) {
    printf("%d ", a[j]);
  }

  printf("\n\n");

  while (i < len) {
    a[i] *= 10;
    i++;
  }

  printf("Modified array : \n\n");

  for (int k = 0; k < len; k++) {
    printf("%d ", a[k]);
  }

  printf("\n");
  return 0;
}
