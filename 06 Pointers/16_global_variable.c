//Make a C program that demonstrates local variables along with different ways of passing variables to functions (pass by value and pass by reference).

#include <stdio.h>

int global = 99; // Global variable

// Function modifies the global variable directly
void modifyGlobal() {
    global = 500; // Directly modifying the global variable
}

// Function using Pass by Value (Does NOT modify global)
void passByValue(int x) {
    x = 100; // This only modifies the local copy of x
}

// Function using Pass by Reference (Modifies global)
void passByReference(int *x) {
    *x = 100; // Modifies the actual variable passed
}

// Function with Local Variable (No effect on global)
void localScope() {
    int global = 200; // Local variable "shadows" the global variable
    printf("Inside localScope(), local global = %d\n", global);
}

int main() {
    printf("Initial global: %d\n", global);

    modifyGlobal();
    printf("After modifyGlobal(): %d\n", global);

    passByValue(global);
    printf("After passByValue(global): %d\n", global);

    passByReference(&global);
    printf("After passByReference(global): %d\n", global);

    localScope();
    printf("After localScope(), global = %d\n", global);

    return 0;
}
