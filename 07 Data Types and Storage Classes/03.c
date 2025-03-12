/*
   Question: Write a C program to demonstrate integer overflow in both 
   signed and unsigned integers. The program should display the maximum 
   values of an unsigned int and a signed int, increment them, and 
   observe the behavior of integer overflow.
*/

#include <stdio.h>
#include <limits.h> // Header file to access INT_MAX and UINT_MAX constants

int main() {
    // Declare an unsigned integer and assign it the maximum possible value
    unsigned int positive = UINT_MAX; 
    
    // Declare a signed integer and assign it the maximum possible value
    int normal = INT_MAX;

    // Print the maximum values before overflow
    printf("Max value of unsigned int is: %u", positive);
    printf("\nMax value of normal int is: %d", normal);

    // Increment both values to observe overflow behavior
    positive++; // This will cause unsigned int to wrap around to 0
    normal++;   // This will cause signed int to overflow and become negative

    // Print the values after overflow
    printf("\n\nAfter incrementing:");
    printf("\nMax value of unsigned int is: %u", positive); // Expected output: 0
    printf("\nMax value of normal int is: %d", normal); // Expected output: INT_MIN (negative value)
    
    return 0; // Indicate successful program execution
}
