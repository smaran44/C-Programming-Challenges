/*
Question: Write a C program to search for an element in a 2D array and count its occurrences.
The program should take a 2D array as input and search for a given element,
returning the number of times it appears in the array.
*/

#include <stdio.h>

// Function prototype to search for an element and return the number of occurrences
int search(int arr[][3], int rows, int cols, int element);

int main() {
    printf("Welcome to searching in a 2D array.\n");
    
    // Initializing a 3x3 matrix
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};

    // Searching for element '1' in the array
    int occ = search(arr, 3, 3, 1);
    printf("\nSearching for 1 found %d occurrences", occ);
    
    // Searching for element '5' in the array
    occ = search(arr, 3, 3, 5);
    printf("\nSearching for 5 found %d occurrences", occ);
    
    // Searching for element '9' in the array (not present)
    occ = search(arr, 3, 3, 9);
    printf("\nSearching for 9 found %d occurrences", occ);
    
    return 0;
}

// Function to search for an element in a 2D array and count its occurrences
int search(int arr[][3], int rows, int cols, int element) {
    int occ = 0; // Counter for occurrences
    
    // Loop through each element in the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == element) { // If the element matches, increment count
                occ++;
            }
        }
    }
    
    return occ; // Return the total count of occurrences
}
