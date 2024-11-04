#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

class Card {
private:
    std::string suit;
    int value;

public:
    Card(const std::string& suit = "", int value = 0);
    int getValue() const;
    std::string getSuit() const;

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Card& card);
};

#endif // CARD_H

