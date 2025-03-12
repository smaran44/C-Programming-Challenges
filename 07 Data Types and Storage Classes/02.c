/*
   Question: Write a C program to calculate the factorial of a given number using recursion.
   The user inputs a number, and the program outputs its factorial.
*/

#include <stdio.h>

// Function prototype for calculating factorial
long factorial(int);

int main() {
    int num;
    
    // Display welcome message
    printf("Welcome to Factorial World!\n");
    
    // Prompt user for input
    printf("Please enter the number: ");
    scanf("%d", &num); // Read user input
    
    // Call factorial function and store the result
    long result = factorial(num);
    
    // Print the factorial result
    printf("The factorial of %d is %ld", num, result);
    
    return 0; // Indicate successful program execution
}

// Recursive function to calculate factorial
long factorial(int num) {
    // Base case: factorial of 0 or 1 is 1
    if (num <= 1) {
        return 1;
    }
    // Recursive case: num * factorial of (num - 1)
    return num * factorial(num - 1);
}
