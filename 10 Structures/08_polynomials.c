/*Write a C program to perform operations on polynomials using structures and dynamic memory allocation. Do not use linked lists.

Your program should support the following features:

Input two polynomials (as an array of structures).

Display each polynomial in a human-readable format (e.g., 3x^2 + 2x^1 + 1).

Add the two polynomials and display the result.

Evaluate the first polynomial at a given value of x.

Compute and display the derivative of the first polynomial.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Structure to represent a term of a polynomial
typedef struct {
    int coeff;  // Coefficient of the term
    int exp;    // Exponent of the term
} Term;

// Function to input polynomial terms
void inputPoly(Term poly[], int n) {
    printf("Enter the terms (coefficient and exponent):\n");
    for (int i = 0; i < n; i++) {
        printf("Term %d:\n", i + 1);
        printf("Coefficient: ");
        scanf("%d", &poly[i].coeff);
        printf("Exponent: ");
        scanf("%d", &poly[i].exp);
    }
}

// Function to display the polynomial
void displayPoly(Term poly[], int n) {
    for (int i = 0; i < n; i++) {
        if (poly[i].coeff != 0) {
            printf("%dx^%d", poly[i].coeff, poly[i].exp);
            if (i != n - 1)
                printf(" + ");
        }
    }
    printf("\n");
}

// Function to evaluate the polynomial at a given x
double evalPoly(Term poly[], int n, double x) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += poly[i].coeff * pow(x, poly[i].exp);  // coeff * x^exp
    }
    return result;
}

// Function to compute the derivative of the polynomial
int derivativePoly(Term poly[], Term deriv[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (poly[i].exp != 0) {
            deriv[j].coeff = poly[i].coeff * poly[i].exp;
            deriv[j].exp = poly[i].exp - 1;
            j++;
        }
        // If exp == 0, derivative is 0, so we skip that term
    }
    return j;  // Return number of terms in derivative
}

// Function to add two polynomials represented as arrays of structures
int addPoly(Term poly1[], int n1, Term poly2[], int n2, Term result[]) {
    int i = 0, j = 0, k = 0; // i: index for poly1, j: index for poly2, k: index for result

    // Traverse both polynomials until one ends
    while (i < n1 && j < n2) {
        // Case 1: poly1 term has a higher exponent → add it to result
        if (poly1[i].exp > poly2[j].exp) {
            result[k] = poly1[i];   // Copy the term from poly1 to result
            k++;                    // Move to the next result position
            i++;                    // Move to the next poly1 term
        }
        // Case 2: poly2 term has a higher exponent → add it to result
        else if (poly1[i].exp < poly2[j].exp) {
            result[k] = poly2[j];   // Copy the term from poly2 to result
            k++;                    // Move to the next result position
            j++;                    // Move to the next poly2 term
        }
        // Case 3: Same exponents → add the coefficients
        else {
            result[k].exp = poly1[i].exp;                          // Set the common exponent
            result[k].coeff = poly1[i].coeff + poly2[j].coeff;    // Sum the coefficients
            i++;        // Move to next term in poly1
            j++;        // Move to next term in poly2
            if (result[k].coeff != 0) {
                k++;    // Only count the result if coefficient is non-zero
            }
            // If the sum is 0 (e.g., 2x^2 + -2x^2), we skip adding it to the result
        }
    }

    // Add any remaining terms from poly1
    while (i < n1) {
        result[k] = poly1[i];   // Copy term to result
        k++;                    // Move to next result index
        i++;                    // Move to next poly1 index
    }

    // Add any remaining terms from poly2
    while (j < n2) {
        result[k] = poly2[j];   // Copy term to result
        k++;                    // Move to next result index
        j++;                    // Move to next poly2 index
    }

    return k; // Return total number of terms in the resulting polynomial
}



int main() {
    int n1, n2;

    // Input for first polynomial
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n1);
    Term *poly1 = (Term *)malloc(n1 * sizeof(Term));
    inputPoly(poly1, n1);

    // Input for second polynomial
    printf("\nEnter the number of terms in the second polynomial: ");
    scanf("%d", &n2);
    Term *poly2 = (Term *)malloc(n2 * sizeof(Term));
    inputPoly(poly2, n2);

    // Display both polynomials
    printf("\nFirst Polynomial: ");
    displayPoly(poly1, n1);
    printf("Second Polynomial: ");
    displayPoly(poly2, n2);

    // Add polynomials
    Term *sum = (Term *)malloc((n1 + n2) * sizeof(Term)); // Max possible size
    int sumCount = addPoly(poly1, n1, poly2, n2, sum);
    printf("\nSum of the polynomials: ");
    displayPoly(sum, sumCount);

    // Evaluate polynomial
    double x;
    printf("\nEnter the value of x to evaluate the first polynomial: ");
    scanf("%lf", &x);
    double result = evalPoly(poly1, n1, x);
    printf("Polynomial evaluated at x = %.2lf is: %.2lf\n", x, result);

    // Derivative
    Term *deriv = (Term *)malloc(n1 * sizeof(Term));
    int derivCount = derivativePoly(poly1, deriv, n1);
    printf("\nDerivative of the first polynomial: ");
    displayPoly(deriv, derivCount);

    // Free memory
    free(poly1);
    free(poly2);
    free(sum);
    free(deriv);

    return 0;
}
