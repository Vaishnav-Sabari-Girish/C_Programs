// Multi-dimensional arrays are basically a collection of arrays inside an array

#include <stdio.h>

int main() {
  int ma[3][2] = {
    {1, 2}, 
    {3, 4}, 
    {5, 6}
  };  

  int rows = sizeof(ma) / sizeof(ma[0]);   // Get number of rows
  int cols = sizeof(ma[0]) / sizeof(ma[0][0]);  // Size of 1 row  + size of one element in that row
  // Printing the Multi-dimensional array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", ma[i][j]);
    }
    printf("\n");
  }
  return 0;
}
