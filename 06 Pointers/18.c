//C program that demonstrates how to display the values and addresses of elements in an array using pointers

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Initialize an array
    int *ptr = arr;  // Pointer pointing to the first element of the array

    printf("Array elements and their addresses:\n");

    // Loop through the array using the pointer
    for (int i = 0; i < 5; i++) {
        printf("Element %d: Value = %d, Address = %p\n", i + 1, *(ptr + i), (ptr + i));
    }

    return 0;
}
