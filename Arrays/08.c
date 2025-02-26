//traversal operation
// input: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
// output: [20, 20, 40, 40, 60, 60, 80, 80, 100, 100]

#include <stdio.h>

int main() {
int i, arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

for(i = 0; i <= 9; i = i + 2) {
arr[i] += 10; // Incrementing alternate elements by 10
}

// Display the modified array
for(i = 0; i <= 9; i++) {
printf("%d ", arr[i]);
}

return 0;
}