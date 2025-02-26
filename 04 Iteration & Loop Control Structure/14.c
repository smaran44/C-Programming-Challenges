// Program to continuously add numbers until the user enters 0
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store user input
    int num;
    
    // Declare and initialize a variable to store the sum of entered numbers
    int sum = 0;

    // Display a welcome message
    printf("Welcome to Number Adder\n");

    // Use a do-while loop to repeatedly ask for input and add numbers until 0 is entered
    do {
        printf("Please enter your number: ");
        scanf("%d", &num); // Read user input and store it in 'num'

        sum += num; // Add the entered number to 'sum'

    } while (num != 0); // Repeat the loop as long as 'num' is not 0

    // Once 0 is entered, print the final sum of all entered numbers
    printf("The sum of all your numbers is: %d", sum);

    return 0; // End of the program
}
