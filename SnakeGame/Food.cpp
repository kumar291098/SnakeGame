#include "Food.h"
#include <cstdlib> // for rand()
#include <ctime>   // for time()

Food::Food(int width, int height) : width(width), height(height) {
    srand(time(0));
    generateNewPosition();
}

void Food::generateNewPosition() {
    position.first = rand() % (height - 2) + 1;
    position.second = rand() % (width - 2) + 1;
}

std::pair<int, int> Food::getPosition() const {
    return position;
}