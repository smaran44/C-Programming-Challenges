/*
    Question: Write a C program that uses a double pointer to allocate memory 
    dynamically and modify its value inside a function.
*/

#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory and assign a value using double pointer
void allocate_memory(int **ptr) {
    *ptr = (int*) malloc(sizeof(int)); // Allocating memory
    **ptr = 42; // Assigning value to allocated memory
}

int main() {
    int *p; // Declare a pointer variable
    allocate_memory(&p); // Call function and pass address of pointer

    printf("Allocated value: %d\n", *p); // Print allocated value

    free(p); // Free dynamically allocated memory
    return 0;
}
