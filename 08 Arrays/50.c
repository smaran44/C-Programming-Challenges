// Write a C program to convert a decimal number into an equivalent binary number without using bitwise operators.

#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32];  // Array to store binary digits
    int i = 0;

    // Special case for 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Store the binary digits in reverse order (from LSB to MSB)
    while (n > 0) {
        binary[i] = n % 2;  // Store the remainder (0 or 1)
        n = n / 2;           // Divide n by 2 to shift the number
        i++;
    }

    // Print the binary number in reverse order (MSB to LSB)
    printf("Binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;

    // Taking the decimal number as input
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Calling the function to print the binary equivalent
    decimalToBinary(num);

    return 0;
}
