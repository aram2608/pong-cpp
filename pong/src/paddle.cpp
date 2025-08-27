#include "paddle.hpp"

// Constructor
Paddle::Paddle() {
    position.x = 10;
    position.y = GetScreenHeight() / 2 - 60;
    height = 120;
    width = 25;
    speed = 6;
}

// Deconstructor
Paddle::~Paddle() {
}

// Function to draw paddle to screen
void Paddle::draw() {
    DrawRectangle(position.x, position.y, width, height, WHITE);
}

// Function to move player paddle up
void Paddle::move_up() {
    position.y -= speed;
    if (position.y < 0) {
        position.y = 0;
    }
}

// Function to move player paddle down
void Paddle::move_down() {
    position.y += speed;
    if (position.y > GetScreenHeight() - height) {
        position.y = GetScreenHeight() - height;
    }
}

// Function to get rectangle for collision handling
Rectangle Paddle::get_rect() {
    return {position.x, position.y, width, height};
}