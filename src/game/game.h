#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include "shoe.h"
#include "customer.h"
#include "dealer.h"

enum Result { CustomerWin, DealerWin, Draw };

class Game
{
public:
    Game();
    Result play();
private:
    Shoe shoe_;
};

#endif //BLACKJACK_GAME_H
