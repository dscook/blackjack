#include "dealer.h"
#include <iostream>

Dealer::Dealer(Card cardOne, Card cardTwo): Player(cardOne, cardTwo)
{
    // No action required
}

Action Dealer::getAction(Card opponentFaceUpCard) const
{
    // Face up card is irrelevant to the dealer, in reality they can see all of the customer's cards.
    // The dealer operates on a fixed strategy: twist if <= 16, stick > 16.

    std::cout << "Dealer scores are: ";
    printHandScores();

    // Assumes dealer sticks on soft totals (ace as 11) of 17 or more
    if (hand_.getScore() <= 16)
    {
        std::cout << "Dealer twisting\n";
        return Twist;
    }
    else
    {
        if (hand_.getScore() <= 21)
        {
            std::cout << "Dealer sticking\n";
        }
        else
        {
            std::cout << "Dealer is bust\n";
        }
        return Stick;
    }
}

