/*Problem 5. Write a C program to find an element that appears more than N/2 times in
an array (if exists).
Input: [2, 2, 1, 1, 1, 2, 2] 
Output: 2
*/

#include <stdio.h>

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};  // Input array
    int len = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    // Outer loop to traverse the array
    for (int i = 0; i < len; i++) {
        int count = 0; // Reset count for each element

        // Inner loop to count occurrences of arr[i]
        for (int j = 0; j < len; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        // If count is more than len/2, print the majority element
        if (count > len / 2) {
            printf("%d\n", arr[i]);
            return 0; // Exit after finding the majority element
        }
    }

    // If no majority element is found, print a message
    printf("No majority element found\n");
    return 0;
}
