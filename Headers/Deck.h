#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <vector>
#include <algorithm>
#include <random>

class Deck {
private:
    std::vector<Card> cards;
    void initializeDeck();

public:
    Deck();
    Card dealCard();
    void shuffle();

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Deck& deck);
};

#endif // DECK_H
