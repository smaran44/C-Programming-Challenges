// Write a C program to reverse an array.

#include <stdio.h>

void reverseArray(int arr[], int size) {
    // Using a for loop to swap elements
    for (int i = 0; i < size / 2; i++) {
        // Swap arr[i] with arr[size - i - 1]
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int size;
    
    // Taking array size as input
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Taking array elements as input
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reversing the array
    reverseArray(arr, size);
    
    // Printing the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
