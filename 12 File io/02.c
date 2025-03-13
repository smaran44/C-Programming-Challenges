/*
    Question:
    Write a C program that reads integers from a file named "numbers.txt",
    calculates their sum, and displays the total sum.
*/

#include <stdio.h>

int main() {
    const char filename[] = "numbers.txt";
    FILE *file = fopen(filename, "r");

    // File opening error handling
    if (file == NULL) {
        printf("Error: File '%s' could not be opened.\n", filename);
        return 1;
    }

    int temp, sum = 0;

    // Reading numbers and calculating sum
    while (fscanf(file, "%d", &temp) == 1) {
        sum += temp;
    }

    // Displaying the sum
    printf("\nThe sum of all numbers in '%s' is: %d\n", filename, sum);

    // Closing the file
    fclose(file);

    return 0;
}
