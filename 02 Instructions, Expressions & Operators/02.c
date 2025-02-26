 // How to convert an integer to a float in C?
#include<stdio.h>

int main() {
  int number;
  printf("Please enter a number: ");
  scanf("%d", &number);


  float floating = number;
  printf(" Original number is: %d\n", number);
  printf(" float converted is: %f\n", floating);
  printf(" float converted is: %f\n", (float) number);
  return 0;
}