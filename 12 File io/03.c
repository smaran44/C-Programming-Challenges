/*
    Question:
    Write a C program that copies the content of "kgcoding.txt" into "copy.txt".
*/

#include <stdio.h>

int main() {
    printf("Welcome to File Copying\n");

    // Opening the source file for reading
    FILE *source_file = fopen("kgcoding.txt", "r");
    if (source_file == NULL) {
        printf("Error: Could not open 'kgcoding.txt' for reading.\n");
        return 1;
    }

    // Opening the destination file for writing
    FILE *dest_file = fopen("copy.txt", "w");
    if (dest_file == NULL) {
        printf("Error: Could not open 'copy.txt' for writing.\n");
        fclose(source_file);
        return 1;
    }

    // Copying file contents
    char c;
    while ((c = fgetc(source_file)) != EOF) {
        fputc(c, dest_file);
    }

    printf("File copied successfully from 'kgcoding.txt' to 'copy.txt'.\n");

    // Closing files
    fclose(source_file);
    fclose(dest_file);

    return 0;
}
