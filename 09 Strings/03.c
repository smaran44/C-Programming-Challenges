/*
Question: Write a C program that takes a string as input from the user and converts 
all its characters to uppercase using the `toupper()` function.
*/

#include <stdio.h>
#include <ctype.h>   // Required for toupper() function
#include <string.h>  // Required for strlen() function

int main() {
    // Declaring a character array to store the input text
    char text[100];

    // Displaying a welcome message
    printf("Welcome to converting string to UPPERCASE\n\n");

    // Taking user input (including spaces)
    printf("Please enter your text: ");
    fgets(text, sizeof(text), stdin); // Reads input including spaces and newline

    // Loop through each character of the string and convert to uppercase
    for (int i = 0; i < strlen(text); i++) {
        text[i] = toupper(text[i]); // Convert each character to uppercase
    }

    // Display the final uppercase string
    printf("Here is your final output:\n%s", text);

    return 0;
}
