#ifndef FOOD_H
#define FOOD_H

#include <utility> // for std::pair

class Food {
private:
    std::pair<int, int> position;
    int width, height; // Store width and height as member variables
public:
    Food(int width, int height);
    void generateNewPosition();
    std::pair<int, int> getPosition() const;
};

#endif