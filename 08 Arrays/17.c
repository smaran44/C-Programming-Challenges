/*
   Question: Write a C program to reverse an array in-place.
   Implement a function that swaps elements symmetrically from both ends of the array
   until the middle is reached. Use a helper function to swap two elements.
*/

#include <stdio.h>

// Function prototypes
void swap(int *first, int *second);
// pointers are used to modify the original array in-place
void reverse(int arr[], int size);
void print_arr(int arr[], int size);

int main() {
    printf("Welcome to Reversing Arrays\n");

    // Define test arrays
    int arr1[] = {1, 2, 5, 7, 8, 9, 4, 5}; // Array with even number of elements
    int arr2[] = {1, 2, 3, 4, 5};         // Array with odd number of elements

    // Reverse the first array
    printf("\nOriginal array: ");
    print_arr(arr1, 8);
    reverse(arr1, 8);
    printf("\nReversed array: ");
    print_arr(arr1, 8);

    // Reverse the second array
    printf("\n\nOriginal array: ");
    print_arr(arr2, 5);
    reverse(arr2, 5);
    printf("\nReversed array: ");
    print_arr(arr2, 5);

    return 0;
}

/* Function to reverse an array in-place */
void reverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(&arr[i], &arr[size - 1 - i]); // Swap elements symmetrically
    }
}

/* Function to swap two elements */
void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

/* Function to print an array */
void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
}
