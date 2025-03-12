/*
Question: Write a C program that asks the user for a password and grants or denies 
access based on whether the entered password matches a predefined stored password.
*/

#include <stdio.h>
#include <string.h>  // Required for strcmp() function

int main() {
    // Defining a constant stored password
    const char STORED_PASSWORD[] = "abcd1234";

    // Declaring a character array to store the user's input password
    char password[50];

    // Displaying a welcome message
    printf("Welcome to Secure System.\n\n");

    // Prompting the user to enter their password
    printf("Please enter your password: ");
    scanf("%s", password);  // Reads input until a space or newline is encountered

    // Alternative safer input method (commented out in the original code)
    // fgets(password, sizeof(password), stdin); 

    // Comparing the entered password with the stored password
    if (strcmp(password, STORED_PASSWORD) == 0) {
        puts("Access Granted to the System.");
    } else {
        puts("Access Denied to the System.");
    }

    return 0;
}
