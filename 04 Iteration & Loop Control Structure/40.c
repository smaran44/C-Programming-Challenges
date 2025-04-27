// prime

#include <stdio.h>

int main() {
    int num, i, is_prime = 1;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for prime number
    if (num <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    // Display result
    if (is_prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
