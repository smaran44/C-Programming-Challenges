/*Write a C program to find the second largest element of an array
Input: [10, 20, 4, 45, 99]
Output: 45
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Determine array size

    // Initialize two variables to store the largest and second largest
    int first = -999, second = -999;

    // Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > first)
            first = arr[i];
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }

    // Print the second largest element
    printf("Second Largest Element: %d\n", second);

    return 0;
}
