#include "Game.h"
#include <iostream>

int main() {
    Game game("User");
    game.playRound();
    game.determineWinner();

    return 0;
}
