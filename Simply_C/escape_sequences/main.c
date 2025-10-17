// Escape sequences are special characters that perform a certain function
// They are prefixed with a backslash '\'

#include <stdio.h>

int main() {
  printf("New Line (\\n)\n");                    // Adds a new line
  printf("Backspace (Tes\bted) (\\b) \n");       // Removes the previous character
  printf("Horizontal \t Tab (\\t)\n");           // Adds 4 spaces
  printf("Vertical \v Tab (\\v) \n");            // Adds a new line and a tab space
  printf("Form \f Feed (\\f)\n");                // Prints the text after \f into new line while keeping the same space
  printf("Carriage \r Return (\\r)\n");          // Moves cursor (and the characters after \r) to beginning of the line
  printf("NULL (\\0) \n");                       // Denotes end of a string
  return 0;
}
