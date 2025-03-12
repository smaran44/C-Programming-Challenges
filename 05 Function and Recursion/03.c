/*
Question:
Write a C program that takes an integer input from the user 
and calculates its square using a function.
*/

#include<stdio.h>

// Function prototype declaration
int square(int);

int main() {
    int num; // Variable to store user input

    // Display a welcome message
    printf("Welcome to the world of squares\n");

    // Prompt the user to enter a number
    printf("Please enter your number: ");
    scanf("%d", &num); // Read input from the user

    // Display the square of the entered number
    printf("The square of %d is %d", num, square(num));

    return 0;
}

// Function definition to calculate the square of a number
int square(int num) {
    return num * num; // Return the square of the number
}
