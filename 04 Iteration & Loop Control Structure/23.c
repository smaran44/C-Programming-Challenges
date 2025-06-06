/*Write a program to print the following pattern:
1
12
123
1234
12345*/

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for number of rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for printing numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
