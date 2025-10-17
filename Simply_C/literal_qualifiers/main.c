// Just like variables, literals can be qualified as signed, unsigned, float, long etc

#include <stdio.h>

#define UNSIGNED_QUALIFIER 25u
#define LONG_QUALIFIER 2500L  // You can use 'l' also
#define FLOAT_QUALIFIER 25.65f
#define COMBINED_QUALIFIER 0xE5ul  // u must come before l/L

int main() {
  printf("Unsigned qualifier : %d\n", UNSIGNED_QUALIFIER);
  printf("Long qualifier : %ld\n", LONG_QUALIFIER);
  printf("Float qualifier : %.10f\n", FLOAT_QUALIFIER);
  printf("Combined qualifier : %lx\n", COMBINED_QUALIFIER);

  return 0;
}
