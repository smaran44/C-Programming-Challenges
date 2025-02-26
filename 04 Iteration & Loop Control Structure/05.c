// Program to calculate the Least Common Multiple (LCM) of two numbers
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare variables to store two numbers
    int first, second;

    // Display welcome message
    printf("Welcome to LCM Calculator\n");

    // Ask the user to enter the first number
    printf("Please enter the first number: ");
    scanf("%d", &first); // Read user input and store it in 'first'

    // Ask the user to enter the second number
    printf("Now, enter the second number: ");
    scanf("%d", &second); // Read user input and store it in 'second'

    // Find the starting point for LCM calculation
    // The LCM cannot be smaller than the larger of the two numbers
    int min = (first > second) ? first : second;

    // The maximum possible LCM is the product of both numbers (worst case scenario)
    int max = first * second;

    // Loop to find the LCM starting from the larger of the two numbers
    for (int i = min; i <= max; i++) {
        // Check if 'i' is divisible by both 'first' and 'second'
        if (i % first == 0 && i % second == 0) {
            // If yes, 'i' is the LCM, print the result
            printf("The LCM of %d and %d is %d", first, second, i);
            
            // Break out of the loop after finding the first common multiple
            break;
        }
    }

    return 0; // End of the program
}
