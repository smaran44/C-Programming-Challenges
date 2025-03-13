/*
    Question:
    Write a C program that dynamically allocates memory for storing car details.
    The program should take user input for the car's make, model, year, and color.
    It should then display the car details and free the allocated memory properly.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure to store car details
struct Car {
    char make[25];  // Car manufacturer
    char model[25]; // Car model
    int year;       // Manufacturing year
    char color[15]; // Car color
};

// Typedef for convenience
typedef struct Car Car;

// Function prototype
void print_car(Car *car);

int main() {
    // Display welcome message
    printf("Welcome to our Dynamic Island.\n");

    // Dynamically allocating memory for a Car structure
    Car *my_car = (Car*) malloc(sizeof(Car)); 
    if (my_car == NULL) { // Checking if memory allocation was successful
        printf("Memory allocation failed!!!\n");
        return 1; // Exit the program with an error code
    }

    // Taking user input for car details
    printf("Please enter your car model: ");
    scanf("%24s", my_car->model); // Limiting input size to prevent buffer overflow

    printf("Now enter your car company: ");
    scanf("%24s", my_car->make);

    printf("Now enter your car color: ");
    scanf("%14s", my_car->color);
    // no need to use & for string input

    printf("Finally, enter your car manufacturing year: ");
    scanf("%d", &my_car->year);

    // Displaying car details
    printf("\n\nHere are your car details:\n");
    print_car(my_car);

    // Freeing allocated memory
    free(my_car);
    my_car = NULL; // Prevent dangling pointer

    return 0; // Indicating successful execution
}

// Function to print car details
void print_car(Car *car) {
    printf("This %s model car, which is %s in color, was manufactured in %d and is made by %s company.\n",
           car->model, car->color, car->year, car->make);
}
