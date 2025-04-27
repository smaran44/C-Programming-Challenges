// write a program to print the ASCII value from A to Z

#include <stdio.h>
int main() {
    char ch;
    // Loop through characters A to Z
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("ASCII value of %c = %d\n", ch, ch);
    }
    return 0;
}