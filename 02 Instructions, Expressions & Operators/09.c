// swap two numbers wiithout using third variable

#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swapping using XOR
    a = a ^ b;  // Step 1: a now holds the XOR of a and b
    b = a ^ b;  // Step 2: b is now the original a
    a = a ^ b;  // Step 3: a is now the original b

    // Printing swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
//x ^ x = 0
//x ^ 0 = x
//x ^ y ^ y = x