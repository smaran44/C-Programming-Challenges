/*Passing Large Data Structures Efficiently
Passing large arrays or structs by value copies them, which is inefficient. Pointers avoid unnecessary copying.*/

/*
   Question: Write a C program where a function modifies an 
   array without returning it, using pointers.
*/

#include <stdio.h>

// Function to modify an array using pointers
void modify_array(int *arr, int size) {
    arr[0] = 100; // Modify the first element of the array
}

int main() {
    printf("Pointer Example: Modifying an Array\n");

    int nums[] = {1, 2, 3, 4, 5};
    
    printf("Before modification: %d\n", nums[0]);

    modify_array(nums, 5); // Passing array base address

    printf("After modification: %d\n", nums[0]); // Output: 100

    return 0;
}
