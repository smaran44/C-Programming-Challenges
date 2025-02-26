//product of two floating numbers
#include<stdio.h>

int main() {
  float first, second;
  printf("Please enter the first number: ");
  scanf("%f", &first);
  printf("Now, enter the second number: ");
  scanf("%f", &second);

  float result = first * second;
  printf(" Product is: %f\n", result);
  printf(" Product is: %.2f\n", result);
  return 0;
}