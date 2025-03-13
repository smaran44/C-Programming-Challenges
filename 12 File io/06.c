/*
    Question:
    Write a C program that opens a file named "data.txt" in read/write mode.
    If the file does not exist, it should create a new one.
    The program should:
    1. Read and display the first line of the file (if available).
    2. Append a new message at the end of the file.
    3. Ensure proper error handling if the file cannot be opened or created.
*/

#include <stdio.h>  // Standard input-output library

int main() {
    printf("Welcome to the bizarre world of reading and writing\n");

    // Try opening the file in "r+" mode (read & write). If it does not exist, create it using "w+" mode.
    FILE *file = fopen("data.txt", "r+");
    if (!file) {  // Check if file opening failed
        printf("File not found. Creating a new one...\n");
        file = fopen("data.txt", "w+");  // Create a new file
        if (!file) {  // Check if file creation failed
            printf("Error: Could not create file.\n");
            return 1;  // Return non-zero value to indicate an error
        }
    }

    // Buffer to store file content
    char buffer[100];

    // Read the first line from the file and print it
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Reading from file I found: %s", buffer);
    } else {
        printf("File is empty, nothing to read.\n");
    }

    // Move the file pointer to the end before writing new content
    fseek(file, 0, SEEK_END);

    // Append a new message to the file
    fputs("\nThis message was written by the program", file);
    printf("New message successfully written to file.\n");

    // Close the file to save changes
    fclose(file);

    return 0;  // Return 0 to indicate successful execution
}
