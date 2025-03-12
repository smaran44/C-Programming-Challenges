/*
   Question: Write a C program to find the maximum and minimum values in an 
   array of 10 user-input numbers.
*/

#include <stdio.h>

int main() {
    int arr[10]; // Array to store 10 user-input numbers

    printf("Welcome to Max and Min of Array\n");

    // Taking input from the user
    for (int i = 0; i < 10; i++) {
        printf("Please enter %dth element: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    // Initializing max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Loop to find the maximum and minimum values in the array
    for (int i = 1; i < 10; i++) {
        if (max < arr[i]) {  // Update max if the current element is greater
            max = arr[i];
        }
        if (min > arr[i]) {  // Update min if the current element is smaller
            min = arr[i];
        }
    }

    // Displaying the maximum and minimum values
    printf("The maximum value is %d and the minimum value is %d", max, min);

    return 0;
}
