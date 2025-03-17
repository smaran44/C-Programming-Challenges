/*write a C program that takes two arrays, displays them, sorts the first array in ascending order and
 the second in descending order, then merges them and sorts the final array in ascending and descending order.*/

 #include <stdio.h>

// Function to print an array
void printArray(int arr[], int n, const char *msg) {// we use pointer to char because we are not modifying the string
    printf("%s: ", msg);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to sort an array in ascending order
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to merge two arrays into a third array
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
}

int main() {
    int arr1[] = {34, 12, 78, 56, 23};
    int arr2[] = {88, 45, 90, 67, 21};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];

    // Display original arrays
    printArray(arr1, n1, "Original First Array");
    printArray(arr2, n2, "Original Second Array");

    // Sort first array in ascending order
    sortAscending(arr1, n1);
    printArray(arr1, n1, "First Array (Ascending)");

    // Sort second array in descending order
    sortDescending(arr2, n2);
    printArray(arr2, n2, "Second Array (Descending)");

    // Merge the two sorted arrays
    mergeArrays(arr1, n1, arr2, n2, merged);
    printArray(merged, n1 + n2, "Merged Array");

    // Sort the merged array in ascending order
    sortAscending(merged, n1 + n2);
    printArray(merged, n1 + n2, "Final Sorted Array (Ascending)");

    // Sort the merged array in descending order
    sortDescending(merged, n1 + n2);
    printArray(merged, n1 + n2, "Final Sorted Array (Descending)");

    return 0;
}
