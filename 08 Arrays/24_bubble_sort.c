// Bubble Sort Implementation in C
// This program sorts an array using the Bubble Sort algorithm.

#include <stdio.h>

// Function to perform Bubble Sort
void bubble_sort(int arr[], int n) {
    int i, j;
    // Outer loop runs from 0 to n-1
    for (i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Main function
int main() {
    // Sample array to be sorted
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    // Call the Bubble Sort function
    bubble_sort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
