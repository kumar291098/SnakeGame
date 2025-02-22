#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include <utility> // for std::pair

class Snake {
private:
    std::vector<std::pair<int, int>> body; // Snake's body segments (x, y)
    char direction; // Current direction of the snake (U, D, L, R)

public:
    Snake();
    void move();
    void grow();
    void setDirection(char dir);
    bool checkCollision(int width, int height) const;
    std::pair<int, int> getHead() const;
    const std::vector<std::pair<int, int>>& getBody() const;
};

#endif