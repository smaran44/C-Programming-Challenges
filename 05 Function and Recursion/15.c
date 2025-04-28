// Write a C program to test if a given number is a power of 2.

#include <stdio.h>

int isPowerOfTwo(int num) {
    if (num == 1) {
        return 1; // 2^0 = 1, base case
    }
    if (num == 0) {
        return 0; // 0 is not a power of 2
    }
    if (num % 2 != 0) {
        return 0; // Odd number is not a power of 2
    }
    return isPowerOfTwo(num / 2); // keep dividing by 2
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2\n", num);
    } else {
        printf("%d is not a power of 2\n", num);
    }
    
    return 0;
}
