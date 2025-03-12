/*
    Question:
    Write a C program that defines a structure for books and students.
    Each student can borrow multiple books (up to 3). Implement functions 
    to display student details along with the books they have borrowed.
*/

#include <stdio.h>

// Structure to store book details
struct Book {
    char title[100];   // Book title
    char author[100];  // Book author
    float price;       // Book price
};

// Typedef for convenience
typedef struct Book Book;

// Structure to store student details, including borrowed books
typedef struct {
    char id[10];           // Student ID
    char name[50];         // Student's name
    char year[10];         // Year of study
    char grade;            // Grade achieved
    int no_of_books;       // Number of books borrowed
    Book borrowed_books[3]; // Array to store borrowed books (max 3)
} Student;

// Function prototypes
void print_student(Student *); // Function to print student details
void print_book(Book *);       // Function to print book details

int main() {
    // Initializing a student and their borrowed books
    Student stu1 = {
        .id = "CS001",
        .name = "Ravi",
        .year = "First",
        .grade = 'B',
        .no_of_books = 2, // Student has borrowed 2 books
        .borrowed_books = {
            {.title = "The Selfish Gene", .author = "Richard Dawkins", .price = 499.99},
            {.title = "Why We Sleep", .author = "Matthew Walker", .price = 399.99}
        }
    };

    // Displaying welcome message
    printf("Welcome to our College\n");

    // Printing student details
    printf("Here are the student details:");
    print_student(&stu1);

    return 0; // Indicating successful execution
}

// Function to print student details
void print_student(Student *stu) {
    printf("\nThe student named %s (ID: %s), studying in %s year, has achieved grade %c.",
           stu->name, stu->id, stu->year, stu->grade);

    // Display borrowed books
    printf("\nBooks borrowed: ");
    for (int i = 0; i < stu->no_of_books; i++) {
        print_book(&(stu->borrowed_books[i]));
    }
}

// Function to print book details
void print_book(Book *book) {
    printf("\n\"%s\" is written by %s and is sold for Rs%.2f.",
           book->title, book->author, book->price);
}
