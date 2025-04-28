// Write a C program to find the number of duplicate elements in any one-dimensional array of finite size.

#include <stdio.h>

int main() {
    int arr[10], n, i, j, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break; // To avoid counting duplicates multiple times
            }
        }
    }
    
    printf("Number of duplicate elements: %d\n", count);
    
    return 0;
}
