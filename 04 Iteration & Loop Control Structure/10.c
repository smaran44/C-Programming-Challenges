// Program to check whether a given number is an Armstrong number
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store user input
    int num;

    // Display a welcome message
    printf("Welcome to Armstrong Number Checker\n");

    // Ask the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &num); // Read user input and store it in 'num'

    // Variable to store the sum of the cubes of the digits
    int sum = 0;

    // Create a copy of 'num' so that the original value remains unchanged
    int copy = num;

    // Loop to extract digits and calculate the sum of their cubes
    while (copy > 0) {
        int digit = copy % 10; // Extract the last digit
        sum += digit * digit * digit; // Add the cube of the digit to 'sum'
        copy /= 10; // Remove the last digit from 'copy'
    }

    // Check if the sum of cubes of digits is equal to the original number
    if (sum == num) {
        printf("The number %d is an Armstrong number.", num);
    } else {
        printf("The number %d is not an Armstrong number.", num);
    }

    return 0; // End of the program
}
/*An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example:
For 3-digit numbers
153 → =1+125+27=153 ✅ (Armstrong number)
370 → =27+343+0=370 ✅
947 → =729+64+343=1136 ❌ (Not an Armstrong number)
For 4-digit numbers
9474 → =6561+256+2401+256=9474 ✅*/