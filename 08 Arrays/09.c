//insertion operation
//Insert an element at a specific position in an array
//Input: [10, 20, 30, 40, 50]
//Output: [10, 20, 30, 90, 40, 50]

#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Initial array
    int num = 90, i; // Element to insert
    int index = 3; // Position to insert

    // Shift elements to make space
    for (i = 4; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    arr[index] = num; // Insert the element

    // Print updated array
    for (i = 0; i < 6; i++) { // The array now has 6 elements
        printf("%d ", arr[i]);
    }

    return 0;
}
