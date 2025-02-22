#include "Board.h"
#include <iostream>
#include <cstdlib> // for system("clear")

Board::Board(int w, int h) : width(w), height(h), snake(), food(w, h) {}

void Board::draw() const {
    system("clear"); // Clear the console (Linux/Mac)

    // Draw the board
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << "#"; // Draw walls
            }
            else if (i == food.getPosition().first && j == food.getPosition().second) {
                std::cout << "F"; // Draw food
            }
            else {
                bool isSnakeBody = false;
                for (const auto& segment : snake.getBody()) {
                    if (segment.first == i && segment.second == j) {
                        std::cout << "O"; // Draw snake
                        isSnakeBody = true;
                        break;
                    }
                }
                if (!isSnakeBody) {
                    std::cout << " "; // Empty space
                }
            }
        }
        std::cout << std::endl;
    }
}

void Board::update() {
    snake.move();
    if (snake.getHead() == food.getPosition()) {
        snake.grow();
        food.generateNewPosition();
    }
}

bool Board::isGameOver() const {
    return snake.checkCollision(width, height);
}

void Board::handleInput(char input) {
    snake.setDirection(input);
}