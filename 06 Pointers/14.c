/*
    Question: Write a C program to demonstrate how to use pointers with structures.
*/

#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s = {"Alice", 20}; // Initializing a structure variable
    struct Student *ptr = &s; // Pointer to structure

    // Accessing structure members using pointer
    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);

    return 0;
}
