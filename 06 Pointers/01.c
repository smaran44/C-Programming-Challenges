/*
Question:
Write a C program to demonstrate the use of integer pointers. 
The program should take an integer input from the user using a pointer 
and then display the value using both the pointer and the variable itself.
*/

#include <stdio.h>

int main() {
    int num;  // Declare an integer variable
    int *ptr = &num; // Declare a pointer and store the address of num

    // Display a welcome message
    printf("Welcome to showcasing integer pointers.\n");

    // Prompt the user to enter a value
    printf("Please enter the value: ");
    scanf("%d", ptr); // Read input using the pointer

    // Display the value using both the pointer and the variable
    printf("\nThe value of num using pointer dereferencing: %d", *ptr);
    printf("\nThe value of num directly using the variable: %d", num);

    return 0; // Indicate successful program execution
}
