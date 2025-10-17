// Switch statements are used when the expresion used to make the decision can have multiple outputs


#include <stdio.h>

int main() {
  int x = 10, y = 40;
  int z = x + y;

  switch (z) {
    case 20 : 
      printf("x + y = 20\n");
      break;
    case 30 : 
      printf("x + y = 30\n");
      break;
    case 40:
      printf("x + y = 40\n");
      break;
    case 50:
      printf("x + y = 50\n");
      break;
    default:
      printf("Invalid Value\n");
      break;
  }
  return 0;
}
