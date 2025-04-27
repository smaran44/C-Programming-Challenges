//  check if a number is even or odd using bitwise operators.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is Odd\n", num);
    else
        printf("%d is Even\n", num);

    return 0;
}
