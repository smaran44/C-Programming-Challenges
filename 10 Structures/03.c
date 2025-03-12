/*
    Question:
    Write a C program that defines a structure to store book details,
    including the title, author, and price. Initialize an array of books
    with predefined values and display the details of each book.

    Use a function to print the book details, and ensure proper formatting
    in the output.
*/

#include <stdio.h>
#include <string.h>

// Defining a structure to store book details
struct Book {
    char title[100];  // Stores the book title
    char author[100]; // Stores the author's name
    float price;      // Stores the price of the book
};

// Creating a type alias for `struct Book`
typedef struct Book Book;

// Function to print book details
void print_book(Book *book) {
    printf("\nTitle: %s\nAuthor: %s\nPrice: Rs%.2f\n", book->title, book->author, book->price);
}

int main() {
    printf("Welcome to the Book Store\n");

    // Initializing an array of books with predefined details
    Book books[3] = {
        {"The Selfish Gene", "Richard Dawkins", 499.99},  // Book 1
        {"Why We Sleep", "Matthew Walker", 399.99},       // Book 2
        {"Doglapan", "Ashneer Grover", 299.99}           // Book 3
    };

    printf("\nHere are the details of all the books:\n");

    // Loop through the array and print each book's details
    for (int i = 0; i < 3; i++) {
        printf("\n--- Book %d ---", i + 1); // Numbering each book
        print_book(&books[i]); // Calling the function to print details
    }

    return 0; // Successful execution
}
