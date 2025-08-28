#include "ball.hpp"

// Constructor
Ball::Ball() {
    position.x = GetScreenWidth() / 2;
    position.y = GetScreenHeight() / 2;
    set_speed();
    radius     = 20;
    diameter   = 40;
}

// Deconstructor
Ball::~Ball() {
}

// Function to randomly set speed of the ball
void Ball::set_speed() {
    int rand_value = GetRandomValue(1,4);
    if (rand_value == 1) {
        speed_x = 7;
        speed_y = 7;
    } else if (rand_value == 2) {
        speed_x = 7;
        speed_y = -7;
    } else if (rand_value == 3) {
        speed_x = -7;
        speed_y = 7;
    } else {
        speed_x = -7;
        speed_y = -7;
    }
}

// Function to draw the ball to the screen
void Ball::draw() {
    DrawCircle(position.x, position.y, radius, WHITE);
}

// Function to update postion of the ball
void Ball::update() {
    position.x += speed_x;
    position.y += speed_y;
    center = track_center();

    if (position.y + radius >= GetScreenHeight() || position.y - radius <= 0) {
        speed_y *= -1;
    }
}

// Function to redraw ball back in center
void Ball::reset() {
    position.x = GetScreenWidth() / 2;
    position.y = GetScreenHeight() / 2;
    set_speed();
}

// Function to track the center of the ball
float Ball::track_center() {
    float c = position.y;
    return c;
}

// Function to return ball rectangle for collision detection
Rectangle Ball::get_rect() {
    return {position.x, position.y, diameter, diameter};
}