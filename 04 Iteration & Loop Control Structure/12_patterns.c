//printing patterns
// To print the following patterns:
// 1. Right Half Pyramid
// 2. Reverse Right Half Pyramid
// 3. Left Half Pyramid

#include<stdio.h>

int main() {
    int rows; // Variable to store the number of rows for the patterns
    
    // Welcome message and user input prompt
    printf("Welcome to printing patterns\n");
    printf("Please enter the no of rows: ");
    scanf("%d", &rows); // Taking user input for the number of rows

    // Printing the Right Half Pyramid
    printf("Here is the right half pyramid\n");
    for (int i = 1; i <= rows; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing '*' in each row
            printf("* ");
        }
        printf("\n");
    }

    // Printing the Reverse Right Half Pyramid
    printf("\nHere is the Reverse right half pyramid\n");
    for (int i = 1; i <= rows; i++) { // Loop for each row
        for (int j = 1; j <= rows + 1 - i; j++) { // Printing '*' in decreasing order
            printf("* ");
        }
        printf("\n");
    }

    // Printing the Left Half Pyramid
    printf("\nHere is the left half pyramid\n");
    for (int i = 1; i <= rows; i++) { // Loop for each row
        for (int k = 1; k <= rows - i; k++) { // Loop to print spaces before '*'
            printf("  ");
        }
        for (int j = 1; j <= i; j++) { // Loop to print '*'
            printf("* ");
        }
        printf("\n");
    }
    
    return 0; // Indicating successful program termination
}
