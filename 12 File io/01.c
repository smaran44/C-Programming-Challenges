/*
    Question:
    Write a C program that prompts the user for a filename, attempts to open it in 
    read mode, and displays whether the file was opened successfully or not.
*/

#include <stdio.h>

int main() {
    char filename[100];

    // Display welcome message
    printf("Welcome to the File Opening Tool\n");

    // Prompt user for file name
    printf("Please enter the file name: ");
    scanf("%99s", filename); // Ensuring buffer safety

    // Attempting to open file in read mode
    FILE *file = fopen(filename, "r");

    // Checking if file opened successfully
    if (file != NULL) {
        printf("\n'%s' was opened successfully.\n", filename);
        fclose(file); // Closing file
    } else {
        printf("\nError: File '%s' was not found or could not be opened.\n", filename);
    }

    return 0;
}
