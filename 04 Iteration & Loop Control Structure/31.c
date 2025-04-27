// Write a program using for loop to calculate the factorial of a number

#include <stdio.h>

int main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using a for loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}
