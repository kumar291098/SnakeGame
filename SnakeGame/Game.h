#ifndef GAME_H
#define GAME_H

#include "Board.h"

class Game {
private:
    Board board;

public:
    Game(int width, int height);
    void run();
};

#endif