/*
Question: Write a C program that continuously asks the user for a command.
If the user enters "exit", the program should terminate and display "Exited successfully".
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Defining the exit command as a constant string
    const char EXIT[] = "exit";

    // Declaring an array to store user input
    char command[20];

    // Displaying a welcome message
    printf("Welcome to our system\n\n");

    // Infinite loop to continuously take commands
    while (1) {
        printf("Please enter your command: ");
        scanf("%s", command); // Takes input as a single word (no spaces)

        // If user inputs "exit", break the loop
        if (!strcmp(command, EXIT)) {
            break;
        }
    }

    // Display exit message
    printf("\n\nExited successfully\n");

    return 0;
}
