#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>
#include <iostream>

class Player {
private:
    std::vector<Card> hand;
    std::string name;

public:
    Player(const std::string& name = "Player");
    void addCard(const Card& card);
    int calculateScore() const;

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Player& player);
};

#endif // PLAYER_H

