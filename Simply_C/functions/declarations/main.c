// Functions can be declared in 2 ways
// 1. Before main()
// 2. Using function prototypes


#include <stdio.h>

// Declaration of full function before main (Becomes messy in big codebases)

int sum(int a, int b) {
  return a + b;
}

// Function prototypes

char func_prototype(char ch);

int main() {
  printf("Function defined before main()\n");
  int out = sum(45, 678);
  printf("Output of sum() : %d\n", out);

  printf("\n");

  printf("Function prototype defined after main()\n");
  char character = func_prototype('b');
  printf("Output of function prototype : %c\n", character);
  return 0;
}

// Defining the function prototype after main() 

char func_prototype(char ch) {
  return ch;
}
