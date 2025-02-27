//Write a C program to reverse an array without using another array.
//Input: [1, 2, 3, 4, 5]
//Output: [5, 4, 3, 2, 1]

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Initial array
    int i = 0, j = 4; // Pointers to start and end of the array

    // Reverse the array using XOR swapping
    while (i < j) {

      /*logic
      a = a ^ b;
      b = a ^ b;  // This makes b = (a ^ b) ^ b = a
      a = a ^ b;  // This makes a = (a ^ b) ^ a = b

      as (a ^ b) ^ b = a ^ (b ^ b) = a ^ 0 = a
      and (a ^ b) ^ a = a ^ (a ^ b) = a ^ a ^ b = 0 ^ b = b 

      this is very useful for swapping two values without using a temporary variable
*/

        arr[i] = arr[i] ^ arr[j];//Stores XOR of both values in arr[i]
        arr[j] = arr[i] ^ arr[j];// Extracts original arr[i] and stores it in arr[j]
        arr[i] = arr[i] ^ arr[j];//Extracts original arr[j] and stores it in arr[i]
        // last step arr[i] = arr[i] ^ arr[j] = arr[i] ^ arr[j] ^ arr[j] = arr[i] ^ 0 = arr[i]

        // Move the indices
        i++;
        j--;
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
