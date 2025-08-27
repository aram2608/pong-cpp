#include "ball.hpp"

// Constructor
Ball::Ball() {
    position.x = 1280 / 2;
    position.y = 800 / 2;
    speed      = 5;
}

// Deconstructor
Ball::~Ball() {
}

// Function to draw the ball to the screen
void Ball::draw() {
    DrawCircle(position.x, position.y, 20.0f, WHITE);
}

// Function to update postion of the ball
void Ball::update() {
    position.x += speed;
}

// Function to return ball rectangle for collision detection
Rectangle Ball::get_rect() {
    return {position.x, position.y, 20.0f, 20.0f};
}