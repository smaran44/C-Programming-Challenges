// This program calculates the grade based on the marks entered by the user using the ternary operator.
#include<stdio.h>

int main() {
  int marks;
  printf("Welcome to Grade calculator\n");
  printf("Please enter your marks: ");
  scanf("%d", &marks);

  printf("\nYour marks are in this category: ");;
  marks > 80 ? printf("High") 
             : (marks >= 50 ? printf("Moderate")
                            : printf("Low"));
  return 0;
}