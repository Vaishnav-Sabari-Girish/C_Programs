#include <stdio.h>

typedef int *intPtr;     // Creating a custom type

int main(){

  int num1 = 69;
  int *p_num1 = &num1;           // Pointer pointing to the memory address of num1

  int num2 = 42; 
  intPtr p_num2 = &num2;        // Pointer pointing to the memory address of num2 
  

  printf("Given numbers : %d and %d\n", num1, num2);
  printf("Their addresses : %p and %p\n", (void *)&num1, (void *)&num2);
  printf("Pointers to the numbers : %p and %p\n", (void *)p_num1, (void *)p_num2);
  printf("The Pointers are pointing to values : %d and %d\n", *p_num1, *p_num2);      // Dereferencing a pointer
  
  printf("\n\n");
  // Modifying the values through the pointers
  *p_num1 = 99;
  *p_num2 = 56;
  printf("New numbers : %d and %d\n", num1, num2);
  printf("Their addresses : %p and %p\n", (void *)&num1, (void *)&num2);
  printf("Pointers to the numbers : %p and %p\n", (void *)p_num1, (void *)p_num2);
  printf("The Pointers are pointing to values : %d and %d\n", *p_num1, *p_num2);      // Dereferencing a pointer


  return 0;
}
