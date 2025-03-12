/*
   Question: Write a C program to check if an array is a palindrome.
   An array is a palindrome if it reads the same forward and backward.
   Implement a function that compares elements symmetrically from both ends.
*/

#include <stdio.h>

// Function prototype
int is_palindrome(int arr[], int size);

int main() {
    // Test cases
    int arr1[9] = {3, 6, 8, 4, 5, 4, 8, 6, 3}; // Palindrome
    int arr2[4] = {1, 1, 1, 1}; // Palindrome
    int arr3[5] = {1, 1, 1, 1, 2}; // Not a palindrome

    // Checking if the arrays are palindromes and displaying results
    printf("\nFirst array is %s", is_palindrome(arr1, 9) ? "a palindrome" : "not a palindrome");
    printf("\nSecond array is %s", is_palindrome(arr2, 4) ? "a palindrome" : "not a palindrome");
    printf("\nThird array is %s", is_palindrome(arr3, 5) ? "a palindrome" : "not a palindrome");

    return 0;
}

/* Function to check if an array is a palindrome */
int is_palindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return 0; // Return false if mismatch is found
        }
    }
    return 1; // Return true if all elements match symmetrically
}
