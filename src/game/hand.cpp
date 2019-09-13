#include "hand.h"

Hand::Hand(Card cardOne, Card cardTwo)
{
    cards_.push_back(cardOne);
    cards_.push_back(cardTwo);
}

Card Hand::getCardOne() const
{
    return cards_.front();
}

unsigned short Hand::getScore() const
{
    unsigned short maxScore = 0;

    unsigned short softScore = getSoftScore();
    unsigned short hardScore = getHardScore();

    if (softScore <= 21)
    {
        maxScore = softScore;
    }

    if (hardScore <= 21 && hardScore > maxScore)
    {
        maxScore = hardScore;
    }

    return maxScore;
}

void Hand::addCard(Card card)
{
    cards_.push_back(card);
}

unsigned short Hand::getSoftScore() const
{
    unsigned short score = 0;

    for (const auto& card : cards_)
    {
        if (card.getValue() == 1)
        {
            score += 11;
        }
        else
        {
            score += card.getValue();
        }
    }

    return score;
}

unsigned short Hand::getHardScore() const
{
    unsigned short score = 0;

    for (const auto& card : cards_)
    {
        score += card.getValue();
    }

    return score;
}