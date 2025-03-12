/*Dynamic Memory Allocation
When allocating memory dynamically using malloc(), we use pointers to access the allocated memory.*/

/*
   Question: Write a C program to dynamically allocate memory for 
   an integer array and free it after use.
*/

#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory dynamically
int *allocate_memory(int size) {
    return (int*) malloc(size * sizeof(int)); // Allocating memory
}

int main() {
    printf("Pointer Example: Dynamic Memory Allocation\n");

    int size = 5;
    
    // Allocating memory for an integer array
    int *arr = allocate_memory(size);

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Assign values to dynamically allocated array
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
        printf("%d ", arr[i]); // Print allocated values
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
