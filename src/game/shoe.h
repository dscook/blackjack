#ifndef BLACKJACK_SHOE_H
#define BLACKJACK_SHOE_H

#include "card.h"
#include <vector>

class Shoe
{
public:
    Shoe(unsigned short numberOfDecks);
    Card dealCard();
private:
    void createShoe();
    unsigned short numberOfDecks_;
    std::vector<Card> cards_;
};

#endif //BLACKJACK_SHOE_H
