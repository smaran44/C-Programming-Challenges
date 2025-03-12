/*
    Question:
    Write a C program that defines a structure for a student containing 
    their ID, name, year, and grade. Implement functions to increase 
    and decrease the student's grade. Initialize multiple students, 
    modify their grades, and display their details.
*/

#include <stdio.h>

// Defining a structure to store student details
typedef struct {
    char id[10];      // Student ID
    char name[50];    // Student's Name
    char year[10];    // Year of Study
    char grade;       // Grade (A, B, C, D, F)
} Student;

// Function prototypes
void increase_grade(Student *); // Function to improve the grade
void decrease_grade(Student *); // Function to reduce the grade
void print_student(Student *);  // Function to display student details

int main() {
    // Initializing students with predefined values using designated initializers
    Student stu1 = {.id = "CS001", .name = "Ravi", .year = "First", .grade = 'B'};
    Student stu2 = {.id = "CS002", .name = "Ram", .year = "Second", .grade = 'A'};
    Student stu3 = {.id = "CS003", .name = "Sameer", .year = "Third", .grade = 'F'};

    // Displaying welcome message
    printf("Welcome to our College\n");
    printf("Here are the student details:");

    // Printing initial student details
    print_student(&stu1);
    print_student(&stu2);
    print_student(&stu3);

    // Modifying grades
    decrease_grade(&stu1); // Decreasing Ravi's grade
    increase_grade(&stu3); // Increasing Sameer's grade

    // Printing updated details
    printf("\nAfter changes:");
    print_student(&stu1);
    print_student(&stu2);
    print_student(&stu3);

    return 0; // Indicating successful execution
}

// Function to increase the grade (e.g., 'B' -> 'A', 'F' -> 'E')
void increase_grade(Student *stu) {
    if (stu->grade > 'A') { // Prevents increasing above 'A'
        stu->grade--;
    }
}

// Function to decrease the grade (e.g., 'A' -> 'B', 'C' -> 'D')
void decrease_grade(Student *stu) {
    if (stu->grade < 'F') { // Prevents decreasing below 'F'
        stu->grade++;
    }
}

// Function to display student details
void print_student(Student *stu) {
    printf("\nThe student named %s (ID: %s), studying in %s year, has achieved grade %c.",
           stu->name, stu->id, stu->year, stu->grade);
}
