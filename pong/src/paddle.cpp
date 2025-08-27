#include "paddle.hpp"

// Constructor
Paddle::Paddle(Vector2 pos, float w, float h, int s)
    : position(pos), width(w), height(h), speed(s) {
}

// Deconstructor
Paddle::~Paddle() = default;

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