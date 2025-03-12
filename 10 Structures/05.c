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

// Function prototype to display car details
void print_car(Car *car);

int main() {
    // Initializing a car with predefined values using designated initializers
    Car ford = {.make = "Ford", .model = "Aspire", .year = 2016, .color = "Red"};

    printf("Welcome to our Car World\n"); // Displaying a welcome message

    print_car(&ford); // Function call to display car details

    return 0; // Indicating successful execution
}

// Function to display car details
void print_car(Car *car) {
    printf("\nThis %s model of car, which is of %s color, was purchased in %d year, and is made by %s company.\n",
           car->model, car->color, car->year, car->make);
}
