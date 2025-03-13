/*
    Question:
    Write a C program that continuously takes user input and writes it to "user-input.txt".
    The program should stop when the user enters "exit".
*/

#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to write user input to file\n");

    // Opening the file in write mode
    FILE *file = fopen("user-input.txt", "w");
    if (!file) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    char input[100];
    while (1) {
        printf("\nEnter your text to be written to file (type 'exit' to stop): ");
        fgets(input, sizeof(input), stdin);

        // Remove trailing newline (if present)
        input[strcspn(input, "\n")] = '\0';

        // Check for exit condition
        if (strcmp(input, "exit") == 0) break;

        // Writing to file
        fprintf(file, "%s\n", input);
    }

    printf("\nUser input successfully saved to 'user-input.txt'.\n");

    // Closing the file
    fclose(file);
    
    return 0;
}
