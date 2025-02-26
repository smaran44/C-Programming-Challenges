// Program to print the multiplication table of a given number
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store the user input number
    int num;

    // Display a welcome message
    printf("Welcome to Printing Tables\n");

    // Prompt the user to enter a number for which they want the multiplication table
    printf("Please enter your number: ");
    scanf("%d", &num); // Read the user input and store it in 'num'

    // Loop to print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) { 
        // Print the current multiplication step
        printf("\n%d X %d = %d", num, i, num * i); 
    }

    return 0; // End of the program
}
