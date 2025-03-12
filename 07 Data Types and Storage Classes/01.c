/*
    Question:
    Write a C program to convert a given distance in kilometers to miles.
    The program should take the distance in kilometers as input and output 
    the equivalent distance in miles. Use the conversion factor:
    1 kilometer = 0.621371 miles.
*/

#include <stdio.h>

int main() {
    const float MILE_PER_KM = 0.621371; // Conversion factor
    float kms;  // Changed to float to support decimal values
    printf("Welcome to Distance Converter.\n");
    printf("Please enter the kilometers: ");
    scanf("%f", &kms);  // Changed to %f for floating-point input

    float miles = kms * MILE_PER_KM;  // Correct type for conversion
    printf("The distance in miles is: %.2f\n", miles);  // Using %.2f to show 2 decimal places

    return 0;
}
