/*
Program: Search for a Word in a File

Description:
This program searches for a specific word (defined as a macro) in a text file
and prints all lines containing the word.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000  // Maximum line length
#define PATTERN "xyz" // Word to search for

// Function to fetch a line from the file
int fetchline(FILE *file, char line[], int max_size) {
    if (fgets(line, max_size, file) != NULL) {
        return strlen(line);
    }
    return 0;
}

// Function to check if a word is in a line
int getindex(char line[], char word[]) {
    return (strstr(line, word) != NULL) ? 1 : -1;
}

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    char line[MAXLINE];
    int found = 0;

    while (fetchline(file, line, MAXLINE) > 0) {
        if (getindex(line, PATTERN) >= 0) {
            printf("%s", line);  // Print matching line
            found++;
        }
    }

    if (found == 0) {
        printf("No matching lines found.\n");
    }

    fclose(file);  // Close the file
    return 0;
}
