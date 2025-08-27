#include "ai.hpp"

AI::AI() {
    position.x = 1280 - 35;
    position.y = 800 / 2 - 60;
}

AI::~AI() {
}

void AI::draw() {
    DrawRectangle(position.x, position.y, 25, 120, WHITE);
}

void AI::move_up() {
    position.y -= 7;
    if (position.y < 0) {
        position.y = 0;
    }
}

void AI::move_down() {
    position.y += 7;
    if (position.y > 800 - 120) {
        position.y = 800 - 120;
    }
}

Rectangle AI::get_rect() {
    return {position.x, position.y, 25.0f, 120.0f};
}