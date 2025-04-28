// Write a program that uses a structure named “marks” comprising of four integer members, subject1, subject2, subject3 and total, and compute the subject-wise and student-wise totals and store them as part of the structure

#include <stdio.h>

// Define structure
struct marks {
    int subject1;
    int subject2;
    int subject3;
    int total;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct marks students[n];
    int total_subject1 = 0, total_subject2 = 0, total_subject3 = 0;

    // Input marks
    for (int i = 0; i < n; i++) {
        printf("\nEnter marks for Student %d:\n", i + 1);
        printf("Subject 1: ");
        scanf("%d", &students[i].subject1);
        printf("Subject 2: ");
        scanf("%d", &students[i].subject2);
        printf("Subject 3: ");
        scanf("%d", &students[i].subject3);

        // Calculate student-wise total
        students[i].total = students[i].subject1 + students[i].subject2 + students[i].subject3;

        // Calculate subject-wise totals
        total_subject1 += students[i].subject1;
        total_subject2 += students[i].subject2;
        total_subject3 += students[i].subject3;
    }

    // Display totals
    printf("\nStudent-wise Totals:\n");
    for (int i = 0; i < n; i++) {
        printf("Total marks for Student %d = %d\n", i + 1, students[i].total);
    }

    printf("\nSubject-wise Totals:\n");
    printf("Total marks in Subject 1 = %d\n", total_subject1);
    printf("Total marks in Subject 2 = %d\n", total_subject2);
    printf("Total marks in Subject 3 = %d\n", total_subject3);

    return 0;
}
