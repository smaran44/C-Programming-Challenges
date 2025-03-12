/*
Question: Write a C program that removes leading and trailing spaces from a string input by the user.
Additionally, replace spaces within the string with hyphens ('-').
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaring arrays to store input and the trimmed result
    char input[100];
    char trimmed[100];

    // Displaying a welcome message
    printf("Welcome to trimming of the string\n\n");

    // Taking input from the user
    printf("Please enter the text: ");
    fgets(input, sizeof(input), stdin); // Reads input including spaces and newline

    // Finding the first non-space character (leading spaces removal)
    int start = 0;
    while (input[start] == ' ') {
        start++;
    }

    // Finding the last non-space character (trailing spaces and newline removal)
    int end = strlen(input) - 1;
    while (input[end] == ' ' || input[end] == '\n') {
        end--;
    }

    // Copying the trimmed content while replacing spaces with hyphens ('-')
    int i = 0;
    while (i <= end - start) {
        if (input[i + start] == ' ') {
            trimmed[i] = '-'; // Replacing space with '-'
        } else {
            trimmed[i] = input[i + start];
        }
        i++;
    }

    // Adding null terminator at the end of the trimmed string
    trimmed[i] = '\0';

    // Displaying the final trimmed string
    printf("Final trimmed string is: %s\n", trimmed);

    return 0;
}
