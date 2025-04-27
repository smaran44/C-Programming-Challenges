// write a c program to find the GCD of two numbers using the Euclidean algorithm

#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Update b to the remainder of a divided by b
        a = temp;   // Update a to the previous value of b
    }
    return a;  // When b becomes 0, a contains the GCD
}

int main() {
    int num1, num2;

    // Ask user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find and print the GCD
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
