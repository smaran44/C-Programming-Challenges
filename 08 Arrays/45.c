// Write a C program to find the median element in a sorted array.

#include <stdio.h>

float findMedian(int arr[], int n) {
    if (n % 2 == 1) {
        // If the number of elements is odd, return the middle element
        return arr[n / 2];
    } else {
        // If the number of elements is even, return the average of the two middle elements
        return (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int n;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Ask user to input the sorted array elements
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the median
    float median = findMedian(arr, n);
    printf("The median is: %.2f\n", median);

    return 0;
}
