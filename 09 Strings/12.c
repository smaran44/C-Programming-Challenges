// Program to Search a Character from a Character Array:

#include <stdio.h>

int main() {
    char arr[100];
    char searchChar;
    int i, found = 0;

    printf("Enter a string (character array): ");
    fgets(arr, sizeof(arr), stdin); // read a string with spaces

    printf("Enter the character to search: ");
    scanf("%c", &searchChar);

    // Search for the character
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == searchChar) {
            found = 1;
            printf("Character '%c' found at position %d.\n", searchChar, i);
            break;
        }
    }

    if (!found) {
        printf("Character '%c' not found in the array.\n", searchChar);
    }

    return 0;
}

