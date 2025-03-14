/*
Program: Count Words in a File

Description:
This program reads a file and counts the number of words in it.
A word is defined as a sequence of characters separated by whitespace.
*/

#include <stdio.h>  // Include standard I/O library

int main() {
    // Open the file "input.txt" in read mode
    FILE *file = fopen("input.txt", "r");  
    if (file == NULL) {  // Check if the file was opened successfully
        printf("Error: Could not open the file!\n");
        return 1;  // Exit the program with an error code
    }

    int c;            // Variable to store each character read from the file
    int in_word = 0;  // Flag to track if we are inside a word
    int word_count = 0;  // Counter for the number of words

    // Read characters one by one until the end of the file (EOF)
    while ((c = fgetc(file)) != EOF) {
        // Check if the character is a space, newline, or tab (word separator)
        if (c == ' ' || c == '\n' || c == '\t') {
            in_word = 0;  // We are not inside a word anymore
        }

        // Check if the character is part of a word and we were not already in a word
        if (c != ' ' && c != '\n' && c != '\t' && in_word == 0) {
            in_word = 1;  // Mark the start of a new word
            word_count++;  // Increment the word count
        }
    }
    
    // Print the total word count
    printf("Total Words: %d\n", word_count);

    fclose(file);  // Close the file to free resources
    return 0;  // Exit the program successfully
}
