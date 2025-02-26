/*Write a C program to print odd numbers from an Array.
Input: [12, 15, 8, 7, 23, 42, 55]
Output: 15 7 23 55
*/

#include <stdio.h>

int main() {
    int arr[] = {12, 15, 8, 7, 23, 42, 55}; // Input array
    int len = sizeof(arr) / sizeof(arr[0]); // Calculate array length
    
    /*sizeof(arr): Returns total memory occupied by the array.
      sizeof(arr[0]): Returns memory occupied by one element.
      Division gives the number of elements in the array.*/

    // Traverse the array
    for (int i = 0; i < len; i++) {
        // If the number is even, skip it
        if (arr[i] % 2 == 0) 
            continue;
        
        // Print odd number
        printf("%d ", arr[i]);
    }

    printf("\n"); // Print new line for better formatting
    return 0;
}
