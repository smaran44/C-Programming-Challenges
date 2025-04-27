// Write a C program for multiplication table of 12 using bitwise shift operator.

#include <stdio.h>

int main() {
    int i, result;

    // Loop to generate multiplication table for 12
    for (i = 1; i <= 10; i++) {
        // Multiply 12 by i using left shift for powers of 2
        // Using shifts to calculate 12 * i:
        result = (12 << 1) * (i >> 1); // (12 << 1) is equivalent to 12 * 2
        
        printf("12 x %d = %d\n", i, result);
    }

    return 0;
}
// 12 << a is equivalent to 12 * 2^a
// 12 >> b is equivalent to 12 / 2^b