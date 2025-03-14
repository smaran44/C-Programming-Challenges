/*
Program: Display File Content

Description:
This program reads a file and prints its content to the console.
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");  // Open the file in read mode
    if (file == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    int c;
    while ((c = fgetc(file)) != EOF) { 
        putchar(c); // Print each character
    }
    printf("\n");

    fclose(file);  // Close the file
    return 0;
}
