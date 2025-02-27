//deletion operation
//Delete an element from a specific position in an array
//input: [40, 50, 60, 70, 80]
//output: [40, 50, 70, 80]

#include <stdio.h>

int main() {
    int arr[] = {40, 50, 60, 70, 80};
    int pos = 2, i, n = 5; // Deleting element at position 2

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements left
    }
    n--; // Reduce size

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
