/*
Question:
Write a C program to demonstrate how a pointer can modify 
the value of a variable. The program should use a pointer 
to change the value of an integer variable and display the results.
*/

#include <stdio.h>

int main() {
    int num = 5;    // Declare an integer variable and initialize it with 5
    int *ptr = &num; // Declare a pointer and store the address of num

    // Print the initial value of num
    printf("\nInitial value of num: %d", num);

    // Modify the value of num using the pointer
    *ptr = 87;

    // Print the updated value of num
    printf("\nUpdated value of num after modification using pointer: %d", num);

    return 0; // Indicate successful program execution
}
