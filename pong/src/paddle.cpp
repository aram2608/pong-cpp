#include "paddle.hpp"

// Constructor
Paddle::Paddle() {
    position.x = 10;
    position.y = 800 / 2 - 60;
}

// Deconstructor
Paddle::~Paddle() {
}

// Function to draw paddle to screen
void Paddle::draw() {
    DrawRectangle(position.x, position.y, 25, 120, WHITE);
}

// Function to move player paddle up
void Paddle::move_up() {
    position.y -= 7;
    if (position.y < 0) {
        position.y = 0;
    }
}

// Function to move player paddle down
void Paddle::move_down() {
    position.y += 7;
    if (position.y > 800 - 120) {
        position.y = 800 - 120;
    }
}

// Function to get rectangle for collision handling
Rectangle Paddle::get_rect() {
    return {position.x, position.y, 25.0f, 120.0f};
}