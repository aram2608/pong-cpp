#include "ball.hpp"
#include "game.hpp"

// Constructor
Ball::Ball() {
    position.x = 500;
    position.y = 300;
    speed = 3;
}

// Deconstructor
Ball::~Ball() {
}

// Function to draw the ball to the screen
void Ball::draw() {
    //DrawCircleV(position, 20.0f, WHITE);
    DrawCircle(position.x, position.y, 20.0f, WHITE);
}

// Function to update postion of the ball
void Ball::update() {
    position.x += speed;
}

Rectangle Ball::get_rect() {
    return {
        position.x,
        position.y,
        20.0f,
        20.0f
    };
}