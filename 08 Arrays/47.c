//Write a C program that reads/input any square matrix and replace value zero on the diagonals, 1 on the upper triangle, and -1 on lower triangle of the matrix as an output.

#include <stdio.h>

int main() {
    int matrix[10][10], n, i, j;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                matrix[i][j] = 0;  // Diagonal elements set to 0
            }
            else if(i < j) {
                matrix[i][j] = 1;  // Upper triangle elements set to 1
            }
            else {
                matrix[i][j] = -1;  // Lower triangle elements set to -1
            }
        }
    }

    printf("Modified matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
