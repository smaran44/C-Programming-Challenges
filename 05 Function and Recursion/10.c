/*
Question:
Write a C program to calculate the sum of the first 'n' natural numbers 
using recursion. The user will enter a number 'n', and the program will 
compute and display the sum of numbers from 1 to 'n'.
*/

#include <stdio.h>

// Function prototype declaration
int sumOfNaturalNumbers(int n);

int main() {
    int n; // Variable to store user input

    // Prompt the user to enter a number
    printf("Enter a number to calculate the sum of the first n natural numbers: ");
    scanf("%d", &n);

    // Check if the input is valid (n should be non-negative)
    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        // Call the recursive function and print the result
        int sum = sumOfNaturalNumbers(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}

// Recursive function to calculate the sum of the first n natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case: The sum of the first 0 numbers is 0
    if (n == 0) {
        return 0; // Stop the recursion and return 0
    }

    // Recursive case: Sum of n is n + sum of the first (n-1) numbers
    return sumOfNaturalNumbers(n - 1) + n;
}
