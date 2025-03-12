/*
   Question: Write a C program to delete a specific element from an array.
   If the element is found, create a new array without that element and 
   display the updated array. If the element is not found, return the 
   original array unchanged.
*/

#include <stdio.h>

// Function prototypes
void delete_element(int arr[], int size, int new_arr[], int *new_size, int element);
void print_arr(int arr[], int size);

int main() {
    printf("Welcome to deleting elements from an array\n");

    // Original array
    int arr[8] = {2, 5, 7, 7, 9, 10, 1, 0};
    int new_arr[8]; // Array to store the modified elements
    int new_size;   // Variable to store the new size after deletion

    // Deleting element 5 from the array
    delete_element(arr, 8, new_arr, &new_size, 5);
    printf("\n\nThe array after deleting 5 is: ");
    print_arr(new_arr, new_size);

    // Deleting element 7 from the array
    delete_element(arr, 8, new_arr, &new_size, 7);
    printf("\n\nThe array after deleting 7 is: ");
    print_arr(new_arr, new_size);

    // Deleting element 8 from the array (not present)
    delete_element(arr, 8, new_arr, &new_size, 8);
    printf("\n\nThe array after deleting 8 is: ");
    print_arr(new_arr, new_size);

    return 0;
}

// Function to print an array
void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
}

// Function to delete a specific element from an array
//If we passed new_size as a normal integer, changes made inside delete_element would not be reflected in main().
//By using a pointer (int *new_size), we pass the address of new_size, allowing us to modify its value directly in main()
void delete_element(int arr[], int size, int new_arr[], int *new_size, int element) {
    int j = 0; // Index for new array

    // Copy elements except the one to be deleted
    for (int i = 0; i < size; i++) {
        if (arr[i] != element) {
            new_arr[j++] = arr[i];
        }
    }

    *new_size = j; // Update new array size
}
