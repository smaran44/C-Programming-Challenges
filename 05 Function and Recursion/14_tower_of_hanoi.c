/*
Program to Solve the Tower of Hanoi Problem in C

Problem Statement:
The Tower of Hanoi is a mathematical puzzle where you have three rods and 'n' disks of 
different sizes that can slide onto any rod. The puzzle starts with the disks stacked in 
ascending order of size on one rod (smallest at the top, largest at the bottom). 
The objective is to move the entire stack to another rod, obeying the following rules:

1. Only one disk can be moved at a time.
2. A disk can only be moved to the top of another rod.
3. No larger disk can be placed on top of a smaller disk.

The goal is to move all 'n' disks from the **source rod** to the **destination rod**, using 
an **auxiliary rod** as temporary storage.

Time Complexity: O(2^n) - Exponential Time Complexity
*/

#include <stdio.h>

// Function to implement Tower of Hanoi using recursion
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base Case: If there's only one disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Step 1: Move (n-1) disks from 'source' to 'auxiliary' using 'destination'
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the nth (largest) disk from 'source' to 'destination'
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Step 3: Move (n-1) disks from 'auxiliary' to 'destination' using 'source'
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;  

    // Input: Get number of disks from user
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    // Calling the Tower of Hanoi function
    printf("\nSteps to solve Tower of Hanoi with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, 'A', 'B', 'C');  // 'A' is source, 'B' is auxiliary, 'C' is destination

    return 0;
}
