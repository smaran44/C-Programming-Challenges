/*
Question: Write a C program that takes a string input from the user and reverses it using a function.
The program should display both the original and reversed strings.
*/

#include <stdio.h>
#include <string.h>  // Required for strlen() function

// Function prototype to reverse a string
void reverse_string(char str[]);

int main() {
    // Declaring a character array to store user input
    char text[100];

    // Displaying a welcome message
    printf("Welcome to reversing a string\n");

    // Taking input from the user
    printf("Please enter your text: ");
    fgets(text, sizeof(text), stdin); // Reads input including spaces

    // Displaying the original string
    puts("Original string is:");
    puts(text);

    // Calling function to reverse the string
    reverse_string(text);

    // Displaying the reversed string
    puts("Text after reversal is:");
    puts(text);

    return 0;
}

// Function to reverse a string
void reverse_string(char str[]) {
    int length = strlen(str);

    // Removing the newline character if present (fgets() captures '\n')
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; // Adjust length after removing '\n'
    }

    // Swapping characters to reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}
