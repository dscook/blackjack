#include "customer.h"
#include <iostream>

Customer::Customer(Card cardOne, Card cardTwo): Player(cardOne, cardTwo)
{
    // No action required
}

Action Customer::getAction(Card opponentFaceUpCard) const
{
    std::cout << "Dealers face up card is of value: " << opponentFaceUpCard.getValue() << "\n";
    std::cout << "Your scores are: ";
    printHandScores();

    if (hand_.getHardScore() > 21)
    {
        std::cout << "You are bust\n";
        return Stick;
    }

    bool validInput = false;
    Action action = Stick;

    // Prompt the user for the action to take
    while (!validInput)
    {
        std::cout << "Stick (s) or Twist (t)?\n";
        char stickOrTwist;
        std::cin >> stickOrTwist;
        if (stickOrTwist == 's')
        {
            action = Stick;
            validInput = true;
        }
        else if (stickOrTwist == 't')
        {
            action = Twist;
            validInput = true;
        }
    }

    return action;
}