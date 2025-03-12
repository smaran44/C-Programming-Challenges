/*
Question:
Write a C program that takes two floating-point numbers as input 
and determines the maximum value using a function.
*/

#include<stdio.h>

// Function prototype declaration
float max(float, float);

int main() {
    float a, b; // Variables to store user input

    // Display a welcome message
    printf("Welcome to finding the max element\n");

    // Prompt the user to enter the first number
    printf("Please, enter the first number: ");
    scanf("%f", &a);

    // Prompt the user to enter the second number
    printf("Now, enter the second number: ");
    scanf("%f", &b);

    // Call the max function and display the larger number
    printf("The larger number is %.2f", max(a, b));

    return 0;
}

// Function definition to find the maximum of two numbers
float max(float first, float second) {
    return first > second ? first : second; // Return the larger number
}
