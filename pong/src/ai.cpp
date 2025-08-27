#include "ai.hpp"

// Constructor
AI::AI() {
    position.x = GetScreenWidth() - 35;
    position.y = GetScreenHeight() / 2 - 60;
}

// Deconstructor
AI::~AI() {
}

// Draw AI paddle to screen
void AI::draw() {
    DrawRectangle(position.x, position.y, 25, 120, WHITE);
}

// Function to move AI paddle up
void AI::move_up() {
    position.y -= 7;
    if (position.y < 0) {
        position.y = 0;
    }
}

// Function to move AI paddle down
void AI::move_down() {
    position.y += 7;
    if (position.y > 800 - 120) {
        position.y = 800 - 120;
    }
}

// Function to get AI paddle rectangle for collision detection
Rectangle AI::get_rect() {
    return {position.x, position.y, 25.0f, 120.0f};
}