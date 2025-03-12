/*
Question: Write a C program to check whether a given string is a palindrome.
A palindrome is a word that reads the same forward and backward (e.g., "madam").
*/

#include <stdio.h>
#include <string.h>

// Function prototype to check if a string is a palindrome
int is_palindrome(char arr[]);

int main() {
    // Declaring a character array to store user input
    char text[20];

    // Displaying a welcome message
    printf("Welcome to Palindrome string checker\n");

    // Taking input from the user
    printf("Now enter your string: ");
    scanf("%s", text); // Using %s will take input without spaces

    // Checking if the input string is a palindrome
    if (is_palindrome(text)) {
        puts("Your input is a palindrome");
    } else {
        puts("Your input is not a palindrome");
    }
    return 0;
}

// Function to check if a string is a palindrome
int is_palindrome(char arr[]) {
    int len = strlen(arr); // Getting the length of the string

    // Comparing characters from start and end
    for (int i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - 1 - i]) {
            return 0; // If any mismatch, it's not a palindrome
        }
    }
    return 1; // If no mismatches, it's a palindrome
}
