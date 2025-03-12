/*
    Question: Write a C program to print a string using a character pointer.
*/

#include <stdio.h>

int main() {
    char *str = "Hello, Pointer!"; // String stored as a character pointer

    // Loop through each character until we reach the null terminator '\0'
    while (*str) {
        printf("%c", *str); // Print the character
        str++; // Move the pointer to the next character
    }

    return 0;
}
