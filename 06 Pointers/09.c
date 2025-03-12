/*Working with Strings
Strings in C are character arrays, and pointers are used for efficient manipulation.*/

/*
   Question: Write a C program where a function takes a string as 
   input and prints it using pointers.
*/

#include <stdio.h>

// Function to print a string using a pointer
void print_string(char *str) {
    printf("The given string is: %s\n", str);
}

int main() {
    printf("Pointer Example: Working with Strings\n");

    char msg[] = "Hello, World!";
    
    print_string(msg); // Passing the string

    return 0;
}
