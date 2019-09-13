#include <iostream>
#include "player.h"

Player::Player(Card cardOne, Card cardTwo): hand_(cardOne, cardTwo)
{
    // No action required
}

void Player::receiveCard(Card card)
{
    hand_.addCard(card);
}

unsigned short Player::getTotal() const
{
    return hand_.getScore();
}

Card Player::getCardOne() const
{
    return hand_.getCardOne();
}

void Player::printHandScores() const
{
    std::cout << "Soft total (" << hand_.getSoftScore() << ") Hard total (" << hand_.getHardScore() << ")\n";
}