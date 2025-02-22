#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Snake.h"
#include "Food.h"

class Board {
private:
    int width, height;
    Snake snake;
    Food food;

public:
    Board(int w, int h);
    void draw() const;
    void update();
    bool isGameOver() const;
    void handleInput(char input);
};

#endif