/*
Question: Write a C program to calculate the sum of the left diagonal,
the right diagonal, and the total diagonal sum of a square matrix.
If the matrix size is odd, ensure the center element is not counted twice.
*/

#include <stdio.h>

// Define the matrix size as a constant
const int SIZE = 3;

// Function prototype to calculate and print diagonal sums
void print_diagonal_sum(int arr[][SIZE]);

int main() {
    printf("Welcome to Sum of diagonals in a 2D array.\n");
    
    // Initializing a 3x3 matrix
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Function call to compute diagonal sums
    print_diagonal_sum(arr1);
    
    return 0;
}

// Function to compute and display diagonal sums
void print_diagonal_sum(int arr[][SIZE]) {
    int left_ds = 0; // Variable to store left diagonal sum
    int right_ds = 0; // Variable to store right diagonal sum
    
    // Loop through the matrix to calculate diagonal sums
    for (int i = 0; i < SIZE; i++) {
        left_ds += arr[i][i]; // Summing left diagonal elements
        right_ds += arr[i][SIZE - 1 - i]; // Summing right diagonal elements
    }
    
    // Displaying the results
    printf("\nThe sum of left diagonal is %d", left_ds);
    printf("\nThe sum of right diagonal is %d", right_ds);
    
    // Calculating total diagonal sum
    int total_ds = left_ds + right_ds;
    
    // If the matrix size is odd, subtract the center element once
    if (SIZE % 2 == 1) {
        int index = SIZE / 2;
        total_ds -= arr[index][index];
    }
    
    // Displaying the total diagonal sum
    printf("\nThe sum of total diagonal is %d", total_ds);
}
