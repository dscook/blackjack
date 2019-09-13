#include "card.h"

#define PICTURE_CARD_VALUE 10

Card::Card(Suit suit, unsigned short value)
{
    suit_ = suit;
    value_ = value;

    // Picture cards (Jack, Queen, King) are worth 10
    // They may be passed in as (11, 12, 13) respectively
    if (value > PICTURE_CARD_VALUE)
    {
        value_ = PICTURE_CARD_VALUE;
    }
}

unsigned short Card::getValue() const
{
    return value_;
}