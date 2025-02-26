// Program to check if a number is prime
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store the number
    int num;

    // Display a welcome message
    printf("Welcome to Prime Checker\n");

    // Ask the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &num); // Read user input and store it in 'num'

    // Special case: Numbers less than 2 are not prime
    if (num < 2) {
        printf("%d is not prime", num);
        return 0; // Exit the program early
    }

    // Declare and initialize a variable for iteration
    int i = 2;

    // Loop from 2 to num - 1 to check for factors
    while (i < num) {
        // If num is divisible by any number in this range, it is not prime
        if (num % i == 0) {
            printf("%d is not prime", num); // Print the result
            return 0; // Exit the program early
        }
        i++; // Increment 'i' to check the next number
    }

    // If no factors were found, the number is prime
    printf("%d is prime", num);

    return 0; // End of the program
}
