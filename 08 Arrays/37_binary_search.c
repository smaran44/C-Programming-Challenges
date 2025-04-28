//Write a program in C to implement binary search algorithm.

#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;  // Calculate middle index

        // If the target is found
        if (arr[mid] == target) {
            return mid;  // Return the index of the target element
        }
        
        // If target is smaller than mid, search in the left half
        if (arr[mid] > target) {
            high = mid - 1;
        }
        // If target is larger than mid, search in the right half
        else {
            low = mid + 1;
        }
    }

    return -1;  // Return -1 if target is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target, result;
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Take the target value as input
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform binary search
    result = binarySearch(arr, size, target);

    // Check the result
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
