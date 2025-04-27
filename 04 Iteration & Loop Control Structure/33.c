/*Write a C program to generate the following pattern as an output:
   1 
  2 2 
 3 3 3 
4 4 4 4
*/

#include <stdio.h>

int main() {
    int i, j, n;

    // Set the number of rows
    n = 4;

    // Outer loop for each row
    for(i = 1; i <= n; i++) {
        // Inner loop for spaces
        for(j = 1; j <= n - i; j++) {
            printf(" "); // Print spaces to align the numbers properly
        }

        // Inner loop to print the numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", i); // Print the current row number
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
