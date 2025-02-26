// Program to print all even numbers up to a user-defined maximum
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store the maximum number
    int max;

    // Display a welcome message
    printf("Welcome to printing even numbers\n");

    // Prompt the user to enter the maximum number
    printf("Please enter the max number: ");
    scanf("%d", &max); // Read user input and store it in 'max'

    // Loop from 1 to 'max'
    for (int i = 1; i <= max; i++) {
        // If 'i' is odd (i.e., not even), skip the rest of the loop and move to the next number
        if (i % 2 == 1) continue;

        // Print the even number
        printf("%d ", i);
    }

    return 0; // End of the program
}
