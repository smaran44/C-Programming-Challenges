// C program that takes an integer input from the user and checks whether the number is a palindrome or not.

#include <stdio.h>

int main() {
    int num, reverse = 0, remainder, original;

    // Take user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;        // Get the last digit
        reverse = reverse * 10 + remainder;  // Build the reversed number
        num = num / 10;  // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (original == reverse) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
