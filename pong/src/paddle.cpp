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
}

// Function to move player paddle down
void Paddle::move_down() {
    position.y += speed;
}


// Function to get rectangle for collision handling
Rectangle Paddle::get_rect() {
    return {position.x, position.y, width, height};
}

// Function to fix paddle position to screen
void Paddle::clamp_to_screen() {
    if (position.y < 0) {
        position.y = 0;
    }
    if (position.y > GetScreenHeight() - height) {
        position.y = GetScreenHeight() - height;
    }
}
