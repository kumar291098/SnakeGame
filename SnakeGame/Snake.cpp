#include "Snake.h"

Snake::Snake() {
    // Initialize the snake with 3 segments
    body = { {5, 5}, {5, 6}, {5, 7} };
    direction = 'L'; // Initial direction
}

void Snake::move() {
    // Move the snake's body
    for (int i = body.size() - 1; i > 0; --i) {
        body[i] = body[i - 1];
    }

    // Move the head based on direction
    switch (direction) {
    case 'U': body[0].first--; break;
    case 'D': body[0].first++; break;
    case 'L': body[0].second--; break;
    case 'R': body[0].second++; break;
    }
}

void Snake::grow() {
    // Add a new segment to the snake's body
    body.push_back(body.back());
}

void Snake::setDirection(char dir) {
    // Prevent the snake from reversing direction
    if ((direction == 'U' && dir != 'D') ||
        (direction == 'D' && dir != 'U') ||
        (direction == 'L' && dir != 'R') ||
        (direction == 'R' && dir != 'L')) {
        direction = dir;
    }
}

bool Snake::checkCollision(int width, int height) const {
    // Check if the snake collides with the walls or itself
    auto head = body[0];
    if (head.first < 0 || head.first >= height || head.second < 0 || head.second >= width) {
        return true; // Wall collision
    }
    for (size_t i = 1; i < body.size(); ++i) {
        if (head == body[i]) {
            return true; // Self collision
        }
    }
    return false;
}

std::pair<int, int> Snake::getHead() const {
    return body[0];
}

const std::vector<std::pair<int, int>>& Snake::getBody() const {
    return body;
}