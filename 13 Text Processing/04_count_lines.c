/*
Program: Count Lines in a File

Description:
This program reads a file and counts the number of lines in it.
A line is identified by a newline character ('\n').
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    int c, line_count = 0;
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            line_count++; // Increment count for each newline character
        }
    }
    
    printf("Total Lines: %d\n", line_count);

    fclose(file);  // Close the file
    return 0;
}
