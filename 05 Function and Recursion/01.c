/*
Question: 
Write a C program that defines a function to print "Hello, World!" 
and calls this function twice from the main function.
*/

#include<stdio.h>

// Function prototype declaration
void greet();

int main() {
    // Calling the greet function twice
    greet();
    greet();
    return 0;
}

// Function definition
void greet() {
    // Prints "Hello, World!" to the console
    printf("Hello, World!");
}
