/*
    Question:
    Write a C program that dynamically allocates memory for 10 integers using calloc(),
    fills them with random numbers between 0-99, displays them, and then shrinks the 
    allocated memory to hold only 5 integers using realloc(). Finally, display the 
    first 5 numbers and free the allocated memory properly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Display welcome message
    printf("Welcome to the world of dynamic randoms\n");

    // Dynamically allocating memory for 10 integers using calloc()
    int *arr = (int*) calloc(10, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!!!\n");
        return 1; // Exit program if memory allocation fails
    }

    // Seeding random number generator with current time
    srand(time(NULL));

    // Filling array with random numbers between 0 and 99
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    // Displaying the generated random numbers
    printf("\nHere are your 10 random numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Shrinking memory to hold only 5 integers
    int *shrinked = (int*) realloc(arr, 5 * sizeof(int));
    if (shrinked == NULL) {
        printf("\nMemory reallocation failed!!\n");
        free(arr);
        return 1;
    }
    arr = shrinked;

    // Displaying the first 5 numbers after shrinking
    printf("\nHere are your first 5 numbers after shrinking: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Freeing allocated memory
    free(arr);
    arr = NULL; // Avoiding dangling pointer

    return 0; // Indicating successful execution
}
