/*
Question: Write a C program that displays a Tic-Tac-Toe board using a 2D character array.
The board should be formatted with grid lines (| and -) to resemble an actual game board.
*/

#include <stdio.h>

int main() {
    // Initializing a 3x3 Tic-Tac-Toe board with predefined values
    char board[3][3] = {
        {'X', 'O', 'O'},
        {'O', 'X', 'X'},
        {'X', 'O', 'X'}
    };

    // Displaying a welcome message
    printf("Welcome to showing tic-tac-toe board\n\n");

    // Loop to print the Tic-Tac-Toe board with formatting
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            // Printing board elements with '|' as a separator
            printf("%c", board[i][j]);
            if (j < 2) printf("|"); // Adds '|' between columns
        }
        // Printing horizontal separators between rows
        if (i < 2) printf("\n-----");
    }

    /*
    Alternative way to print the Tic-Tac-Toe board manually:
    printf("\n%c|%c|%c", board[0][0], board[0][1], board[0][2]);
    printf("\n-----");
    printf("\n%c|%c|%c", board[1][0], board[1][1], board[1][2]);
    printf("\n-----");
    printf("\n%c|%c|%c\n\n", board[2][0], board[2][1], board[2][2]);
    */

    return 0;
}
