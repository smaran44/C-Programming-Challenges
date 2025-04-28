// Write a program to convert a month name to a number of days.

#include <stdio.h>
#include <string.h>

int main() {
    char months[12][10] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char month[20];
    int found = 0;

    printf("Enter the name of the month (first letter capital): ");
    scanf("%s", month);

    for (int i = 0; i < 12; i++) {
        if (strcmp(months[i], month) == 0) {
            printf("%s has %d days.\n", months[i], daysInMonth[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid month name.\n");
    }

    return 0;
}
