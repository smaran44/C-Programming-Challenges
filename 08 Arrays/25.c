// Program to calculate the sum of odd and even numbers in an array

#include <stdio.h>

int main() {
    int N;

    // Input: Size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];  // Declare an array of size N
    int sum_even = 0, sum_odd = 0;  // Initialize sum variables

    // Input: Array elements
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read elements

        // Check if the number is even or odd and update sums
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];  // Add to even sum
        } else {
            sum_odd += arr[i];   // Add to odd sum
        }
    }

    // Output: Print the sums
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
