// Program to check whether a given number is a palindrome
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store user input
    int num;

    // Display a welcome message
    printf("Welcome to Palindrome Checker\n");

    // Ask the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &num); // Read user input and store it in 'num'

    // Variable to store the reversed number
    int reverse = 0;

    // Create a copy of 'num' to preserve its original value
    int copy = num;

    // Loop to reverse the digits of 'num'
    while (copy > 0) {
        reverse = (reverse * 10) + (copy % 10); // Extract the last digit and add it to 'reverse'
        copy /= 10; // Remove the last digit from 'copy'
    }

    // Check if the reversed number is equal to the original number
    if (reverse == num) {
        printf("The number %d is a palindrome", num);
    } else {
        printf("The number %d is not a palindrome", num);
    }

    return 0; // End of the program
}
