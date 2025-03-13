/*
    Question: 
    Write a C program that continuously takes user input and appends it to a file named "user-input.txt".
    The program should keep accepting input until the user types "exit". The input should be written to 
    the file line by line, and the program should handle file opening errors gracefully.
*/

#include <stdio.h>   // Standard input-output library
#include <string.h>  // Library for string operations

int main() {
    printf("Welcome to append user input to file\n");

    // Open file in append mode ("a" mode ensures data is added to the existing content)
    FILE *file = fopen("user-input.txt", "a");  
    if (!file) {  
        // If the file cannot be opened, display an error message and exit
        printf("Error: Could not open file for appending.\n");
        return 1;  // Return non-zero value to indicate an error
    }

    char input[100];  // Buffer to store user input

    while (1) {  // Infinite loop to keep taking input until "exit" is entered
        printf("\nEnter your text to be appended to file (type 'exit' to stop): ");
        fgets(input, sizeof(input), stdin);  // Read input from user (including spaces)

        // Remove the trailing newline character, if present
        input[strcspn(input, "\n")] = '\0';

        // Check if the user wants to exit
        if (strcmp(input, "exit") == 0) break;

        // Append the input to the file followed by a newline
        fprintf(file, "%s\n", input);
    }

    printf("\nYour input has been successfully appended to 'user-input.txt'.\n");

    // Close the file to ensure data is saved properly
    fclose(file);

    return 0;  // Return 0 to indicate successful execution
}
