#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H

#include "card.h"
#include <vector>

class Hand
{
public:
    Hand(Card cardOne, Card cardTwo);
    Card getCardOne() const;
    unsigned short getScore() const;
    void addCard(Card card);
private:
    unsigned short getSoftScore() const;
    unsigned short getHardScore() const;
    std::vector<Card> cards_;
};

#endif //BLACKJACK_HAND_H
