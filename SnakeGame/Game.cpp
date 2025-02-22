#include "Game.h"
#include <iostream>
#include <thread> // for sleep
#include <chrono> // for milliseconds

Game::Game(int width, int height) : board(width, height) {}

void Game::run() {
    char input;
    while (!board.isGameOver()) {
        board.draw();
        std::cout << "Use UDLR  to move the snake. Q to quit." << std::endl;
        std::cin >> input;
        if (input == 'Q' || input == 'q') break;
        board.handleInput(input);
        board.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Delay for smooth gameplay
    }
    std::cout << "Game Over!" << std::endl;
}