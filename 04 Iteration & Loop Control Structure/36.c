// Write a C program which will take two integer numbers as an input from user and print the sum without using any arithmetic operator.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using bitwise operator for addition
    while (b != 0) {
        int carry = a & b;  // Carry now contains common set bits of a and b
        a = a ^ b;  // Sum of bits where at least one of the bits is not set
        b = carry << 1;  // Carry is shifted by one so that adding it to a gives the required sum
    }

    printf("Sum: %d\n", a);
    return 0;
}
