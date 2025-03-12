/*
Question:
Write a C program to demonstrate call by value. The program should 
pass an integer to a function that increments its value. Observe 
whether the original value in the main function changes.
*/

#include<stdio.h>

// Function prototype declaration
void increment(int);

int main() {
    int num; // Variable to store user input

    // Display a welcome message
    printf("Welcome to showing call by value");

    // Prompt the user to enter a number
    printf("\nPlease enter the number: ");
    scanf("%d", &num);

    // Display the value of num before function call
    printf("\nBefore: Value of num is %d", num);

    // Call the increment function (Call by Value)
    increment(num);

    // Display the value of num after function call
    printf("\nAfter: Value of num is %d", num);

    return 0;
}

// Function definition to demonstrate call by value
void increment(int a) {
    // Display value before incrementing
    printf("\nIn function Before: Value of a is %d", a);

    // Increment the value of a (only inside the function)
    a++;

    // Display value after incrementing
    printf("\nIn function After: Value of a is %d", a);
}

