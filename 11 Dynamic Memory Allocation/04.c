/*
    Question:
    Write a C program that dynamically allocates memory for two points (start and end) of a line.
    The program should take user input for the coordinates of both points, display them, 
    and ensure memory is properly managed using malloc and free.
*/

#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

// Defining a structure for a 2D point
typedef struct {
    int x;
    int y;
} Point;

// Function prototypes
void input_point(Point*);
void show_point(Point*);

int main() {
    // Display welcome message
    printf("Welcome to dynamic points\n");

    // Allocating memory for start and end points
    Point *start = (Point*) malloc(sizeof(Point));
    Point *end = (Point*) malloc(sizeof(Point));

    // Checking if memory allocation was successful
    if (start == NULL || end == NULL) {
        printf("Memory allocation failed!!!\n");
        return 1; // Exit program with an error code
    }

    // Taking user input for the start and end points
    printf("\nPlease enter the details for the starting point of your line:");
    input_point(start);
    printf("\nNow enter the details for the ending point of your line:");
    input_point(end);

    // Displaying the entered points
    printf("\nHere are the details of your points:");
    show_point(start);
    show_point(end);

    // Freeing allocated memory
    free(start);
    free(end);
    start = end = NULL; // Preventing dangling pointer

    return 0; // Indicating successful execution
}

// Function to take input for a point
void input_point(Point *point) {
    printf("\nEnter x coordinate: ");
    scanf("%d", &point->x);
    printf("Enter y coordinate: ");
    scanf("%d", &point->y);
}

// Function to display a point
void show_point(Point *point) {
    printf("\nCoordinates: (%d, %d)", point->x, point->y);
}
