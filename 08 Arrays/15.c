// Question: Write a C program to check whether a given array is sorted or not.

#include <stdio.h>

// Function prototype: Checks if the array is sorted
int is_sorted(int arr[], int size);

int main() {
    printf("Welcome to checking if an Array is sorted\n");

    // Test cases: Different types of arrays
    int arr1[6] = {5, 8, 9, 9, 10, 15};  // Increasing order sorted
    int arr2[6] = {76, 70, 50, 12, 12, 0}; // Decreasing order sorted
    int arr3[6] = {87, 0, 67, -98, 5, 5};  // Not sorted

    // Checking if each array is sorted
    if (is_sorted(arr1, 6)) {
        printf("\nFirst array is sorted");
    } else {
        printf("\nFirst array is not sorted");
    }

    if (is_sorted(arr2, 6)) {
        printf("\nSecond array is sorted");
    } else {
        printf("\nSecond array is not sorted");
    }

    if (is_sorted(arr3, 6)) {
        printf("\nThird array is sorted");
    } else {
        printf("\nThird array is not sorted");
    }

    return 0;
}

// Function to check if an array is sorted
int is_sorted(int arr[], int size) {
    int increasing = 1;  // Flag to check for increasing order
    int decreasing = 1;  // Flag to check for decreasing order

    // Loop through the array to check the order
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) { // If any element is greater than the previous
            decreasing = 0;  // It's not in decreasing order
        } else if (arr[i] < arr[i - 1]) { // If any element is smaller than the previous
            increasing = 0;  // It's not in increasing order
        }
    }

    // Return 1 if the array is sorted in either increasing or decreasing order
    return increasing || decreasing;
}
