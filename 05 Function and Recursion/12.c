// find whether a number is prime or not

#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) {
        return -1; // Numbers less than or equal to 1 are neither prime nor composite
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Found a divisor, so it's composite
        }
    }
    return 1; // No divisors found, it's prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = is_prime(num);
    if (result == -1) {
        printf("%d is neither prime nor composite.\n", num);
    } else if (result == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is a composite number.\n", num);
    }
    
    return 0;
}
