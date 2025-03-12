/*
Question:
Write a C program that defines a function to add four numbers 
and returns the sum. The function should be called multiple 
times with different sets of values.
*/

#include<stdio.h>

// Function prototype declaration
int add(int, int, int, int);

int main() {
    // Display a welcome message
    printf("Welcome to adding 4 numbers\n");

    // Calling the add function with different sets of values
    printf("\n%d", add(1, 2, 3, 4));      // Output: 10
    printf("\n%d", add(11, 22, 33, 44));  // Output: 110
    printf("\n%d", add(4, 87, 2, 9));     // Output: 102

    return 0;
}

// Function definition to add four numbers
int add(int a, int b, int c, int d) {
    int sum = a + b + c + d;  // Calculate the sum
    return sum;               // Return the sum
}
