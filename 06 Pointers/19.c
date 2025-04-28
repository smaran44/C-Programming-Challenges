// Write a program in C to find the largest of three integer numbers using pointers.

#include <stdio.h>

void findLargest(int *a, int *b, int *c) {
    int largest;
    if (*a >= *b && *a >= *c) {
        largest = *a;
    } else if (*b >= *a && *b >= *c) {
        largest = *b;
    } else {
        largest = *c;
    }
    printf("The largest number is: %d\n", largest);
}

int main() {
    int num1, num2, num3;
    
    // Taking input from the user
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Passing addresses of the variables to the function
    findLargest(&num1, &num2, &num3);
    
    return 0;
}
