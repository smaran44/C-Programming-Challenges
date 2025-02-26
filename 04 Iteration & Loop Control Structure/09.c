// Program to print the Fibonacci series up to a given number
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store user input
    int num;

    // Display a welcome message
    printf("Welcome to Printing Fibonacci Series\n");

    // Ask the user to enter the upper limit for the Fibonacci series
    printf("Please enter the number up to which series should be printed: ");
    scanf("%d", &num); // Read user input and store it in 'num'

    // The Fibonacci series always starts with 0, so print it first
    printf(" 0");

    // If the user entered a positive number, print the second Fibonacci number (1)
    if (num > 0) {
        printf(" 1");
    }

    // Declare variables to store previous and next Fibonacci numbers
    int prev = 0;  // First Fibonacci number
    int next = 1;  // Second Fibonacci number

    // Generate and print Fibonacci numbers until the next number exceeds 'num'
    while (prev + next <= num) {
        int temp = prev + next; // Calculate the next Fibonacci number

        printf(" %d", temp); // Print the next Fibonacci number

        // Update the values of 'prev' and 'next' for the next iteration
        prev = next;
        next = temp;
    }

    return 0; // End of the program
}
/*The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, starting from 0 and 1.
 The sequence looks like this:
0,1,1,2,3,5,8,13,21,34,55,89,…*/