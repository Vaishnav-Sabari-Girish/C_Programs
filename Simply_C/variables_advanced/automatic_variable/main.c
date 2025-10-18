// Any variable declared inside functions or defined as a parameter to a function are automatic by default
// Is destroyed after function exit

#include <stdio.h>

char x = 1;
char i = 0;
void foo(char y) {          // y is automatic
  char a = 2;               // a is automatic
  static char v = 2;
  v = a + y;
}

int main() {
  char j = 5;               // j is automatic
  i = i + x;
  foo(i);
  printf("i = %d and j = %d\n", i, j);
  return 0;
}
