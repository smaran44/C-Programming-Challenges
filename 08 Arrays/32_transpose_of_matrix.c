/*
Program to Find the Transpose of a Matrix in C

Problem Statement:
Given a matrix of size M × N, the transpose of the matrix is obtained 
by swapping its rows and columns.

Example:
Input Matrix:
    1  2  3
    4  5  6
    7  8  9

Transposed Matrix:
    1  4  7
    2  5  8
    3  6  9

Constraints:
- The matrix can have different numbers of rows (M) and columns (N).
- The input size (M × N) should be specified by the user.
*/

#include <stdio.h>  // Standard I/O library

// Function to read a matrix from the user
void readMatrix(int matrix[][100], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {    
        for (int j = 0; j < cols; j++) {  
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);  
        }
    }
}

// Function to display a matrix
void printMatrix(int matrix[][100], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {    
        for (int j = 0; j < cols; j++) {  
            printf("%d ", matrix[i][j]);  
        }
        printf("\n");  
    }
}

// Function to print the transpose of a matrix directly
void printTranspose(int matrix[][100], int rows, int cols) {
    printf("Transposed Matrix (%d x %d):\n", cols, rows);
    for (int j = 0; j < cols; j++) {    // Iterate over columns of original matrix
        for (int i = 0; i < rows; i++) {  // Iterate over rows of original matrix
            printf("%d ", matrix[i][j]);  // Swap row and column indices
        }
        printf("\n");  // Move to the next line after printing a row
    }
}

int main() {
    int matrix[100][100];  
    int rows, cols;  

    // Input: Get matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Read the matrix from the user
    readMatrix(matrix, rows, cols);

    // Display the original matrix
    printf("\nOriginal ");
    printMatrix(matrix, rows, cols);

    // Display the transposed matrix
    printf("\n");
    printTranspose(matrix, rows, cols);

    return 0;  
}
