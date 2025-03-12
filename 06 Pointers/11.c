/*
    Question: Write a C program to access and print an array using pointers.
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40}; // Initializing an array
    int *ptr = arr; // Pointer to the first element of the array

    // Traversing the array using pointer arithmetic
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i)); // Access elements using pointer
    }

    return 0;
}
