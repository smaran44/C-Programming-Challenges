// Program to reverse a number
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store the input number
    int num;

    // Display a welcome message
    printf("Welcome to Reversing the Number\n");

    // Ask the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &num); // Read user input and store it in 'num'

    // Declare a variable to store the reversed number
    int reverse = 0;

    // Create a copy of the number so the original value remains unchanged
    int copy = num;

    // Loop to reverse the digits of the number
    while (copy > 0) {
        // Extract the last digit of the number
        int lastDigit = copy % 10;

        // Append the last digit to the reversed number
        reverse = (reverse * 10) + lastDigit;

        // Remove the last digit from 'copy'
        copy /= 10;
    }

    // Print the reversed number
    printf("The reverse of %d is %d", num, reverse);

    return 0; // End of the program
}
