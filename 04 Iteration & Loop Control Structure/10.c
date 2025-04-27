// Program to check whether a given number is an Armstrong number

#include <stdio.h>
#include <math.h>  // Needed for pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
/*An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example:
For 3-digit numbers
153 → =1+125+27=153 ✅ (Armstrong number)
370 → =27+343+0=370 ✅
947 → =729+64+343=1136 ❌ (Not an Armstrong number)
For 4-digit numbers
9474 → =6561+256+2401+256=9474 ✅*/