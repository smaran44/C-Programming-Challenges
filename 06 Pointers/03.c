/*
Question:
Write a C program to demonstrate how a pointer can be used 
to store and access a character value. The program should take 
a character input from the user using a pointer and display it.
*/

#include <stdio.h>

int main() {
    char character;    // Declare a character variable
    char *ptr = &character;  // Declare a pointer to store the address of character

    // Display message
    printf("Welcome to showcasing character pointers.\n");

    // Prompt user for input
    printf("Please enter a character: ");
    scanf(" %c", ptr); // Read character input directly into the pointer variable

    // Display the character using both the pointer and the variable
    printf("\nThe value of character using pointer: %c", *ptr);
    printf("\nThe value of character using variable: %c", character);

    return 0; // Indicate successful execution
}
