// Pointers have 2 operators
/*
 * & - Address of
 * * - Contents pointing to, deferencing
 */ 

#include <stdio.h>

int main() {
  int *p;            // * is also declratation operator
  int num = 45;

  p = &num;          // p stores address of num

  int y = *p;        // Stores the number p points to, it is the same as y = num

  printf("Number (Original) : %d\n", num);
  printf("Address of number : %p\n", (void *)&num);
  printf("Pointer contents : %p\n", (void *)p);
  printf("Pointer points to : %d\n", *p);

  printf("Number (Value being pointed to) : %d\n", y);
  return 0;
}
