/*Function Pointers (Advanced Use Case)
Allows passing functions as arguments for callbacks or dynamic function selection.*/

/*
   Question: Write a C program to demonstrate function pointers 
   by storing and calling a function using a pointer.
*/

#include <stdio.h>

// Function to be called via function pointer
void greet() {
    printf("Hello from a function pointer!\n");
}

int main() {
    printf("Pointer Example: Function Pointers\n");

    // Declaring a function pointer and assigning address of greet()
    void (*func_ptr)() = greet;

    // Calling the function using the function pointer
    func_ptr(); 

    return 0;
}


