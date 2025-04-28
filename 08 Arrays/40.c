// Write a C program to count the total number of non-zero elements in a two-dimension array of any order for any user input data elements.

#include <stdio.h>

int main() {
    int rows, cols, count = 0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] != 0) {
                count++;
            }
        }
    }

    printf("Total number of non-zero elements: %d\n", count);
    return 0;
}
