/*
   Question: Write a C program to count the number of occurrences of a given 
   element in an array. Use a function to determine the occurrences of an 
   element in the array.
*/

#include <stdio.h>

// Function prototype: Counts occurrences of an element in the array
int occurrences(int arr[], int size, int element);

int main() {
    // Initialize an array with predefined values
    int arr[] = {3, 6, 7, 98, 45, 3, 6, 3, 71, 10};

    printf("Welcome to finding element occurrences\n");

    // Finding occurrences of different elements in the array
    int result = occurrences(arr, 10, 98);
    printf("\nThe number of occurrences of 98 is %d", result);

    result = occurrences(arr, 10, 6);
    printf("\nThe number of occurrences of 6 is %d", result);

    result = occurrences(arr, 10, 3);
    printf("\nThe number of occurrences of 3 is %d", result);

    result = occurrences(arr, 10, 100); // Testing an element not present in the array
    printf("\nThe number of occurrences of 100 is %d", result);

    return 0;
}

// Function to count occurrences of a given element in the array
int occurrences(int arr[], int size, int element) {
    int counter = 0; // Variable to store occurrence count

    // Loop through the array to check for the element
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            counter++; // Increment counter if element is found
        }
    }

    return counter; // Return the total count
}
