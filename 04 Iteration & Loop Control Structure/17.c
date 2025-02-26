// Program to add only positive numbers entered by the user until 0 is entered
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare variables
    int num;      // Stores the user-input number
    int sum = 0;  // Stores the sum of all positive numbers

    // Display a welcome message
    printf("Welcome to Adding Positive Numbers\n");

    // Use a do-while loop to repeatedly take input until the user enters 0
    do {
        // Prompt the user to enter a number
        printf("Please enter the number: ");
        scanf("%d", &num); // Read user input and store it in 'num'

        // If the number is negative, skip adding it to the sum
        if (num < 0) continue; // 'continue' skips the rest of the loop and starts the next iteration

        // Add only positive numbers to 'sum'
        sum += num;

    } while (num != 0); // Stop taking input when the user enters 0

    // Print the total sum of all positive numbers
    printf("The sum of all positive numbers is %d", sum);

    return 0; // End of the program
}
