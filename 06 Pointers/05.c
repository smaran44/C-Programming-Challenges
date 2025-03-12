/*Modifying a Variable Inside a Function
If you want a function to modify a variable’s value in the caller, pass it by reference using a pointer.
Example: Updating an array size after deletion.*/

/*
   Question: Write a C program where a function modifies 
   a variable’s value using a pointer.
*/

#include <stdio.h>

// Function to modify the value of a variable using a pointer
void update_value(int *x) {
    *x = 10; // Modify the original variable
}

int main() {
    printf("Pointer Example: Modifying a Variable\n");

    int a = 5;
    printf("Before function call: %d\n", a);

    update_value(&a); // Passing the address of 'a' to modify its value

    printf("After function call: %d\n", a); // Output: 10

    return 0;
}
