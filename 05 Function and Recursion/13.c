#include <stdio.h>
#include <assert.h>

// Function to calculate the sum of first n natural numbers
int S(int n) {
    // Base case: if n is 0, sum is 0
    if (n == 0) 
        return 0;
    
    // Recursive case: sum of first n numbers is n + sum of (n-1)
    return n + S(n - 1);
}

// Function to compute the sum of digits of a number
int sumOfDigits(int n) {
    // Base case: if n becomes 0, return 0
    if (n == 0)
        return 0;

    // Recursive case: add last digit to sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

// Function to compute GCD using Euclidean algorithm
int GCD(int a, int b) {
    // Base case: if one number becomes 0, return the other
    if (b == 0)
        return a;
    
    // Recursive case: apply GCD rule
    return GCD(b, a % b);
}

// Function to compute power x^n recursively
int P(int x, int n) {
    // Base case: anything to the power of 0 is 1
    if (n == 0)
        return 1;
    
    // Recursive case: x^n = x * x^(n-1)
    return x * P(x, n - 1);
}

// Function to compute the sum of the first n terms of a geometric progression
float GP(float a, float r, int n) {
    // Base case: if n is 0, return 0
    if (n == 0)
        return 0;
    
    // Recursive case: a + (next term in GP)
    return a + GP(a * r, r, n - 1);
}

// Function to compute nCr (combination formula: n! / (r! * (n-r)!))
int C(int n, int r) {
    // Base case: if r == 0 or r == n, return 1 (nC0 = nCn = 1)
    if (r == 0 || r == n)
        return 1;
    
    // Recursive case: nCr = (n-1)C(r-1) + (n-1)Cr
    return C(n - 1, r - 1) + C(n - 1, r);
}

// Function to compute factorial recursively
int F(int n) {
    // Base case: 0! = 1
    if (n == 0)
        return 1;
    
    // Recursive case: n! = n * (n-1)!
    return n * F(n - 1);
}

int main() {
    // Test the recursive functions
    int num = 5;
    printf("Sum of first %d natural numbers: %d\n", num, S(num));
    printf("Sum of digits of %d: %d\n", 12345, sumOfDigits(12345));
    printf("GCD of 48 and 18: %d\n", GCD(48, 18));
    printf("%d^%d: %d\n", 2, 4, P(2, 4));
    printf("Sum of first %d terms of GP (a=1, r=2): %.2f\n", 4, GP(1, 2, 4));
    printf("%dC%d: %d\n", 5, 2, C(5, 2));
    printf("Factorial of %d: %d\n", 5, F(5));
    
    return 0;
}
