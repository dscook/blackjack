#include "dealer.h"

Dealer::Dealer(Card cardOne, Card cardTwo): Player(cardOne, cardTwo)
{
    // No action required
}

Action Dealer::getAction(Card opponentFaceUpCard) const
{
    // Face up card is irrelevant to the dealer, in reality they can see all of the customer's cards.
    // However, the dealer operates on a fixed strategy: twist if <= 16, stick > 16.

    // Assumes dealer sticks on soft totals (ace as 11) of 17 or more
    if (hand_.getScore() <= 16)
    {
        return Twist;
    }
    else
    {
        return Stick;
    }
}

