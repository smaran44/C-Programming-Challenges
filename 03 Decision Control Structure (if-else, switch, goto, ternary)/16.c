// Menu-driven program to implement the Voting System.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int votesA = 0, votesB = 0, votesC = 0;
    int choice, vote;

    while (1) {
        printf("\n--- Voting System Menu ---\n");
        printf("1. Cast Vote\n");
        printf("2. View Vote Count\n");
        printf("3. View Leading Candidate\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Vote for:\n1. Candidate A\n2. Candidate B\n3. Candidate C\nEnter your vote: ");
                scanf("%d", &vote);
                if (vote == 1)
                    votesA++;
                else if (vote == 2)
                    votesB++;
                else if (vote == 3)
                    votesC++;
                else
                    printf("Invalid Vote!\n");
                break;
            case 2:
                printf("Votes for Candidate A: %d\n", votesA);
                printf("Votes for Candidate B: %d\n", votesB);
                printf("Votes for Candidate C: %d\n", votesC);
                break;
            case 3:
                if (votesA > votesB && votesA > votesC)
                    printf("Candidate A is leading.\n");
                else if (votesB > votesA && votesB > votesC)
                    printf("Candidate B is leading.\n");
                else if (votesC > votesA && votesC > votesB)
                    printf("Candidate C is leading.\n");
                else
                    printf("No winner (Tie)!\n");
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
