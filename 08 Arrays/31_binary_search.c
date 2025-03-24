#include <stdio.h>  // Standard Input/Output library

// Iterative Binary Search Function
int binarySearchIterative(int arr[], int n, int target) {
    int low = 0, high = n - 1; // Initialize search boundaries

    while (low <= high) { // Continue searching until the range is valid
        int mid = low + (high - low) / 2; // Calculate mid index (avoids overflow)

        if (arr[mid] == target) // If target is found at mid index
            return mid;

        else if (arr[mid] < target) // If target is greater, search in the right half
            low = mid + 1;
        
        else // If target is smaller, search in the left half
            high = mid - 1;
    }
    
    return -1; // Return -1 if the element is not found
}

// Recursive Binary Search Function
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) // Base case: If range is invalid, return -1 (not found)
        return -1;

    int mid = low + (high - low) / 2; // Calculate mid index

    if (arr[mid] == target) // If target is found, return its index
        return mid;

    else if (arr[mid] < target) // If target is greater, search in the right half
        return binarySearchRecursive(arr, mid + 1, high, target);
    
    else // If target is smaller, search in the left half
        return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    // Sample sorted array for binary search
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int target; // Variable to store user input

    // Prompt the user for the number to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform Iterative Binary Search
    int resultIter = binarySearchIterative(arr, n, target);
    if (resultIter != -1)
        printf("Element found at index (Iterative): %d\n", resultIter);
    else
        printf("Element not found (Iterative)\n");

    // Perform Recursive Binary Search
    int resultRec = binarySearchRecursive(arr, 0, n - 1, target);
    if (resultRec != -1)
        printf("Element found at index (Recursive): %d\n", resultRec);
    else
        printf("Element not found (Recursive)\n");

    return 0; // End of the program
}
