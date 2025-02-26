// Program to ensure the user enters a positive number (Ziddi Number Checker)
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store user input
    int num;

    // Display a welcome message
    printf("Welcome to Ziddi Number Checker.\n");

    // Use a do-while loop to repeatedly ask for input until a positive number is entered
    do {
        printf("Please enter a positive number: ");
        scanf("%d", &num); // Read user input and store it in 'num'
    } while (num <= 0); // Repeat the loop if 'num' is less than or equal to zero

    // If the loop exits, it means the user has entered a valid positive number
    printf("You have successfully entered a positive number.");

    return 0; // End of the program
}
