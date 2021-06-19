#include <iostream>
#include <stdio.h>
using namespace std;

//Testing
//Function Prototypes
void input();
void getCards(int cards);
int cardValue (char card, int hand);
void calculateDeckValue(int hand);
void tryAgainOrQuit();
int main ()
{
    input();
    return 0;
}
void input()
{
    cin.clear();
    int cards;
    printf("Please enter a number of cards (2-5): ");
    cin >> cards;
    string ignoreLine;
    getline(cin, ignoreLine);
    if (cards > 5 || cards < 2)
    {
        printf("Number of cards entered: %d\n", cards);
        printf("That is illegal, you may try again \n");
        tryAgainOrQuit();
    }
    else
    {
        printf("Number of cards entered: %d\n", cards);
        getCards(cards);
    }
}
void getCards(int cards)
{
    char card1, card2, card3, card4, card5;
    int hand;
    printf("Please enter the faces of the cards 2-9, t, j, q, k, a: ");
    switch (cards) {
        case 2:
            cin >> card1 >> card2;
            printf("The cards entered are: %c %c \n", card1, card2);
            hand = cardValue(card1, hand);
            hand += cardValue(card2, hand);
            break;
        case 3:
            cin >> card1 >> card2 >> card3;
            printf("The cards entered are: %c %c %c \n", card1, card2, card3);
            hand = cardValue(card1, hand);
            hand += cardValue(card2, hand);
            hand += cardValue(card3, hand);
            break;
        case 4:
            cin >> card1 >> card2 >> card3 >> card4;
            printf("The cards entered are: %c %c %c %c \n", card1, card2, card3,
                   card4);
            hand = cardValue(card1, hand);
            hand += cardValue(card2, hand);
            hand += cardValue(card3, hand);
            hand += cardValue(card4, hand);
            break;
        case 5:
            cin >> card1 >> card2 >> card3 >> card4 >> card5;
            printf("The cards entered are: %c %c %c %c %c \n", card1, card2, card3,
                   card4, card5);
            hand = cardValue(card1, hand);
            hand += cardValue(card2, hand);
            hand += cardValue(card3, hand);
            hand += cardValue(card4, hand);
            hand += cardValue(card5, hand);
            break;
        default:
            printf("Something went wrong! Default case invoked \n");
            break;
    }
    calculateDeckValue(hand);
    tryAgainOrQuit();
}
void calculateDeckValue(int hand)
{
    string ignoreLine;
    getline(cin, ignoreLine);
    printf("Your hand is: %d \n" , hand);
    if (hand == 21) printf(" ---->BLACKJACK!\n");
    if (hand > 21) printf(" ---->BUSTED!\n");
}
int cardValue (char card, int hand)
{
    switch (tolower(card)) {
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case 't':
            return 10;
        case 'j':
            return 10;
        case 'q':
            return 10;
        case 'k':
            return 10;
        case 'a':
            if (hand + 11 > 21) return 1;
            if (hand + 11 < 21) return 11;
        default:
            printf("Error, %c is not a valid card! You may try again \n" , card);
            cin.clear();
            tryAgainOrQuit();
            break;
    }
}
void tryAgainOrQuit()
{
    char selection;
    printf("Type Q or q to quit, or any other character to try again: ");
    cin >> selection;
    string ignoreLine;
    getline(cin, ignoreLine);
    cin.clear();
    if (tolower(selection) != 'q')
    {
        printf("You typed: %c \n" ,selection);
        input();
    }
    else printf("You typed: %c \n" ,selection);
}