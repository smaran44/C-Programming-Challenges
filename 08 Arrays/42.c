// Write a code to delete all duplicate elements from an array.

#include <stdio.h>

int main() {
    int arr[100], n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int temp[100]; // To store unique elements
    int k = 0;     // Index for temp array
    
    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;
        
        // Check if arr[i] is already in temp
        for(int j = 0; j < k; j++) {
            if(arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        // If not duplicate, add to temp
        if(!isDuplicate) {
            temp[k] = arr[i];
            k++;
        }
    }
    
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    
    return 0;
}
