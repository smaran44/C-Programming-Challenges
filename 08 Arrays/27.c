// create a program to find the card from a deck of 52 cards

#include <stdio.h>

void identify_card(int cardNumber) {
    if (cardNumber < 1 || cardNumber > 52) {
        printf("Invalid card number. Please enter a number between 1 and 52.\n");
        return;
    }
    
    char *suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    char *denominations[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    
    int suitNumber = (cardNumber - 1) / 13;
    int denominationIndex = (cardNumber - 1) % 13;
    
    printf("%s of %s\n", denominations[denominationIndex], suits[suitNumber]);
}

int main() {
    int cardNumber;
    printf("Enter a card number (1-52): ");
    scanf("%d", &cardNumber);
    
    identify_card(cardNumber);
    
    return 0;
}
