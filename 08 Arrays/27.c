//write a c program to find/print the mean, median, mode of an array of N integers.
// for more than one mode

#include <stdio.h>

// Function to calculate Mean
float find_mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

// Function to sort the array (needed for median calculation)
void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to calculate Median
float find_median(int arr[], int n) {
    bubble_sort(arr, n); 

    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

// Function to find Mode (handles multiple modes)
void find_mode(int arr[], int n) {
    int max_count = 0, count;
    int mode[n];  // Store multiple modes
    int mode_index = 0; // Index to track multiple modes

    // Find the maximum frequency
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
        }
    }

    // Find all numbers that appear `max_count` times
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == max_count) {
            // Store mode if not already in the mode list
            int already_in_mode = 0;
            for (int k = 0; k < mode_index; k++) {
                if (mode[k] == arr[i]) {
                    already_in_mode = 1;
                    break;
                }
            }
            if (!already_in_mode) {
                mode[mode_index++] = arr[i];  // Store unique modes
            }
        }
    }

    // Print modes
    if (max_count == 1) {
        printf("Mode: No mode (all values appear only once)\n");
    } else {
        printf("Mode: ");
        for (int i = 0; i < mode_index; i++) {
            printf("%d ", mode[i]);  // Print multiple modes
        }
        printf("\n");
    }
}

// Main function
int main() {
    int N;

    // Input: Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    // Input: Array elements
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute Mean and Median
    float mean = find_mean(arr, N);
    float median = find_median(arr, N);

    // Print Mean and Median
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);

    // Compute and Print Mode(s)
    find_mode(arr, N);

    return 0;
}
