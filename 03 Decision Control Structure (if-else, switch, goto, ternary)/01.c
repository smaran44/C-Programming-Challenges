// checkout the number is positive, negative or zero
#include<stdio.h>

int main() {
  int number;
  printf("Please enter your number: ");
  scanf("%d", &number);

  if (number > 0) {
    printf("The number is positive.\n");
  } else if (number < 0) {
    printf("The number is negative.\n");
  } else {
    printf("The number is zero.\n");
  }
  return 0;
}