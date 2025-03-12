/*
Question:
Write a C program to generate the Fibonacci sequence up to a given number of terms 
using recursion. The user will input the number of terms, and the program will 
display the Fibonacci series accordingly.
*/

#include<stdio.h>

// Function prototype declaration
int fibonacci(int pos);

int main() {
    int terms; // Variable to store the number of terms

    // Display a welcome message
    printf("Welcome to Fibonacci by Recursion\n");

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms needed: ");
    scanf("%d", &terms);

    // Generate and print the Fibonacci sequence
    printf("Fibonacci Series:");
    for (int i = 0; i < terms; i++) {
        printf(" %d", fibonacci(i));
    }

    return 0;
}

// Recursive function to compute the Fibonacci number at a given position
int fibonacci(int pos) {
    // Base case: The first two numbers in Fibonacci series are 0 and 1
    if (pos <= 1) {
        return pos;
    }
    // Recursive case: Sum of the two preceding numbers
    return fibonacci(pos - 1) + fibonacci(pos - 2);
}
