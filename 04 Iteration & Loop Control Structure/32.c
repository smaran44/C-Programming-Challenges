// Write a C program to input a number from the user in a loop till the user enters -1 and count how many numbers inputted are positive, negative, and zero valued.

#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;

    // Loop to input numbers until -1 is entered
    printf("Enter numbers (enter -1 to stop):\n");
    do {
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else if (num == 0) {
            zero++;
        }
    } while (num != -1);

    // Output the counts
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zero numbers: %d\n", zero);

    return 0;
}
