// Logical operators allow us to manipulate data via logic gates (AND, OR, NOT etc)
/*
 * The logical operators include
 * Logical AND (&&)
 * Logical OR (||)
 * Logical NOT (!)
*/ 

#include <stdio.h>

int main() {
  int x = 10;
  int y = 10;

  if (10 == x && 9 == y) {
    printf("Both are True\n");   // Won't enter this since one is false
  } else {
    printf("One is False\n");
  }

  if (10 == x || x != y) {
    printf("One is True\n");    // Enters here since one is true
  } else {
    printf("Both are false\n");
  }

  if (!x == !y && x == y) {
    printf("Both are True\n");
  } else {
    printf("Both are false\n");
  }
  return 0;
}
