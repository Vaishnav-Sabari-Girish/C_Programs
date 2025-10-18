// extern keyword is used to declare a variable defined in another file

#include <stdio.h>

extern int counter;       // No memory allocated
void increment(void);

int main(void) {
  printf("Initial counter = %d\n", counter);
  increment();
  printf("After increment = %d\n", counter);
  return 0;
}
