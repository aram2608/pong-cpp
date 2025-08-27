#include "game.hpp"

// Constructor
Game::Game() {
    Ball   ball;
    Paddle paddle;
    AI     ai;
}

// Deconstructor
Game::~Game() {
}

// Function to draw game events to screen
void Game::draw() {
    paddle.draw();
    ball.draw();
    ai.draw();
}

// Function to handle game IO
void Game::handle_input() {
    if (IsKeyDown(KEY_UP))
        paddle.move_up();
    if (IsKeyDown(KEY_DOWN))
        paddle.move_down();
}

// Function to check collisions events
void Game::check_collision() {
    if (CheckCollisionRecs(ball.get_rect(), paddle.get_rect())) {
        ball.speed = 5;
    }
    if (CheckCollisionRecs(ball.get_rect(), ai.get_rect())) {
        ball.speed = -5;
    }
}

// Function to update game events
void Game::update() {
    check_collision();
    ball.update();
}