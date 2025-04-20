/*
    Question:
    Write a C program to perform multiplication of two matrices.
    - Take input for dimensions and elements of both matrices from the user.
    - Check if multiplication is possible (columns of first matrix must equal rows of second matrix).
    - Multiply the matrices and display the resultant matrix.
*/

#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Get dimensions of the first matrix
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &m1, &n1);

    // Get dimensions of the second matrix
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &m2, &n2);

    // Check if multiplication is valid
    if (n1 != m2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }

    int matrix1[m1][n1], matrix2[m2][n2], result[m1][n2];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
