//write a c program to find/print the mean, median, mode of an array of N integers.
// for single mode

#include <stdio.h>

// Function to calculate Mean
float find_mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Sum up all elements
    }
    return (float)sum / n;  // Return the mean (average)
}

// Function to sort the array (needed for median calculation)
void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Swap if out of order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to calculate Median
float find_median(int arr[], int n) {
    bubble_sort(arr, n);  // Sort the array first

    if (n % 2 == 0) {  // Even number of elements
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {  // Odd number of elements
        return arr[n / 2];
    }
}

// Function to calculate Mode
int find_mode(int arr[], int n) {
    int max_count = 0, mode = arr[0], count;

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = arr[i];
        }
    }

    // If no element appears more than once, return -1 (no mode)
    return (max_count > 1) ? mode : -1;
}

// Main function
int main() {
    int N;

    // Input: Size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    // Input: Elements of the array
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate Mean, Median, Mode
    float mean = find_mean(arr, N);
    float median = find_median(arr, N);
    int mode = find_mode(arr, N);

    // Print results
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    if (mode == -1) {
        printf("Mode: No mode (all values appear only once)\n");
    } else {
        printf("Mode: %d\n", mode);
    }

    return 0;
}

// mode = 3median - 2mean