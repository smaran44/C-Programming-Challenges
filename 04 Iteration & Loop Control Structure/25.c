/*Write a C program that asks the user to enter T, F, or a blank space (' ') for each question.

T = Correct answer → +2 points

F = Wrong answer → -1 point

Blank = No answer → 0 points

*/

#include <stdio.h>

int main() {
    char answers[10];
    int i, score = 0;

    printf("Enter answers (T/F/space) for 9 questions:\n");
    for (i = 0; i < 9; i++) {
        scanf(" %c", &answers[i]); // Notice the space before %c to consume any whitespace
    }

    for (i = 0; i < 9; i++) {
        if (answers[i] == 'T' || answers[i] == 't') {
            score += 2;
        } else if (answers[i] == 'F' || answers[i] == 'f') {
            score -= 1;
        } else if (answers[i] == ' ') {
            // No marks change for blank answers
        } else {
            printf("Invalid input at question %d\n", i + 1);
        }
    }

    printf("Total marks obtained: %d\n", score);

    return 0;
}
