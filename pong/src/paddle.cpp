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
    position.y -= 1;
}

void Paddle::move_down() {
    position.y += 1;
    // if(position.y > GetScreenHeight() - 50) {
    //     position.y = position.y > GetScreenHeight() - 50;
    // }
}