#ifndef BLACKJACK_DEALER_H
#define BLACKJACK_DEALER_H

#include "player.h"

class Dealer : public Player
{
public:
    Dealer(Card cardOne, Card cardTwo);
    Action getAction(Card opponentFaceUpCard) const override;
};

#endif //BLACKJACK_DEALER_H
