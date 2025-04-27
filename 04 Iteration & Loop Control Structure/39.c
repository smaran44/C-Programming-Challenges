// Write a program in C to check whether a number can be expressed as the sum of two primes.

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    for (int i = 2; i <= num / 2; i++) {
        int j = num - i;
        if (isPrime(i) && isPrime(j)) {
            printf("%d = %d + %d\n", num, i, j);
        }
    }
    
    return 0;
}
