#include "ai.hpp"

AI::AI() {
    position.x = 980;
    position.y = 300;
}

AI::~AI() {
}

void AI::draw() {
    DrawRectangle(position.x, position.y, 25, 50, WHITE);
}

void AI::move_up() {
    position.y -= 7;
    if (position.y < 0 + 50) {
        position.y = 0 + 50;
    }
}

void AI::move_down() {
    position.y += 7;
    if(position.y > 600 - 50) {
        position.y = position.y > 600 - 50;
    }
}

Rectangle AI::get_rect() {
    return {
        position.x,
        position.y,
        25.0f,
        50.0f
    };
}