// Write a C program that takes 2 integer sets A[] and B[] as input and prints the union between the two sets.

#include <stdio.h>

void printUnion(int A[], int B[], int sizeA, int sizeB) {
    int C[100], k = 0, i, j, found;

    // Copy elements of A[] to C[] (union set)
    for (i = 0; i < sizeA; i++) {
        C[k++] = A[i];
    }

    // Add elements of B[] to C[] if not already present
    for (i = 0; i < sizeB; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (B[i] == C[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            C[k++] = B[i];
        }
    }

    // Print the union set
    printf("Union of A and B: ");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {2, 5, 8};
    int B[] = {8, 8, 3};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    printUnion(A, B, sizeA, sizeB);

    return 0;
}
