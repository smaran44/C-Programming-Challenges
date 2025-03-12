/*
Question: Write a C program that takes the user's full name as input using `fgets()` 
and then displays it using `puts()`. Ensure the input does not exceed a fixed length.
*/

#include <stdio.h>

int main() {
    // Declaring a character array to store the user's name (max 24 characters + 1 for '\0')
    char name[25];  
    
    // Displaying a welcome message
    printf("Welcome to showing use of fgets and puts\n");
    
    // Asking the user to enter their full name
    printf("Please, enter your full name: ");
    
    // Using fgets() to safely take input, preventing buffer overflow
    fgets(name, sizeof(name), stdin);
    
    // Displaying the entered name
    printf("The name you entered is: ");
    
    // Using puts() to print the name (puts() automatically adds a newline)
    puts(name);  
    
    return 0;
}
