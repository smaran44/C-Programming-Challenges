/* A file named “DATA” contains a series of integer numbers. 
Write a program to read these numbers and then write all ‘odd’ numbers to a file to be called ODD and all ‘even’ numbers to a file to be called EVEN
*/

#include <stdio.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int num;

    // Open the files
    dataFile = fopen("DATA.txt", "r");
    oddFile = fopen("ODD.txt", "w");
    evenFile = fopen("EVEN.txt", "w");

    // Check if DATA file opened successfully
    if (dataFile == NULL) {
        printf("Error opening DATA file.\n");
        return 1;
    }

    // Read numbers and write to ODD or EVEN files
    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close all files
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers have been separated into ODD.txt and EVEN.txt successfully.\n");

    return 0;
}
