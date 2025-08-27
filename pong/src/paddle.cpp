#include "paddle.hpp"

Paddle::Paddle() {
    position.x = 20;
    position.y = 300;
}

Paddle::~Paddle() {
}

void Paddle::draw() {
    DrawRectangle(position.x, position.y, 25, 50, WHITE);
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
        50.0f
    };
}