//  Write a program to find whether the array of integers contain a duplicate number

#include <stdio.h>

int main() {
    int n, i, j, duplicate = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) break;
    }

    if (duplicate) {
        printf("Array contains a duplicate number.\n");
    } else {
        printf("Array does not contain a duplicate number.\n");
    }

    return 0;
}
