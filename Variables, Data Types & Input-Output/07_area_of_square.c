//create a program to calculate area of square

#include<stdio.h>

int main() {
  int side;
  printf("Please enter the side of square in cms: ");
  scanf("%d", &side);
  printf("The area of your sqaure is %d cm*cm", side * side);
}