//
// Created by Henry on 6/19/2021.
//

enum Suits {Clubs, Diamonds, Hearts, Spades};


class Card {

public:

    //Constructor(s)
    Card();

    //Getter Functions
    std::string getCardSuit();
    int getCardNumber();


    //Helper functions


private:

    int cardNumber;
    Suits suit;

};


