#include "paddle.hpp"

Paddle::Paddle() {
    position.x = 0;
    position.y = 800 / 2 - 60;
}

Paddle::~Paddle() {
}

void Paddle::draw() {
    DrawRectangle(position.x, position.y, 25, 120, WHITE);
}

void Paddle::move_up() {
    position.y -= 7;
    if (position.y < 0 + 50) {
        position.y = 0 + 50;
    }
}

void Paddle::move_down() {
    position.y += 7;
    if(position.y > 600 - 50) {
        position.y = 600 - 50;
    }
}

Rectangle Paddle::get_rect() {
    return {
        position.x,
        position.y,
        25.0f,
        120.0f
    };
}