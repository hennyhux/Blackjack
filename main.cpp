#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "card.h"
using namespace std;


Card* randomlyGenerateCard()
{
    Card *newCard = new Card();
    return newCard;
}

void selectMode()
{
    //Regular mode

    //random mode

    //extra mode
}

int main ()
{

    selectMode();

    Card* cardArray[11];
    for (int i = 0; i < 11; i++)
    {

        cardArray[i] = randomlyGenerateCard();
    }


    for (int i = 0; i < 11; i++)
    {
        cout << "Card suit is: " << cardArray[i]->getCardSuit() << endl;
        cout << "Card number is: " << cardArray[i]->getCardNumber() << endl;
    }




}

