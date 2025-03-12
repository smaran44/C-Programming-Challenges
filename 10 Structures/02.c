/*
Question: Write a C program that allows a user to input details of three books
(title, author, and price) using a structure and then displays the stored information.
*/

#include <stdio.h>
#include <string.h>

// Defining a structure for Book
struct Book {
    char title[100];
    char author[100];
    float price;
};

// Typedef to simplify struct usage
typedef struct Book Book;

// Function to take input for book details
// we can also do this by without pointers
// just replace -> with . in the function and remove *
void input_book(Book *book) {
    printf("\nPlease enter the book title: ");
    fgets(book->title, 100, stdin);
    book->title[strcspn(book->title, "\n")] = 0; // Remove trailing newline

    printf("Now, enter the book's author: ");
    fgets(book->author, 100, stdin);
    book->author[strcspn(book->author, "\n")] = 0; // Remove trailing newline

    printf("Finally, enter the book's price in Rs: ");
    scanf("%f", &(book->price));
    while (getchar() != '\n'); // Clear input buffer
}

// Function to print book details
void print_book(const Book *book) {
    printf("\nTitle: %s\nAuthor: %s\nPrice: Rs%.2f\n", book->title, book->author, book->price);
}

int main() {
    // Display welcome message
    printf("Welcome to the Book Store\n");

    // Array to store details of multiple books
    Book books[3];

    // Loop to take input for each book
    for (int i = 0; i < 3; i++) {
        printf("\nEntering details for Book %d:\n", i + 1);
        input_book(&books[i]);
    }

    // Displaying all the stored book details
    printf("\n\nHere are the details of all the books:\n");
    for (int i = 0; i < 3; i++) {
        printf("\n--- Book %d ---", i + 1);
        print_book(&books[i]);
    }

    return 0;
}
