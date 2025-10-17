#include <stdio.h>
#include <string.h>

int main(void)
{
  // User inputs for different data types

  int integer_input;
  float float_input;
  char char_input;
  char string_input[100];

  printf("Integer Input : ");
  scanf("%d", &integer_input);

  printf("\n");

  printf("Floating Point Input : ");
  scanf("%f", &float_input);

  printf("\n");

  printf("Character Input : ");
  scanf(" %c", &char_input);   // Space before %c (imp)
  // We add the space before %c to make sure it doesn't accept the \n character from the previous scanf

  printf("\n");

  getchar();   // Removes leftover \n from previous scanf

  printf("String Input : ");
  fgets(string_input, sizeof(string_input), stdin);
  string_input[strcspn(string_input, "\n")] = '\0';    // Remove the newline
  

  printf("\n===== User Inputs =====\n");
  printf("Integer  : %d\n", integer_input);
  printf("Float    : %.6f\n", float_input);
  printf("Character: %c\n", char_input);
  printf("String   : %s\n", string_input);

  return 0;
}
