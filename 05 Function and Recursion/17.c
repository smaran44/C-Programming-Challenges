// Write a recursive function that take n (n>0) words as input and print them in reverse order on separate lines
#include <stdio.h>

// Recursive function to input and print words in reverse
void reverseWords(int n) {
    char word[100]; // Array to store one word at a time

    if (n == 0)
        return;  // Base case: no more words

    // Input one word
    scanf("%s", word);

    // Recursive call for the rest
    reverseWords(n - 1);

    // After recursion, print the current word
    printf("%s\n", word);
}

int main() {
    int n;

    printf("Enter number of words (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. n must be greater than 0.\n");
        return 1; // Exit if n is invalid
    }

    printf("Enter %d words:\n", n);
    reverseWords(n);

    return 0;
}
