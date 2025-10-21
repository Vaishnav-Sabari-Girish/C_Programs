// Arrays are a collection of values of the same data type

#include <stdio.h>

int main() {
  // Integer Array
  int a[5] = {1, 2, 3, 4, 5};

  // Character Array
  char b[3] = {'a', 'b', 'c'};

  // To supress warnings
  (void)a;
  (void)b;

  // Array with no length defined (Automatically checks length)
  int c[] = {23, 45, 67, 89, 100};

  // Find the number of elements in array c
  int len = sizeof(c) / sizeof(c[0]);  
  // sizeof gives the length of array in bytes, 
  // so we divide it with  the number of bytes of the first element to get array length

  // Printing the array
  for (int i = 0; i < len; i++) {
    printf("%d\n", c[i]);
  }

  return 0;
}
