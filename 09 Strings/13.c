// Write a C program to implement password registration.

#include <stdio.h>
#include <string.h>
#include <ctype.h>// For character type functions like isupper, islower, isdigit

int isValidPassword(char password[]) {
    if (strlen(password) < 8) return 0; // Check length
    
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    
    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else if (!isalnum(password[i])) hasSpecial = 1;
    }
    
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];
    
    printf("Enter password: ");
    scanf("%s", password);
    
    if (isValidPassword(password)) {
        printf("Password registered successfully.\n");
    } else {
        printf("Password is invalid. It must be at least 8 characters long, contain at least one uppercase letter, one lowercase letter, one digit, and one special character.\n");
    }
    
    return 0;
}
