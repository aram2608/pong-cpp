#include "ball.hpp"

// Constructor
Ball::Ball() {
    position.x = 1280 / 2;
    position.y = 800 / 2;
    speed_x      = 7;
    speed_y      = 7;
    radius       = 20;
}

// Deconstructor
Ball::~Ball() {
}

// Function to draw the ball to the screen
void Ball::draw() {
    DrawCircle(position.x, position.y, radius, WHITE);
}

// Function to update postion of the ball
void Ball::update() {
    position.x += speed_x;
}

// Function to return ball rectangle for collision detection
Rectangle Ball::get_rect() {
    return {position.x, position.y, radius * 2.0f, radius * 2.0f};
}