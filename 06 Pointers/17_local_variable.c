//Make a C program that demonstrates local variables along with different ways of passing variables to functions (pass by value and pass by reference).

#include <stdio.h>

// Function using Pass by Value (Does NOT modify original local variable)
void passByValue(int x) {
    x = 100;  // Modifies only the local copy of x
}

// Function using Pass by Reference (Modifies original variable)
void passByReference(int *x) {
    *x = 100;  // Modifies the actual variable passed
}

// Function to test local scope
void localScope() {
    int localVar = 50;  // Local variable inside localScope()
    printf("Inside localScope(), localVar = %d\n", localVar);
}

// Function to modify local variable using pointer (pass by reference)
void modifyLocal(int *localVar) {
    *localVar = 200;  // Modifies the actual variable passed
}

int main() {
    int localVar = 10;  // Local variable in main()

    printf("Initial localVar: %d\n", localVar);

    passByValue(localVar);
    printf("After passByValue(localVar): %d\n", localVar);

    passByReference(&localVar);
    printf("After passByReference(localVar): %d\n", localVar);

    localScope(); // Calls localScope(), but its localVar is separate

    modifyLocal(&localVar);
    printf("After modifyLocal(localVar): %d\n", localVar);

    return 0;
}

