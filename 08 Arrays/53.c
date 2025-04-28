// Write a C Program that Inputs a Polynomial p(x) of Maximum Degree 3 by Reading Its Coefficients in an Array and Then Evaluates the Polynomial at Various Values of x. Also Print This Polynomial.

#include <stdio.h>
#include <math.h>  // For pow() function

int main() {
    double coeffs[4];  // Array to store coefficients: a, b, c, d
    double x, result;
    char choice;

    // Input coefficients
    printf("Enter the coefficients for the polynomial p(x) = ax^3 + bx^2 + cx + d:\n");
    printf("Enter coefficient a (for x^3): ");
    scanf("%lf", &coeffs[0]);
    printf("Enter coefficient b (for x^2): ");
    scanf("%lf", &coeffs[1]);
    printf("Enter coefficient c (for x^1): ");
    scanf("%lf", &coeffs[2]);
    printf("Enter coefficient d (constant term): ");
    scanf("%lf", &coeffs[3]);

    // Print the polynomial
    printf("\nThe polynomial is:\n");
    printf("p(x) = %.2lfx^3 + %.2lfx^2 + %.2lfx + %.2lf\n", coeffs[0], coeffs[1], coeffs[2], coeffs[3]);

    // Evaluate at various x
    do {
        printf("\nEnter a value of x to evaluate p(x): ");
        scanf("%lf", &x);

        // Evaluate polynomial
        result = coeffs[0] * pow(x, 3) + coeffs[1] * pow(x, 2) + coeffs[2] * x + coeffs[3];
        printf("p(%.2lf) = %.2lf\n", x, result);

        // Ask user if they want to continue
        printf("Do you want to evaluate at another x? (y/n): ");
        scanf(" %c", &choice);  // Notice the space before %c to ignore newline

    } while (choice == 'y' || choice == 'Y');

    printf("\nProgram ended.\n");
    return 0;
}
