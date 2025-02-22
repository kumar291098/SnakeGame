# Snake Game in C++

A classic Snake game implemented in C++ using Object-Oriented Programming (OOP) principles. The snake moves automatically, and the player controls its direction using **U (Up)**, **D (Down)**, **L (Left)**, and **R (Right)**. The game ends when the snake collides with the wall or itself.

---

## Features

- **Automatic Movement**: The snake moves forward automatically every **500ms**.
- **Direction Control**: Use **U**, **D**, **L**, and **R** to change the snake's direction.
- **Collision Detection**: The game ends if the snake collides with the wall or itself.
- **Food Generation**: Food appears at random positions on the board. The snake grows when it eats food.
- **Console-Based Graphics**: Simple and intuitive console-based interface.

---

## Technologies Used

- **C++**: Core programming language.
- **Object-Oriented Programming (OOP)**: Classes for `Snake`, `Board`, `Food`, and `Game`.
- **Multithreading**: Separate thread for automatic snake movement.
- **Data Structures**: `std::vector` for storing the snake's body segments.
- **Keyboard Input Handling**: Real-time input processing for direction changes.

---

## How to Play

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/snake-game-cpp.git
