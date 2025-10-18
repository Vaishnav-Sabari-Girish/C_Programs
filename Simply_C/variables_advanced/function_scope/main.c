// There are 2 function scopes
/*
 * Static/Local function (Defined for a single file)
 * Global/External function (Can be used in multiple files)
 */ 

// Default scope of a function is global and external
// These functions have prototypes in header files which then call the function in the file where it is defined

#include <stdio.h>

// Declare external functions
extern void greet(void);
extern int add(int a, int b);

int main(void) {
  greet();  // call function from functions.c

  int sum = add(10, 20);
  printf("Sum = %d\n", sum);

  return 0;
}
