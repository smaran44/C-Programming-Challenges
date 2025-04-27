// Write a C program that displays all the numbers between a user input range that are divisible by 2 as well as by 3

#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the start range: ");
    scanf("%d", &start);
    printf("Enter the end range: ");
    scanf("%d", &end);

    printf("Numbers divisible by both 2 and 3 between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
