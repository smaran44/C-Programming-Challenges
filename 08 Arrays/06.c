/*print the pattern
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {  // Loop for rows
        for (j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

