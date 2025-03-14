/*
Program: Count Words in a File

Description:
This program reads a file and counts the number of words in it.
A word is defined as a sequence of characters separated by whitespace.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    int c, in_word = 0, word_count = 0;
    while ((c = fgetc(file)) != EOF) {
        if (isspace(c)) {
            in_word = 0; // End of a word
        } else if (in_word == 0) {
            in_word = 1; // Start of a new word
            word_count++;
        }
    }
    
    printf("Total Words: %d\n", word_count);

    fclose(file);  // Close the file
    return 0;
}
