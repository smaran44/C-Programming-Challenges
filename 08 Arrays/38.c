// Write a C program using pointer to search a value from an array.

#include <stdio.h>

int main() {
    int n, search, *ptr, found = 0;

    // Take input for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Take input for array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Take the value to be searched
    printf("Enter the value to search: ");
    scanf("%d", &search);

    // Use a pointer to search the value
    ptr = arr;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == search) {
            printf("Value %d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d not found in the array\n", search);
    }

    return 0;
}
