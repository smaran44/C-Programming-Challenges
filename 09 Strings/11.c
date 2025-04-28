//Write a C Program to convert characters of a string to upper case.

#include <stdio.h>
#include <ctype.h> // For toupper() function

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string with spaces

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]); // Convert each character to uppercase
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
