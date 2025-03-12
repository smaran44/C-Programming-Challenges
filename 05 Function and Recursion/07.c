/*
Question:
Write a C program that takes five integers as input from the user, 
calculates their average using a function, and displays the result 
with two decimal places.
*/

#include<stdio.h>

// Function prototype declaration
float get_average(int, int, int, int, int);

int main() {
    int a, b, c, d, e; // Variables to store user input

    // Display a welcome message
    printf("Welcome to calculating averages\n");

    // Prompt the user to enter five numbers
    printf("Please, enter the first number: ");
    scanf("%d", &a);
    printf("Now, enter the next number: ");
    scanf("%d", &b);
    printf("Now, enter the next number: ");
    scanf("%d", &c);
    printf("Now, enter the next number: ");
    scanf("%d", &d);
    printf("Finally, enter the last number: ");
    scanf("%d", &e);

    // Call the get_average function and store the result
    float average = get_average(a, b, c, d, e);

    // Display the calculated average with two decimal places
    printf("The average is %.2f", average);

    return 0;
}

// Function definition to calculate the average of five numbers
float get_average(int a, int b, int c, int d, int e) {
    float sum = a + b + c + d + e; // Calculate the sum
    return sum / 5; // Return the average
}
