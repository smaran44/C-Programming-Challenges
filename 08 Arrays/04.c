/*Problem 4. Write a C program that finds the first repeating element in an array.
Input: [5, 1, 2, 3, 4, 1, 6, 3]
Output: 1
*/

#include <stdio.h>

int main() {
    int arr[] = {5, 1, 2, 3, 4, 1, 6, 3}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Get number of elements
    int flag = 0; // Flag to indicate if a repeating element is found

    // Outer loop to traverse the array
    for (int i = 0; i < n - 1; i++) {//Why n-1? Because we need at least one element left for j to compare with
        // Inner loop to check for duplicates
        for (int j = i + 1; j < n; j++) {//Picks the next elements (starting from i+1) and checks if any of them match arr[i]
            if (arr[i] == arr[j]) { // If a match is found
                printf("The first repeating element: %d\n", arr[i]);
                flag = 1; // Mark that a repeating element is found
                break; // Exit inner loop
            }
        }
        if (flag == 1) // If found, exit the outer loop
            break;
    }

    if (flag == 0) // If no repeating element is found
        printf("No repeating elements found.\n");

    return 0;
}
