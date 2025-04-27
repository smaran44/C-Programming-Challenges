// Write a C program to convert a decimal number into an equivalent binary number using bitwise operators.

#include <stdio.h>

void decimalToBinary(int n) {
    // We'll use 32 bits to represent the binary equivalent
    for (int i = 31; i >= 0; i--) {
        // Use the bitwise right shift operator to check each bit
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    
    // Taking the decimal number as input
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    // Calling the function to print the binary equivalent
    printf("Binary equivalent of %d is: ", num);
    decimalToBinary(num);
    
    return 0;
}
