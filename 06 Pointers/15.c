/*
    Question: Write a C program to create a simple linked list using pointers.
*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
struct Node {
    int data; // Data part
    struct Node *next; // Pointer to next node
};

int main() {
    // Creating the first node dynamically
    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->data = 10; // Assign data
    head->next = NULL; // Set next pointer to NULL

    printf("Node Data: %d\n", head->data); // Print node data

    free(head); // Free allocated memory to prevent memory leak
    return 0;
}
