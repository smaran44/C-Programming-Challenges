//  Write a C program to print asterisks in a pyramid structure.

#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Printing spaces for alignment
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing asterisks
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
