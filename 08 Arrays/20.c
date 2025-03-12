/*
Question: Write a C program to merge two sorted arrays into a single sorted array.
The program should take two sorted arrays as input, merge them while maintaining the sorted order,
and store the result in a third array. The program should then display the merged array.
*/

#include <stdio.h>

// Function prototypes
void print_arr(int arr[], int size);  // Function to print an array
void merge_sorted_arrays(int arr1[], int size1,
                         int arr2[], int size2,
                         int arr3[], int size3); // Function to merge two sorted arrays

int main() {
    // First test case: merging two sorted arrays
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[7] = {2, 4, 6, 8, 10, 12, 14};
    int arr3[12]; // Array to store merged result

    printf("Welcome to merging sorted arrays");
    printf("\n\nHere is the merged array:");
    merge_sorted_arrays(arr1, 5, arr2, 7, arr3, 12); // Merging arrays
    print_arr(arr3, 12); // Printing merged array
    
    
    // Second test case: merging another set of sorted arrays
    int arr4[5] = {4, 9, 16, 67, 5434};
    int arr5[5] = {-43, -21, 0, 1, 2};
    int arr6[10]; // Array to store merged result
    
    printf("\n\nWelcome to merging sorted arrays");
    printf("\n\nHere is the merged array:");
    merge_sorted_arrays(arr4, 5, arr5, 5, arr6, 10); // Merging arrays
    print_arr(arr6, 10); // Printing merged array
    
    return 0;
}

// Function to print the elements of an array
void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
}

// Function to merge two sorted arrays into a third sorted array
void merge_sorted_arrays(int arr1[], int size1,
                         int arr2[], int size2,
                         int arr3[], int size3) {
    int i = 0, j = 0, k = 0; // Pointers for arr1, arr2, and arr3
    
    while (k < size3) {
        // If arr1's element is smaller, add it to arr3
        // or if arr2 is exhausted, take from arr1
        if (j == size2 || (i < size1 && arr1[i] < arr2[j])) {
            arr3[k] = arr1[i++];
        } else { // Otherwise, take from arr2
            arr3[k] = arr2[j++];
        }
        k++; // Move to next position in arr3
    }
}