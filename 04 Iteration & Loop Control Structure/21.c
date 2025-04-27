//Write a C Program to find sum of first and last digit of a number?

#include <stdio.h>

int main() {
    int num, lastDigit, firstDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find last digit
    lastDigit = num % 10;

    // Find first digit
    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);

    return 0;
}
