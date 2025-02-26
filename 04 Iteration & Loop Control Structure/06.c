// Program to calculate the Greatest Common Divisor (GCD) of two numbers
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare variables to store two numbers
    int first, second;

    // Display welcome message
    printf("Welcome to GCD Calculator\n");

    // Ask the user to enter the first number
    printf("Please enter the first number: ");
    scanf("%d", &first); // Read user input and store it in 'first'

    // Ask the user to enter the second number
    printf("Now, enter the second number: ");
    scanf("%d", &second); // Read user input and store it in 'second'

    // Find the larger of the two numbers
    // The GCD cannot be greater than the larger number
    int min = (first > second) ? first : second;

    // Loop to find the GCD, starting from 'min' and decreasing to 1
    for (int i = min; i >= 1; i--) {
        // Check if 'i' is a common divisor of both numbers
        if (first % i == 0 && second % i == 0) {
            // If yes, 'i' is the GCD, print the result
            printf("The GCD of %d and %d is %d", first, second, i);
            
            // Break out of the loop after finding the first (largest) common divisor
            break;
        }
    }

    return 0; // End of the program
}
