// C Program to Find LCM of Two Numbers

#include <stdio.h>

// Function to calculate LCM using a brute-force method
int lcm(int a, int b) {
    int max = (a > b) ? a : b;  // Find the maximum of the two numbers
    
    // Start checking multiples of the maximum number
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;  // If it's divisible by both a and b, it's the LCM
        }
        max++;  // Increment the max value and check the next multiple
    }
}

int main() {
    int num1, num2;

    // Ask user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find and print the LCM
    int result = lcm(num1, num2);
    printf("The LCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
