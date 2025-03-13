/*
    Question:
    Write a C program that dynamically allocates memory for a floating-point array.
    The program should take user input for the number of elements and their values.
    Finally, it should display the entered elements and free the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

int main() {
    int size; // Variable to store the number of elements

    // Display welcome message
    printf("Welcome to our world of dynamic arrays!\n");

    // Taking user input for the number of elements
    printf("Please enter the number of elements: ");
    scanf("%d", &size);

    // Dynamic memory allocation for an array of floats
    float *arr = (float*) malloc(size * sizeof(float));
    
    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!!!\n");
        return 1; // Exit program with an error code
    }

    // Taking user input for array elements
    for (int i = 0; i < size; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Displaying the elements
    printf("\nHere are your elements: ");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]); // Printing elements with 2 decimal precision
    }

    // Freeing allocated memory
    free(arr);
    arr = NULL; // Preventing dangling pointer

    return 0; // Indicating successful execution
}
