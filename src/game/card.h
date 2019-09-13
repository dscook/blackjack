#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

enum Suit { Hearts, Diamonds, Clubs, Spades };

class Card
{
public:
    Card(Suit suit, unsigned short value);
    unsigned short getValue() const;
private:
    Suit suit_;
    unsigned short value_;
};

#endif //BLACKJACK_CARD_H
