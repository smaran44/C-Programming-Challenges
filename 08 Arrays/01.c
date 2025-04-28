//Write a C program to reverse an array without using another array.
//Input: [1, 2, 3, 4, 5]
//Output: [5, 4, 3, 2, 1]

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Initial array

    // Reverse the array using XOR swapping with a for loop
    for (int i = 0, j = 4; i < j; i++, j--) {
        arr[i] = arr[i] ^ arr[j]; // Store XOR of arr[i] and arr[j] in arr[i]
        arr[j] = arr[i] ^ arr[j]; // Now arr[j] becomes original arr[i]
        arr[i] = arr[i] ^ arr[j]; // Now arr[i] becomes original arr[j]
    }

    // Display the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
+-----------------+--------------------------+-----------------------------------+
| Property       | Expression               | Explanation                       |
+-----------------+--------------------------+-----------------------------------+
| Identity      | a ^ 0 = a                 | XOR with 0 gives the same number |
| Self-Inverse  | a ^ a = 0                 | XOR of a number with itself is 0 |
| Commutative   | a ^ b = b ^ a             | Order does not matter            |
| Associative   | (a ^ b) ^ c = a ^ (b ^ c) | Grouping does not matter         |
| Involution    | a ^ b ^ b = a             | Double XOR with same value cancels |
| Swap Trick    | a = a ^ b, b = a ^ b,     | Used for swapping values without |
|               | a = a ^ b                 | a third variable                 |
+-----------------+--------------------------+-----------------------------------+
*/
