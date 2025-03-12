/*
Question:
Write a C program to display the current date and time using the time.h library.
*/

#include<stdio.h>
#include<time.h>  // Required for handling date and time functions

// Function prototype declaration
void print_date();

int main() {
    // Calling the function to print the current date and time
    print_date();
    return 0;
}

// Function definition to print the current date and time
void print_date() {
    time_t current_time; // Variable to store the current time
    time(&current_time); // Get the current time

    // Convert time to a readable format
    char* date_string = asctime(localtime(&current_time));

    // Display the current date and time
    printf("Current Date and Time: %s", date_string);
}
