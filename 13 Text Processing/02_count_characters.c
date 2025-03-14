/*
Program: Count Characters in a File

Description:
This program reads a file and counts the number of characters (including spaces and newlines) in it.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    int c, count = 0;
    while ((c = fgetc(file)) != EOF) {
        count++; // Increment character count for each character read
    }
    
    printf("Total Characters: %d\n", count);

    fclose(file);  // Close the file
    return 0;
}
