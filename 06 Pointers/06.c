/*Returning Multiple Values
Functions in C can return only one value. Pointers allow returning multiple values.*/

/*
   Question: Write a C program where a function swaps two numbers 
   using pointers and reflects the changes in the main function.
*/

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Pointer Example: Swapping Two Numbers\n");

    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y); // Passing addresses to swap values

    printf("After swapping: x = %d, y = %d\n", x, y); // Output: x = 10, y = 5

    return 0;
}
