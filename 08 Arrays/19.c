/*
   Question: Write a C program to copy a character array into another array
   using pointer arithmetic.
*/

#include <stdio.h>

// Function prototypes
void copy_arr(char *arr, int size, char *new_arr);
void print_arr(char arr[], int size);

int main() {
    // Character array (including spaces)
    char arr[9] = {'C', ' ', 'P', 'R', 'O', 'G', 'R', 'A', 'M'};
    char new_arr[9];

    printf("Welcome to copying an array using pointer arithmetic\n\n");

    // Printing original array
    printf("\nOriginal char array: ");
    print_arr(arr, 9);

    // Copying array using pointer arithmetic
    copy_arr(arr, 9, new_arr);

    // Printing copied array
    printf("\nCopied char array: ");
    print_arr(new_arr, 9);

    return 0;
}

/* Function to copy an array using pointer arithmetic */
void copy_arr(char *arr, int size, char *new_arr) {
    for (int i = 0; i < size; i++) {
        *(new_arr + i) = *(arr + i);
    }

    // Alternative approach using pointer increment
    // while (size--) {
    //     *new_arr++ = *arr++;
    // }
}

/* Function to print a character array */
void print_arr(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c", arr[i]);
    }
}
