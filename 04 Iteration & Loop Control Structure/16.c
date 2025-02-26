// Program to check if a given number is prime
#include <stdio.h> // Include standard input-output library

int main() {
    // Declare a variable to store user input
    int num;

    // Display a welcome message
    printf("Welcome to Prime Checker\n");

    // Prompt the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &num); // Read the input and store it in 'num'

    // Loop to check divisibility from 2 to (num - 1)
    for (int i = 2; i < num; i++) { 
        // If 'num' is divisible by 'i', then 'num' is not prime
        if (num % i == 0) { 
            printf("%d is not prime", num); // Print that 'num' is not prime
            return 0; // Exit the program early since we found a factor
        }
    }

    // If the loop completes without finding a factor, the number is prime
    printf("%d is prime", num);

    return 0; // End of the program
}
