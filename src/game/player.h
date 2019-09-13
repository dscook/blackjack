#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include "hand.h"

enum Action { Stick, Twist };

class Player
{
public:
    Player(Card cardOne, Card cardTwo);
    void receiveCard(Card card);
    unsigned short getTotal() const;
    Card getCardOne() const;
    virtual Action getAction(Card opponentFaceUpCard) const = 0;
protected:
    Hand hand_;
};

#endif //BLACKJACK_PLAYER_H
