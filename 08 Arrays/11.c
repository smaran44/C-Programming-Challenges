//searching operation
// linear search
// input: [65, 60, 20, 10, 55, 12, 32]
// search: 12
// output: Element found at index 5

#include <stdio.h>

int main() {
    int arr[] = {65, 60, 20, 10, 55, 12, 32};
    int i, n = 7, search = 12;

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at index %d\n", i);
            return 0;//Exit the program after finding the element
            //if it is not used the program will continue to search for the element
            //if it is not used Element not found will also get printed
        }
    }

    printf("Element not found\n");
    return 0;
}
