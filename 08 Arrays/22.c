/*
Question: Write a C program to calculate the sum and average of all elements in a 2D array.
The program should take a 2D array as input, compute the sum of its elements,
and determine the average value.
*/

#include <stdio.h>

// Function prototype to calculate the sum of all elements in a 2D array
int sum(int arr[][3], int rows, int cols);

int main() {
    printf("Welcome to Sum and Average in a 2D array.\n");
    
    // Initializing a 3x3 matrix
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    
    // Calculating the sum of all elements in the array
    int addition = sum(arr, 3, 3);
    
    // Calculating the average
    float avg = addition / 9.0;
    
    // Displaying the sum and average
    printf("\nSum is %d and Average is %.2f", addition, avg);
    
    return 0;
}

// Function to compute the sum of all elements in a 2D array
int sum(int arr[][3], int rows, int cols) {
    int sum = 0; // Variable to store the total sum
    
    // Loop through each element in the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j]; // Add the element to the sum
        }
    }
    
    return sum; // Return the total sum
}
