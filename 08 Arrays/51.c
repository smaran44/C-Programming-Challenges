// Write a C program to search a name in a list using binary search techniques.

#include <stdio.h>
#include <string.h>

// Function to perform binary search on the list of names
int binarySearch(char *arr[], int size, char *target) {
    int low = 0, high = size - 1, mid;
    
    while (low <= high) {
        mid = low + (high - low) / 2;  // Calculate middle index
        
        // If the target is found
        int result = strcmp(arr[mid], target);
        if (result == 0) {
            return mid;  // Return the index of the target element
        }
        
        // If target is smaller than mid, search in the left half
        if (result > 0) {
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
    char *arr[] = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Hannah", "Ivan", "Jack"};
    int targetIndex;
    char target[100];
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Take the name to search as input
    printf("Enter the name to search: ");
    scanf("%s", target);

    // Perform binary search
    targetIndex = binarySearch(arr, size, target);

    // Check the result
    if (targetIndex != -1) {
        printf("Name '%s' found at index %d\n", target, targetIndex);
    } else {
        printf("Name '%s' not found in the list\n", target);
    }

    return 0;
}
