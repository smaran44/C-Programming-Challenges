/*
   Question: Write a C program to calculate the sum and average of 10 numbers 
   entered by the user. Use a function to compute the sum of the array elements.
*/

#include <stdio.h>

// Function prototype: Computes the sum of array elements
int sum(int arr[], int size);

int main() {
    int arr[10]; // Array to store 10 user-input numbers

    printf("Welcome to Sum and Average of Array\n");

    // Taking input from the user
    for (int i = 0; i < 10; i++) {
        printf("Please enter %dth element: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    // Calling the sum function to get the total sum of array elements
    int addition = sum(arr, 10);
    
    // Calculating the average by dividing the sum by 10.0 to ensure floating-point division
    float avg = addition / 10.0;

    // Displaying the sum and average
    printf("The sum of the numbers is %d and their average is %.2f", addition, avg);

    return 0;
}

// Function to calculate the sum of array elements
int sum(int arr[], int size) {
    int addition = 0;

    // Loop through the array and accumulate the sum
    for (int i = 0; i < size; i++) {
        addition += arr[i];
    }

    return addition; // Return the calculated sum
}
