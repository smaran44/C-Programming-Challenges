// Write a C program to check that the input pair of numbers is amicable.

// Amicable Numbers are two numbers where the sum of the proper divisors (excluding the number itself) of each number is equal to the other number.

// For example:

// The numbers 220 and 284 are amicable because:

// The sum of divisors of 220 (excluding 220 itself) is 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284.

// The sum of divisors of 284 (excluding 284 itself) is 1 + 2 + 4 + 71 + 142 = 220.

#include <stdio.h>

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 0;
    
    // Loop through all possible divisors from 1 to num/2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;  // Add the divisor to the sum
        }
    }
    return sum;
}

int main() {
    int num1, num2;
    
    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the numbers are amicable
    if (sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1) {
        printf("%d and %d are amicable numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not amicable numbers.\n", num1, num2);
    }

    return 0;
}
