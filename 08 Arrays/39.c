//Write a C Program to enter a decimal number and display the binary equivalent of this number.

#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32]; // Array to store binary number
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary equivalent: ");
    decimalToBinary(decimalNumber);

    return 0;
}
