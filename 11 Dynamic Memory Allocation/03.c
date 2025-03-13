/*
    Question:
    Write a C program that dynamically allocates memory for a character array using calloc.
    The program should initialize all elements, display their initial values, take user input,
    and then print the entered text before freeing the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h> // Required for calloc() and free()

int main() {
    // Display welcome message
    printf("Welcome to our dynamic characters world!\n");

    // Allocating memory for 100 characters and initializing all to zero
    char *sentence = (char*) calloc(100, sizeof(char));

    // Checking if memory allocation was successful
    if (sentence == NULL) {
        printf("Memory allocation failed!!!\n");
        return 1; // Exit program with an error code
    }

    // Ensuring all elements are initialized (calloc sets them to 0)
    printf("\nEnsuring all elements are initialized (should print 100 zeros):\n");
    for (int i = 0; i < 100; i++) {
        printf(" %d", sentence[i]); // Printing ASCII values (should be all 0s)
    }

    // Taking user input
    printf("\n\nNow enter a piece of text: ");
    fgets(sentence, 100, stdin); // Using fgets for safe input

    // Displaying the entered text
    printf("\nHere is your text: %s", sentence);

    // Freeing allocated memory
    free(sentence);
    sentence = NULL; // Preventing dangling pointer

    return 0; // Indicating successful execution
}
