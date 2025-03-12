/*
Question:
Write a C program to calculate the factorial of a given number using recursion. 
The user will enter a positive integer 'n', and the program will compute and 
display its factorial using a recursive function.
*/

#include <stdio.h>

// Function prototype declaration
int factorial(int n);

int main() {
    int n; // Variable to store the input number

    // Prompt the user to enter a positive integer
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n); // Read the input from the user

    // Check if the input is valid (non-negative)
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d is: %d\n", n, factorial(n));
    }

    return 0; // Indicate successful program termination
}

// Recursive function to calculate the factorial of a number
// Factorial of n (n!) is defined as:
// n! = n * (n-1) * (n-2) * ... * 1 for n > 0
// 0! = 1 (base case)
int factorial(int n) {
    // Base case: If n is 0, return 1
    if (n == 0) {
        return 1; // Stop recursion
    }

    // Recursive case: Calculate factorial of (n-1) and multiply by n
    return factorial(n - 1) * n;
}
