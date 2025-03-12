/*
Question: Write a C program that repeatedly asks the user for a password until they enter the correct one.
Once the correct password is entered, the program should display "Access Granted".
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Defining the correct password as a constant string
    const char STORED_PASSWORD[] = "Pa$$word";

    // Declaring an array to store user input
    char password[20];

    // Displaying a welcome message
    printf("Welcome to the secure system\n\n");

    // Using a do-while loop to repeatedly ask for the correct password
    do {
        printf("Please enter the correct password: ");
        scanf("%s", password); // Taking password input (without spaces)
    } while (strcmp(password, STORED_PASSWORD) != 0); // Loop runs until password matches

    // If the loop exits, the password is correct
    printf("\n\nAccess Granted\n");

    return 0;
}
