/*
Question:
Write a C program to check whether a given number is a palindrome 
or not using recursion. A palindrome number reads the same forward 
and backward (e.g., 121, 1331).
*/

#include<stdio.h>

// Function prototype declaration
int reverse(int num, int rev);

int main() {
    int num; // Variable to store user input

    // Display a welcome message
    printf("Welcome to Palindrome Checker\n");

    // Prompt the user to enter a number
    printf("Please enter the number: ");
    scanf("%d", &num);

    // Reverse the number using recursion
    int rev = reverse(num, 0);

    // Check if the original number is equal to its reverse
    if (num == rev) {
        printf("%d is a palindrome", num);
    } else {
        printf("%d is not a palindrome", num);
    }

    return 0;
}

// Recursive function to reverse a number
int reverse(int num, int rev) {
    // Base case: When num becomes 0, return the reversed number
    if (num == 0) {
        return rev;
    }

    // Extract the last digit of num
    int remainder = num % 10;

    // Remove the last digit from num and update rev
    return reverse(num / 10, rev * 10 + remainder);
}
