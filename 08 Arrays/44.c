// Write a code to find the k closest elements to a key element in an array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, key;

    // Ask user for the number of elements, the array elements, and the key
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the key and k value
    printf("Enter the key element: ");
    scanf("%d", &key);
    
    printf("Enter the number of closest elements (k): ");
    scanf("%d", &k);

    // Bubble sort based on absolute difference with the key
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (abs(arr[j] - key) > abs(arr[j + 1] - key)) {
                // Swap if the current element's difference with the key is greater
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the closest elements
    printf("The %d closest elements to %d are: ", k, key);
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
