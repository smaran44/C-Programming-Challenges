/*
    Question:
    Write a C program that defines a structure to store car details,
    including the make, model, year, and color. Initialize a car
    with predefined values and display its details using a function.
*/

#include <stdio.h>

// Defining a structure to store car details
struct Car {
    char make[25];   // Stores the car's manufacturer name
    char model[25];  // Stores the car's model name
    int year;        // Stores the manufacturing year of the car
    char color[15];  // Stores the car's color
};

// Creating a type alias for `struct Car`
typedef struct Car Car;

// Function to print car details
void print_car(Car car) {
    printf("\nCar Details:\n");
    printf("Make: %s\n", car.make);
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Color: %s\n", car.color);
}
/*void print_car(Car *car)
       printf("\nCar Details:\n");
    printf("Make: %s\n", car->make);
    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Color: %s\n", car->color);
}*/

int main() {
    // Initializing a car with predefined values
    Car ford = {.make = "Ford", .model = "Aspire", .year = 2016, .color = "Red"};

    // Calling function to display car details
    print_car(ford);
    // for pointer method use print_car(&ford);

    return 0; // Successful execution
}
