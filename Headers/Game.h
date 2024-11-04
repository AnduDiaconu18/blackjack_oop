#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"

class Game {
private:
    Deck deck;
    Player player;
    Player dealer;

public:
    Game(const std::string& playerName);
    void playRound();
    void determineWinner();

    // Operator de afișare
    friend std::ostream& operator<<(std::ostream& os, const Game& game);
};

#endif // GAME_H

