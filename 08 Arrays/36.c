//C Program to find the second largest element of an array by using bubble sort

#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are needed.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort to sort the array in descending order
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Now the largest element is at arr[0]
    // Find the first element that is smaller than the largest
    for(i = 1; i < n; i++) {
        if(arr[i] < arr[0]) {
            printf("The second largest element is: %d\n", arr[i]);
            return 0;
        }
    }

    printf("No second largest element found.\n");
    return 0;
}
