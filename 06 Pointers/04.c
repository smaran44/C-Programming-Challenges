#include <stdio.h>

// Function to find the minimum and maximum between two numbers using pointers
void min_max(int*, int*, int*, int*);

int main() {
    int first, second, min, max;

    // Welcome message
    printf("Welcome to finding Min and Max\n");

    // Taking input from the user
    printf("Please, enter the first number: ");
    scanf("%d", &first);
    printf("Now, enter the second number: ");
    scanf("%d", &second);

    // Function call with addresses of variables
    min_max(&first, &second, &min, &max);

    // Display the result
    printf("Between %d and %d, minimum is %d and maximum is %d", first, second, min, max);

    return 0;
}

// Function to determine the min and max values
void min_max(int *a, int *b, int *min, int *max) {
    if (*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}
