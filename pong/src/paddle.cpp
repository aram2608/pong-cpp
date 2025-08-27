#include "paddle.hpp"

Paddle::Paddle() {
    position.x = 10;
    position.y = 800 / 2 - 60;
}

Paddle::~Paddle() {
}

void Paddle::draw() {
    DrawRectangle(position.x, position.y, 25, 120, WHITE);
}

void Paddle::move_up() {
    position.y -= 7;
    if (position.y < 0) {
        position.y = 0;
    }
}

void Paddle::move_down() {
    position.y += 7;
    if(position.y > 800 - 120) {
        position.y = 800 - 120;
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