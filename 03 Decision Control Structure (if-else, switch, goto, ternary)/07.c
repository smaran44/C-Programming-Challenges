// Write a program to find the minimum of two numbers using ternary operator.
#include<stdio.h>

int main() {
  int first, second;
  printf("Please enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second number: ");
  scanf("%d", &second);

  int min = first < second ? first : second;
  printf("Minimum of the two is: %d", min);
  return 0;
}
/*
The ternary operator in C is a conditional operator that provides a shorthand way of writing simple if-else statements.
 It is represented by the symbols ? : and is also known as the conditional operator.

 syntax
 condition ? expression1 : expression2;

 in terms of if else
 if (condition) {
    expression1;
 } else {
    expression2;
 }

 If condition is true (non-zero), then expression1 is executed.
If condition is false (zero), then expression2 is executed.
*/