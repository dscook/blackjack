#include "shoe.h"
#include <array>
#include <chrono>
#include <random>
#include <algorithm>

#define NUM_CARDS_IN_DECK 52

Shoe::Shoe(unsigned short numberOfDecks)
{
    numberOfDecks_ = numberOfDecks;
    createShoe();
}

void Shoe::createShoe()
{
    // Create each deck, adding all cards to a single vector
    for (int i = 0; i < numberOfDecks_; i++)
    {
        // Create each value card
        for (int value = 1 ; value <= 13 ; value++)
        {
            // Create one of each suit for value card
            for (int suitInt = Hearts; suitInt != Spades; suitInt++)
            {
                Suit suit = static_cast<Suit>(suitInt);
                Card card = Card(suit, value);
                cards_.push_back(card);
            }
        }
    }

    // Shuffle the cards from all decks
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(cards_.begin(), cards_.end(), std::default_random_engine(seed));
}

Card Shoe::dealCard()
{
    if (cards_.empty())
    {
        createShoe();
    }

    Card toDeal = cards_.back();
    cards_.pop_back();

    return toDeal;
}