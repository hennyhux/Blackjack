//
// Created by Henry on 6/19/2021.
//
#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <ctime>
#include "card.h"

//Default constructor
Card::Card()
{


    int cardNum = (rand() % 13) + 1;
    int cardSuit = (rand() % 3) + 0;

    this->cardNumber = cardNum;

    switch (cardSuit)
    {
        case 0:
            this->suit = Clubs;
            break;

        case 1:
            this->suit = Diamonds;
            break;

        case 2:
            this->suit = Hearts;
            break;

        case 3:
            this->suit = Spades;
            break;
    }

}


//Return card number
int Card::getCardNumber()
{
    return this->cardNumber;
}

//Return card suit
std::string Card::getCardSuit()
{
    switch (this->suit)
    {
        case 0:
            return "Clubs";

        case 1:
            return "Diamonds";

        case 2:
            return "Hearts";

        case 3:
            return "Spades";
    }
}
