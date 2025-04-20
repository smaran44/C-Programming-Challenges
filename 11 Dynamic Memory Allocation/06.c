// Question: Write a program to dynamically allocate memory for storing details of 'n' students,
// calculate the average marks, and display the details of students scoring above the average.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for Student
typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

int main() {
    

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    Student *students = (Student *)malloc(n * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        // Flush the input buffer before using fgets
        while (getchar() != '\n');  // Clear newline left by scanf

        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove the trailing newline character (if any)
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        //strcspn() returns the length of the string before the first occurrence of '\n'
        // So we can use it to replace '\n' with '\0' to terminate the string properly

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Calculate average marks
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].marks;
    }
    float avg = sum / n;
    printf("\nAverage Marks = %.2f\n", avg);

    // Print students scoring above average
    printf("\nStudents scoring above average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > avg) {
            printf("Name: %s, Roll: %d, Marks: %.2f\n",
                   students[i].name, students[i].roll, students[i].marks);
        }
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}
