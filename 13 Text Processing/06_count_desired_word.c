/*
Program: Count Occurrences of a Specific Word in a File

Description:
This program counts how many times a specific word (defined as a macro) appears in a text file.
*/

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000  // Maximum line length
#define PATTERN "it" // Word to count occurrences of

int fetchline(FILE *file, char line[], int max_size);
int count_word_occurrences(char line[], char word[]);

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    char line[MAXLINE];
    int total_count = 0;

    while (fetchline(file, line, MAXLINE) > 0) {
        total_count += count_word_occurrences(line, PATTERN);
    }

    printf("The word '%s' appears %d times in the file.\n", PATTERN, total_count);

    fclose(file);  // Close the file
    return 0;
}

// Function to fetch a line from the file
int fetchline(FILE *file, char line[], int max_size) {
    if (fgets(line, max_size, file) != NULL) {
        return strlen(line);
    }
    return 0;
}

// Function to count occurrences of a word in a line
int count_word_occurrences(char line[], char word[]) {
    int count = 0;
    char *ptr = line;
    while ((ptr = strstr(ptr, word)) != NULL) { //If word is found, strstr returns a pointer to the first character of word in ptr
        count++;
        ptr += strlen(word); // Move past the word
    }
    return count;
}