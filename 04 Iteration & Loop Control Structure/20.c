// Program to calculate and print the square of a number until the user enters -1
#include <stdio.h> // Include standard input-output library

int main() {
    int num; // Declare a variable to store user input

    // Display a welcome message
    printf("Welcome to the world of Squares\n");

    // Infinite loop to continuously ask for input
    while (1) { // The condition "1" makes it run indefinitely until "break" is encountered
        // Prompt the user to enter a number
        printf("\nPlease enter the number: ");
        scanf("%d", &num); // Read user input

        // Check if the user wants to exit (when -1 is entered)
        if (num == -1) break;

        // Print the square of the entered number
        printf("The square of %d is %d", num, num * num);
    }

    // Print exit message after the loop ends
    printf("\nBye Bye");

    return 0; // End of the program
}
