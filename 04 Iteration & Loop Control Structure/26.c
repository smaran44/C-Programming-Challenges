// Write a C program to print the prime factors of a number

#include <stdio.h>

void primeFactors(int n) {
    // Divide by 2 until n is even
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }
    
    // Divide by odd numbers from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d", n);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);
    primeFactors(num);
    return 0;
}
