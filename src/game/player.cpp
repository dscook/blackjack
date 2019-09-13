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
    hand_.getScore();
}

Card Player::getCardOne() const
{
    return hand_.getCardOne();
}