// alternate program of 18.c
// Program to print all even numbers up to a user-defined maximum
#include <stdio.h> // Include the standard input-output library

int main() {
    int max; // Declare a variable to store the user-defined maximum number

    // Display a welcome message
    printf("Welcome to printing even numbers\n");

    // Ask the user to enter the maximum number up to which even numbers should be printed
    printf("Please enter the max number: ");
    scanf("%d", &max); // Read user input and store it in the variable "max"

    // Loop through numbers starting from 2, incrementing by 2 each time
    for (int i = 2; i <= max; i += 2) {
        // Print the current even number
        printf("%d ", i);
    }

    return 0; // Indicate successful program execution
}
