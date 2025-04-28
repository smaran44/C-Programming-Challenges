/*Write a program to open a file named INVENTORY which is received as command
line argument and store in it the following data:
Item name Item number Price Quantity
AAA-1 111 18.00 115
BBB-2 125 36.00 75
CCC-3 247 32.00 104
Extend the program to read this data from the file INVENTORY and display the
inventory table with the value of each item.*/

#include <stdio.h>

struct Item {
    char name[20];
    int number;
    float price;
    int quantity;
};

void writeToFile() {
    FILE *file = fopen("INVENTORY.txt", "w");

    struct Item items[] = {
        {"AAA-1", 111, 18.00, 115},
        {"BBB-2", 125, 36.00, 75},
        {"CCC-3", 247, 32.00, 104}
    };

    for (int i = 0; i < 3; i++) {
        fprintf(file, "%s %d %.2f %d\n", items[i].name, items[i].number, items[i].price, items[i].quantity);
    }

    fclose(file);
}

void readFromFile() {
    FILE *file = fopen("INVENTORY.txt", "r");

    struct Item item;
    printf("Inventory:\n");
    printf("Item Name\tItem Number\tPrice\tQuantity\tValue\n");
    while (fscanf(file, "%s %d %f %d", item.name, &item.number, &item.price, &item.quantity) != EOF) {
        float value = item.price * item.quantity;
        printf("%s\t%d\t%.2f\t%d\t%.2f\n", item.name, item.number, item.price, item.quantity, value);
    }

    fclose(file);
}

int main() {
    writeToFile();
    readFromFile();
    return 0;
}
