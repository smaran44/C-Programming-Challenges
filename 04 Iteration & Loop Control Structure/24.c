//Write a C program to test if a given number is a power of 2.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d is not a power of 2\n", num);
    } else {
        while (num > 1) {
            if (num % 2 != 0) {
                printf("%d is not a power of 2\n", num);
                return 0;
            }
            num = num / 2;
        }
        printf("It is a power of 2\n");
    }
    
    return 0;
}
