//create a program to input name of the person and respond with "Welcome Name to coding"
#include <stdio.h>

int main() {
  char name[20];
  printf("Please enter your name: ");
  scanf(" %19s", name);
  printf("Welcome %s to Coding.", name);
}