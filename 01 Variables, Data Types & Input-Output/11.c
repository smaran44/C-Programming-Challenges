//swap two numbers

#include<stdio.h>

int main() {
    int first, second;
    printf("Please enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);

    // Swapping using XOR
    first = first ^ second;   // Step 1: first now holds the XOR of first and second
    second = first ^ second;  // Step 2: second becomes original first
    first = first ^ second;   // Step 3: first becomes original second

    printf("After swapping:\n");
    printf("The value of first is %d and second is %d\n", first, second);
    return 0;
}
