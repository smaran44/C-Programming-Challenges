/*
Question: Write a C program that takes the current day, month, and year as input 
from the user and then displays the formatted date in the form "day/month/year".
*/

#include <stdio.h>

int main() {
    // Declaring variables to store the day, month, and year
    char day[10];     // Array to store the day (e.g., "Monday", "10", etc.)
    char month[15];   // Array to store the month (e.g., "January", "12", etc.)
    int year;         // Integer variable to store the year (e.g., 2025)

    // Displaying a welcome message
    printf("Welcome to formatting date\n\n");

    // Taking user input for day
    printf("Please enter the current day: ");
    scanf("%s", day);  // Reads a word (without spaces) into 'day'

    // Taking user input for month
    printf("Now, enter the current month: ");
    scanf("%s", month);  // Reads a word (without spaces) into 'month'

    // Taking user input for year
    printf("Finally, enter the current year: ");
    scanf("%d", &year);  // Reads an integer value into 'year'

    // Displaying the formatted date
    printf("\nThe current date is: %s/%s/%04d", day, month, year);

    return 0;
}
