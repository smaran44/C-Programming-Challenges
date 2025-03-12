/*
Question: Write a C program that allows a user to input details of three books
(title, author, and price) and then displays the stored information.
*/

#include <stdio.h>
#include <string.h>

// Function to take input for book details
void input_book(char title[], char author[], float *price) {
    printf("\nPlease enter the book title: ");
    fgets(title, 100, stdin); // Read book title
    title[strcspn(title, "\n")] = 0; // Remove the newline character

    printf("Now, enter the book's Author: ");
    fgets(author, 100, stdin); // Read author's name
    author[strcspn(author, "\n")] = 0; // Remove the newline character

    printf("Finally, enter the book's price in Rs: ");
    scanf("%f", price); // Read book price

    while (getchar() != '\n'); // Clear input buffer
}

// Function to print book details
void print_book(char title[], char author[], float price) {
    printf("\n%s is written by %s, and is sold for Rs%.2f", title, author, price);
}

int main() {
    // Display welcome message
    printf("Welcome to the Book Store\n");

    // Arrays to store book details for three books
    char titles[3][100];
    char authors[3][100];
    float prices[3];

    // Loop to take input for each book
    for (int i = 0; i < 3; i++) {
        input_book(titles[i], authors[i], &prices[i]);
    }

    // Displaying all the stored book details
    printf("\n\nHere are the details of all the books:\n");
    for (int i = 0; i < 3; i++) {
        print_book(titles[i], authors[i], prices[i]);
    }

    return 0;
}
