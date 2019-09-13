#ifndef BLACKJACK_CUSTOMER_H
#define BLACKJACK_CUSTOMER_H

#include "player.h"

class Customer : public Player
{
public:
    Customer(Card cardOne, Card cardTwo);
    Action getAction(Card opponentFaceUpCard) const override;
};

#endif //BLACKJACK_CUSTOMER_H
