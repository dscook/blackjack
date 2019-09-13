#include "customer.h"

Customer::Customer(Card cardOne, Card cardTwo): Player(cardOne, cardTwo)
{
    // No action required
}

Action Customer::getAction(Card opponentFaceUpCard) const
{
    // TODO:: Should prompt on terminal for user action
    return Twist;
}