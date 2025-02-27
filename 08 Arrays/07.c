//traversal operation
//add to to each element of the array
//input: [10, 20, 30, 40, 50]
//output: [20, 30, 40, 50, 60]

#include <stdio.h>

int main() {
    int temp, i, arr[] = {10, 20, 30, 40, 50};

    for(i = 0; i <= 4; i++) {
        temp = arr[i] + 10;
        printf("%d ", temp);
    }

    return 0;
}
